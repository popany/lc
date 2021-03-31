#include "gtest/gtest.h"

#include <vector>
#include <string>
#include "q37.h"

class Test37 : public ::testing::Test
{
protected:
    Test37()
    {}

    virtual ~Test37()
    {}

    virtual void SetUp()
    {}

    virtual void TearDown()
    {}
};

TEST_F(Test37, t1)
{
    Solution solution;
    ASSERT_EQ(solution.reverseInteger(123), 321);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
