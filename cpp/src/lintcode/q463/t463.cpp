#include "gtest/gtest.h"

#include <vector>
#include <string>
#include "q463.h"

class Test463 : public ::testing::Test
{
protected:
    Test463()
    {}

    virtual ~Test463()
    {}

    virtual void SetUp()
    {}

    virtual void TearDown()
    {}
};

TEST_F(Test463, t1)
{
    Solution solution;
    std::vector<int> v{ 3, 2, 1, 4, 5 };
    solution.sortIntegers(v);
    ASSERT_EQ(v[0], 1);
    ASSERT_EQ(v[1], 2);
    ASSERT_EQ(v[2], 3);
    ASSERT_EQ(v[3], 4);
    ASSERT_EQ(v[4], 5);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
