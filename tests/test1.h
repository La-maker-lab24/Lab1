#ifndef TEST1_H
#define TEST1_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(test1, zero_discriminant) {
    double root1, root2;
    ASSERT_EQ(solve(1, -2, 1, &root1, &root2), 1);
    ASSERT_DOUBLE_EQ(root1, 1);
}

TEST(test1, negative) {
    double root1, root2;
    ASSERT_EQ(solve(1, 2, 3, &root1, &root2), 0);
}

TEST(test2, PositiveDiscriminant) {
    double root1, root2;
    ASSERT_EQ(solve(1, -3, 2, &root1, &root2), 2);
    ASSERT_DOUBLE_EQ(root1, 2);
    ASSERT_DOUBLE_EQ(root2, 1);
}

TEST(test3, InfiniteSolutions) {
    double root1, root2;
    ASSERT_EQ(solve(0, 0, 0, &root1, &root2), -1);
}

TEST(test4, NoSolutions) {
    double root1, root2;
    ASSERT_EQ(solve(0, 0, 5, &root1, &root2), 0);
}

TEST(test5, OneSolutionLinear) {
    double root1, root2;
    ASSERT_EQ(solve(0, 2, -4, &root1, &root2), 1);
    ASSERT_DOUBLE_EQ(root1, 2);
}

TEST(test6, NegativeCoefficients) {
    double root1, root2;
    ASSERT_EQ(solve(-1, 2, -1, &root1, &root2), 2);
    ASSERT_DOUBLE_EQ(root1, 3);
    ASSERT_DOUBLE_EQ(root2, 1);
}

TEST(test7, NonZeroLinear) {
    double root1, root2;
    ASSERT_EQ(solve(0, 3, -9, &root1, &root2), 1);
    ASSERT_DOUBLE_EQ(root1, 3);
}

TEST(test8, FractionalCoefficients) {
    double root1, root2;
    ASSERT_EQ(solve(0.5, -1.5, 0.5, &root1, &root2), 1);
    ASSERT_DOUBLE_EQ(root1, 1);
}

#endif // TEST1_H
