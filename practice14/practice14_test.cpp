#include <gtest/gtest.h>

extern "C" {
#include "practice14.h"
}

TEST(AddTest, PositiveNumbers)
{
    EXPECT_EQ(add(10, 5), 15);
}