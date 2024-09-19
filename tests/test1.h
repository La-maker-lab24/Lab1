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
}

#endif // TEST1_H
