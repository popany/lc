#include "gtest/gtest.h"

#include <vector>
#include <string>
#include "q433.h"

class Test433 : public ::testing::Test
{
protected:
    Test433()
    {}

    virtual ~Test433()
    {}

    virtual void SetUp()
    {}

    virtual void TearDown()
    {}
};

TEST_F(Test433, t1)
{
    std::vector<std::vector<bool>> v;
    v.push_back(std::vector<bool>{ 1, 1, 0, 0, 0 });
    v.push_back(std::vector<bool>{ 0, 1, 0, 0, 1 });
    v.push_back(std::vector<bool>{ 0, 0, 0, 1, 1 });
    v.push_back(std::vector<bool>{ 0, 0, 0, 0, 0 });
    v.push_back(std::vector<bool>{ 0, 0, 0, 0, 1 });
    Solution solution;
    ASSERT_EQ(solution.numIslands(v), 3);
}

TEST_F(Test433, t2)
{
    std::vector<std::vector<bool>> v;
    v.push_back(std::vector<bool>{ 1, 1, 1, 1, 1, 1 });
    v.push_back(std::vector<bool>{ 1, 0, 0, 0, 0, 1 });
    v.push_back(std::vector<bool>{ 1, 0, 1, 1, 0, 1 });
    v.push_back(std::vector<bool>{ 1, 0, 0, 0, 0, 1 });
    v.push_back(std::vector<bool>{ 1, 1, 1, 1, 1, 1 });
    Solution solution;
    ASSERT_EQ(solution.numIslands(v), 2);
}

TEST_F(Test433, t3)
{
    std::vector<std::vector<bool>> v;
    v.push_back(std::vector<bool>{ 1, 1 });
    Solution solution;
    ASSERT_EQ(solution.numIslands(v), 1);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
