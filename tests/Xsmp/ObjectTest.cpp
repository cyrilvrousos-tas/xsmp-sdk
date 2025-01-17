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

#include "gtest/gtest.h"
#include <Smp/InvalidObjectName.h>
#include <Xsmp/Object.h>

namespace Xsmp {

TEST(ObjectTest, Getters) {

    Object parent { "parent", "desc" };

    EXPECT_STREQ("parent", parent.GetName());
    EXPECT_STREQ("desc", parent.GetDescription());
    EXPECT_EQ(nullptr, parent.GetParent());

    Object child { "child", "child desc", &parent };
    EXPECT_STREQ("child", child.GetName());
    EXPECT_STREQ("child desc", child.GetDescription());
    EXPECT_EQ(&parent, child.GetParent());
}

TEST(ObjectTest, checkName) {

    EXPECT_THROW(Object(nullptr), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object(""), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("0aaa"), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("_aaa"), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("abczABCZ0129_["), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("[abc]"), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("[0]a"), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("AZé"), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("aa[]"), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("a[4][3]b"), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("a[4][3]b[]"), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("a[4][3][]"), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("a[4][310"), ::Smp::InvalidObjectName);
    EXPECT_THROW(Object("a[4][3a]"), ::Smp::InvalidObjectName);

    EXPECT_NO_THROW(Object("aZZZ___4541"));
    EXPECT_NO_THROW(Object("A"));
    EXPECT_NO_THROW(Object("a[4]"));
    EXPECT_NO_THROW(Object("a[4][3]"));
    EXPECT_NO_THROW(Object("AazZ_[4][3]"));

}

} // namespace Xsmp
