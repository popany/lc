#include "gtest/gtest.h"

#include <vector>
#include "m0403.h"

class Test0403 : public ::testing::Test
{
protected:
    Test0403()
    {}

    virtual ~Test0403()
    {}

    virtual void SetUp()
    {}

    virtual void TearDown()
    {}
};

TEST_F(Test0403, t)
{
    std::vector<TreeNode> nodes{ 0, 1, 2, 3, 4, 5, 6, 7, 8 };
    //        1
    //       /  \ 
    //      2    3
    //     / \    \ 
    //    4   5    7
    //   /
    //  8
    nodes[1].left = &nodes[2];
    nodes[1].right = &nodes[3];
    nodes[2].left = &nodes[4];
    nodes[2].right = &nodes[5];
    nodes[3].right = &nodes[7];
    nodes[4].left = &nodes[8];
    Solution solution;
    std::vector<ListNode*> r = solution.listOfDepth(&nodes[1]);
    ASSERT_EQ(r[0]->val, 1);
    ASSERT_EQ(r[0]->next, nullptr);
    ASSERT_EQ(r[1]->val, 2);
    ASSERT_EQ(r[1]->next->val, 3);
    ASSERT_EQ(r[1]->next->next, nullptr);
    ASSERT_EQ(r[2]->val, 4);
    ASSERT_EQ(r[2]->next->val, 5);
    ASSERT_EQ(r[2]->next->next->val, 7);
    ASSERT_EQ(r[2]->next->next->next, nullptr);
    ASSERT_EQ(r[3]->val, 8);
    ASSERT_EQ(r[3]->next->next, nullptr);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
