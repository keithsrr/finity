//
// Created by jinhai on 23-8-2.
//


#include <gtest/gtest.h>
#include "base_test.h"

class TestBodyTest : public BaseTest {
    void
    SetUp() override {
    }

    void
    TearDown() override {
    }
};

TEST_F(TestBodyTest, test1) {
    EXPECT_EQ(1, 1);
}