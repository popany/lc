#include "gtest/gtest.h"

#include <vector>
#include <string>
#include "q990.h"

class Test990 : public ::testing::Test
{
protected:
    Test990()
    {}

    virtual ~Test990()
    {}

    virtual void SetUp()
    {}

    virtual void TearDown()
    {}
};

TEST_F(Test990, t1)
{
    Solution solution;
    std::vector<std::string> v;
    v.push_back("a==b");
    v.push_back("b==c");
    ASSERT_TRUE(solution.equationsPossible(v));
}

TEST_F(Test990, t2)
{
    Solution solution;
    std::vector<std::string> v;
    v.push_back("a==b");
    v.push_back("b==c");
    v.push_back("a!=c");
    ASSERT_FALSE(solution.equationsPossible(v));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
