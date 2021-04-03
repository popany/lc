#include "gtest/gtest.h"

#include <vector>
#include <string>
#include "q000.h"

class Test000 : public ::testing::Test
{
protected:
    Test000()
    {}

    virtual ~Test000()
    {}

    virtual void SetUp()
    {}

    virtual void TearDown()
    {}
};

TEST_F(Test000, t1)
{
    Solution solution;
    ASSERT_EQ(000, 000);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
