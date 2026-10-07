#include <gtest/gtest.h>

extern "C" {
#include "practice13.h"
}

TEST(AddTest, PositiveNumbers)
{
    EXPECT_EQ(add(10, 5), 15);
}

TEST(AddTest, ZeroOrNegative)
{
    EXPECT_EQ(add(0, 5), 0);
    EXPECT_EQ(add(10, 0), 0);
}