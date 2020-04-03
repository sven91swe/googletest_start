#include <gtest/gtest.h>
#include "../Example.hpp"

struct Test1
    : public ::testing::Test
{
    int x;
    virtual void SetUp() override {
        x = 5;
    }

    virtual void TearDown() override{
    }
};

TEST_F(Test1, isTrue){
    EXPECT_TRUE(true);
}

TEST_F(Test1, xIsFive){
    EXPECT_EQ(x, 5);
}

TEST_F(Test1, testSquare){
    EXPECT_EQ(x*x, ownSquare(x));
}
