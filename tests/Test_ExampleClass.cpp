#include <gtest/gtest.h>
#include "../ExampleClass.hpp"

struct Test_ExampleClass
    : public ::testing::Test
{
    ExampleClass *o;
    virtual void SetUp() override {
        o = new ExampleClass();
    }

    virtual void TearDown() override{
        delete o;
    }
};

TEST_F(Test_ExampleClass, testRemembersLast){
    EXPECT_EQ(0, o->setNewAndReturnLast(5));

    EXPECT_EQ(5, o->setNewAndReturnLast(3));

    EXPECT_EQ(3, o->setNewAndReturnLast(20));
}
