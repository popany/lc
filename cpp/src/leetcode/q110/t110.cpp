#include "gtest/gtest.h"

#include <vector>
#include "q110.h"

class Test110 : public ::testing::Test
{
protected:
    Test110()
    {}

    virtual ~Test110()
    {}

    virtual void SetUp()
    {}

    virtual void TearDown()
    {}
};

TEST_F(Test110, t1)
{
    Solution solution;
    ASSERT_TRUE(solution.isBalanced(nullptr));
}

TEST_F(Test110, t2)
{
    std::vector<TreeNode> nodes(7);
    //       3
    //      / \
    //     9  20
    //       /  \
    //      15   7
    nodes[0].left = &nodes[1];
    nodes[0].right = &nodes[2];
    nodes[2].left = &nodes[5];
    nodes[2].right = &nodes[6];
    Solution solution;
    ASSERT_TRUE(solution.isBalanced(&nodes[0]));
}

TEST_F(Test110, t3)
{
    std::vector<TreeNode> nodes(7);
    //       3
    //      / \
    //     9  20
    //       /
    //      15
    nodes[0].left = &nodes[1];
    nodes[0].right = &nodes[2];
    nodes[2].left = &nodes[5];
    Solution solution;
    ASSERT_TRUE(solution.isBalanced(&nodes[0]));
}

TEST_F(Test110, t4)
{
    std::vector<TreeNode> nodes(7);
    //       3
    //        \
    //        20
    //       /
    //      15
    nodes[0].right = &nodes[2];
    nodes[2].left = &nodes[5];
    Solution solution;
    ASSERT_FALSE(solution.isBalanced(&nodes[0]));
}

TEST_F(Test110, t5)
{
    std::vector<TreeNode> nodes(9);
    //       1
    //      / \
    //     2   2
    //    / \
    //   3   3
    //  / \
    // 4   4
    nodes[0].left = &nodes[1];
    nodes[0].right = &nodes[2];
    nodes[1].left = &nodes[3];
    nodes[1].right = &nodes[4];
    nodes[3].left = &nodes[7];
    nodes[3].right = &nodes[8];
    Solution solution;
    ASSERT_FALSE(solution.isBalanced(&nodes[0]));
}

TEST_F(Test110, t6)
{
    std::vector<TreeNode> nodes(9);
    //       1
    //      / \
    //     2   2
    //    / \
    //   3   3
    //  / 
    // 4
    nodes[0].left = &nodes[1];
    nodes[0].right = &nodes[2];
    nodes[1].left = &nodes[3];
    nodes[3].left = &nodes[7];
    Solution solution;
    ASSERT_FALSE(solution.isBalanced(&nodes[0]));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
