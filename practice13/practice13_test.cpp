#include <gtest/gtest.h>

extern "C" {
#include "practice13.h"
}

TEST(AddTest, PositiveNumbers)
{
    EXPECT_EQ(add(10, 5), 15);
}