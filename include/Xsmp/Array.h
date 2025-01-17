// Copyright 2023 THALES ALENIA SPACE FRANCE. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef XSMP_ARRAY_H_
#define XSMP_ARRAY_H_

#include <cstddef>
#include <iterator>
#include <stdexcept>
#include <string>

namespace Xsmp {

namespace Annotation {
/// Annotation indicating that a field of an array type implements ISimpleArrayField instead of IArrayField
struct simpleArray {
};
} //namespace Annotation

/// A SMP Array.
/// Contains an internalArray field as defined in ECSS SMP
/// Provides similar interfaces as a std::array
///
/// @tparam  T
///     Type of element.
/// @tparam  Nm
///     Number of elements.
/// @tparam  options
///     a list of options.

template<typename T, std::size_t Nm, typename ... options>
struct Array {
    using simple = Array<T, Nm, ::Xsmp::Annotation::simpleArray, options...>;
    using value_type = T;
    using pointer = value_type *;
    using const_pointer = const value_type *;
    using reference = value_type &;
    using const_reference = const value_type &;
    using iterator = value_type *;
    using const_iterator = const value_type *;
    using size_type = std::size_t;
    using difference_type = std::ptrdiff_t;
    using reverse_iterator = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    T internalArray[Nm];

    // No explicit construct/copy/destroy for aggregate type.

    constexpr void fill(const value_type &_u) {
        std::fill_n(begin(), size(), _u);
    }

    constexpr void swap(Array &_other) noexcept {
        std::swap_ranges(begin(), end(), _other.begin());
    }

    // Iterators.
    [[nodiscard]] constexpr iterator begin() noexcept {
        return iterator(data());
    }

    [[nodiscard]] constexpr const_iterator begin() const noexcept {
        return const_iterator(data());
    }

    [[nodiscard]] constexpr iterator end() noexcept {
        return iterator(data() + Nm);
    }

    [[nodiscard]] constexpr const_iterator end() const noexcept {
        return const_iterator(data() + Nm);
    }

    [[nodiscard]] constexpr reverse_iterator rbegin() noexcept {
        return reverse_iterator(end());
    }

    [[nodiscard]] constexpr const_reverse_iterator rbegin() const noexcept {
        return const_reverse_iterator(end());
    }

    [[nodiscard]] constexpr reverse_iterator rend() noexcept {
        return reverse_iterator(begin());
    }

    [[nodiscard]] constexpr const_reverse_iterator rend() const noexcept {
        return const_reverse_iterator(begin());
    }

    [[nodiscard]] constexpr const_iterator cbegin() const noexcept {
        return const_iterator(data());
    }

    [[nodiscard]] constexpr const_iterator cend() const noexcept {
        return const_iterator(data() + Nm);
    }

    [[nodiscard]] constexpr const_reverse_iterator crbegin() const noexcept {
        return const_reverse_iterator(end());
    }

    [[nodiscard]] constexpr const_reverse_iterator crend() const noexcept {
        return const_reverse_iterator(begin());
    }

    // Capacity.
    [[nodiscard]] constexpr size_type size() const noexcept {
        return Nm;
    }

    [[nodiscard]] constexpr size_type max_size() const noexcept {
        return Nm;
    }

    [[nodiscard]] constexpr bool empty() const noexcept {
        return size() == static_cast<size_type>(0);
    }

    // Element access.
    [[nodiscard]] constexpr reference operator[](size_type index) noexcept {
        static_assert(Nm >0,"operator[] not available for empty arrays.");
        return internalArray[index];
    }

    [[nodiscard]] constexpr const_reference operator[](
            size_type index) const noexcept {
        static_assert(Nm >0,"operator[] not available for empty arrays.");
        return internalArray[index];
    }

    constexpr reference at(size_type index) {
        if (index >= Nm)
            throw std::out_of_range { "Array::at: index (which is "
                    + std::to_string(index) + ") >= Nm (which is "
                    + std::to_string(Nm) + ")" };

        return internalArray[index];
    }

    constexpr const_reference at(size_type index) const {
        // Result of conditional expression must be an lvalue so use
        // boolean ? lvalue : (throw-expr, lvalue)
        return index < Nm ?
                internalArray[index] :
                (throw std::out_of_range { "Array::at: index (which is "
                        + std::to_string(index) + ") >= Nm (which is "
                        + std::to_string(Nm) + ")" }, internalArray[0]);
    }

    [[nodiscard]] constexpr reference front() noexcept {
        static_assert(Nm >0,"front() not available for empty arrays.");
        return internalArray[static_cast<size_type>(0)];
    }

    [[nodiscard]] constexpr const_reference front() const noexcept {
        static_assert(Nm >0,"front() not available for empty arrays.");
        return internalArray[static_cast<size_type>(0)];
    }

    [[nodiscard]] constexpr reference back() noexcept {
        static_assert(Nm >0,"back() not available for empty arrays.");
        return internalArray[Nm - static_cast<size_type>(1)];
    }

    [[nodiscard]] constexpr const_reference back() const noexcept {
        static_assert(Nm >0,"back() not available for empty arrays.");
        return internalArray[Nm - static_cast<size_type>(1)];
    }

    [[nodiscard]] constexpr pointer data() noexcept {
        return internalArray;
    }

    [[nodiscard]] constexpr const_pointer data() const noexcept {
        return internalArray;
    }
};

// Array comparisons.
template<typename T, std::size_t Nm, typename ... options>
[[nodiscard]] constexpr bool operator==(const Array<T, Nm, options...> &_one,
        const Array<T, Nm, options...> &_two) {
    return std::equal(_one.begin(), _one.end(), _two.begin());
}

template<typename T, std::size_t Nm, typename ... options>
[[nodiscard]] constexpr bool operator!=(const Array<T, Nm, options...> &_one,
        const Array<T, Nm, options...> &_two) {
    return !(_one == _two);
}

template<typename T, std::size_t Nm, typename ... options>
[[nodiscard]] constexpr bool operator<(const Array<T, Nm, options...> &_a,
        const Array<T, Nm, options...> &_b) {
    return std::lexicographical_compare(_a.begin(), _a.end(), _b.begin(),
            _b.end());
}

template<typename T, std::size_t Nm, typename ... options>
[[nodiscard]] constexpr bool operator>(const Array<T, Nm, options...> &_one,
        const Array<T, Nm, options...> &_two) {
    return _two < _one;
}

template<typename T, std::size_t Nm, typename ... options>
[[nodiscard]] constexpr bool operator<=(const Array<T, Nm, options...> &_one,
        const Array<T, Nm, options...> &_two) {
    return !(_one > _two);
}

template<typename T, std::size_t Nm, typename ... options>
[[nodiscard]] constexpr bool operator>=(const Array<T, Nm, options...> &_one,
        const Array<T, Nm, options...> &_two) {
    return !(_one < _two);
}

} // namespace Xsmp

#endif // XSMP_ARRAY_H_
