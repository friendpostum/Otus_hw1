#include "gtest/gtest.h"

#include "lib.h"

TEST(version, GT) {
    EXPECT_GT(version(), 0);
}

