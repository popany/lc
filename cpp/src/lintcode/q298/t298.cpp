#include "gtest/gtest.h"

#include <vector>
#include <string>
#include "q298.h"

class Test298 : public ::testing::Test
{
protected:
    Test298()
    {}

    virtual ~Test298()
    {}

    virtual void SetUp()
    {}

    virtual void TearDown()
    {}
};

TEST_F(Test298, t1)
{
    Solution solution;
    std::vector<int> v = solution.prime(19);

    ASSERT_EQ(v[0], 2);
    ASSERT_EQ(v[1], 3);
    ASSERT_EQ(v[2], 5);
    ASSERT_EQ(v[3], 7);
    ASSERT_EQ(v[4], 11);
    ASSERT_EQ(v[5], 13);
    ASSERT_EQ(v[6], 17);
    ASSERT_EQ(v[7], 19);
    ASSERT_EQ(v.size(), 8);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
