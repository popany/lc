#include "gtest/gtest.h"

#include <vector>
#include <string>
#include "q605.h"

class Test605 : public ::testing::Test
{
protected:
    Test605()
    {}

    virtual ~Test605()
    {}

    virtual void SetUp()
    {}

    virtual void TearDown()
    {}
};

TEST_F(Test605, t1)
{
    Solution solution;
    std::vector<int> org{ 1, 2, 3 };
    std::vector<std::vector<int>> seqs{ { 1, 2 }, { 1, 3} };
    ASSERT_FALSE(solution.sequenceReconstruction(org, seqs));
}

TEST_F(Test605, t2)
{
    Solution solution;
    std::vector<int> org{ 1, 2, 3 };
    std::vector<std::vector<int>> seqs{ { 1, 2 } };
    ASSERT_FALSE(solution.sequenceReconstruction(org, seqs));
}

TEST_F(Test605, t3)
{
    Solution solution;
    std::vector<int> org{ 1, 2, 3 };
    std::vector<std::vector<int>> seqs{ { 1, 2 }, { 1, 3 }, { 2, 3 } };
    ASSERT_TRUE(solution.sequenceReconstruction(org, seqs));
}

TEST_F(Test605, t4)
{
    Solution solution;
    std::vector<int> org{ 4, 1, 5, 2, 6, 3 };
    std::vector<std::vector<int>> seqs{ { 5, 2, 6, 3 }, { 4, 1, 5, 2 } };
    ASSERT_TRUE(solution.sequenceReconstruction(org, seqs));
}

TEST_F(Test605, t5)
{
    Solution solution;
    std::vector<int> org{ 1 };
    std::vector<std::vector<int>> seqs{ {} };
    ASSERT_FALSE(solution.sequenceReconstruction(org, seqs));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
