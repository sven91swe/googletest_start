#include <gtest/gtest.h>
#include "../ExampleFunction.hpp"

struct Test_ExampleFunction
    : public ::testing::Test
{
    int x;
    virtual void SetUp() override {
        x = 5;
    }

    virtual void TearDown() override{
    }
};

TEST_F(Test_ExampleFunction, isTrue){
    EXPECT_TRUE(true);
}

TEST_F(Test_ExampleFunction, xIsFive){
    EXPECT_EQ(x, 5);
}

TEST_F(Test_ExampleFunction, testSquare){
    EXPECT_EQ(x*x, ownSquare(x));
}
