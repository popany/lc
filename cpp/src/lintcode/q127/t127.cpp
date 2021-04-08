#include "gtest/gtest.h"

#include <vector>
#include <string>
#include "q127.h"

class Test127 : public ::testing::Test
{
protected:
    Test127()
    {}

    virtual ~Test127()
    {}

    virtual void SetUp()
    {}

    virtual void TearDown()
    {}
};

TEST_F(Test127, t1)
{
    std::vector<DirectedGraphNode> v{ 0, 1, 2 };
    std::vector<DirectedGraphNode* > vp;
    for (int i = 0; i < v.size(); i++) {
        vp.push_back(&v[i]);
    }
    vp[0]->neighbors.push_back(vp[2]);
    Solution solution;
    auto r = solution.topSort(vp);
    ASSERT_TRUE(r[0]->label < r[2]->label);
    ASSERT_TRUE(r[1]->label < r[2]->label);
}

TEST_F(Test127, t2)
{
    std::vector<DirectedGraphNode> v{ 0, 1, 2, 3, 4, 5 };
    std::vector<DirectedGraphNode* > vp;
    for (int i = 0; i < v.size(); i++) {
        vp.push_back(&v[i]);
    }
    vp[0]->neighbors.push_back(vp[5]);
    Solution solution;
    auto r = solution.topSort(vp);
    ASSERT_TRUE(r[0]->label < r[5]->label);
    ASSERT_TRUE(r[1]->label < r[5]->label);
    ASSERT_TRUE(r[2]->label < r[5]->label);
    ASSERT_TRUE(r[3]->label < r[5]->label);
    ASSERT_TRUE(r[4]->label < r[5]->label);
}

TEST_F(Test127, t3)
{
    std::vector<DirectedGraphNode> v{ 0, 1, 2, 3, 4, 5 };
    std::vector<DirectedGraphNode* > vp;
    for (int i = 0; i < v.size(); i++) {
        vp.push_back(&v[i]);
    }
    vp[0]->neighbors.push_back(vp[1]);
    vp[0]->neighbors.push_back(vp[2]);
    vp[0]->neighbors.push_back(vp[3]);
    vp[1]->neighbors.push_back(vp[4]);
    vp[2]->neighbors.push_back(vp[4]);
    vp[2]->neighbors.push_back(vp[5]);
    vp[3]->neighbors.push_back(vp[4]);
    vp[3]->neighbors.push_back(vp[5]);
    Solution solution;
    auto r = solution.topSort(vp);
    ASSERT_TRUE(r[0]->label < r[1]->label);
    ASSERT_TRUE(r[0]->label < r[2]->label);
    ASSERT_TRUE(r[0]->label < r[3]->label);
    ASSERT_TRUE(r[1]->label < r[4]->label);
    ASSERT_TRUE(r[2]->label < r[4]->label);
    ASSERT_TRUE(r[2]->label < r[5]->label);
    ASSERT_TRUE(r[3]->label < r[4]->label);
    ASSERT_TRUE(r[3]->label < r[5]->label);
}

TEST_F(Test127, t4)
{
    std::vector<DirectedGraphNode> v{ 0, 1, 2, 3, 4, 5 };
    std::vector<DirectedGraphNode* > vp;
    for (int i = 0; i < v.size(); i++) {
        vp.push_back(&v[i]);
    }
    vp[0]->neighbors.push_back(vp[2]);
    vp[0]->neighbors.push_back(vp[3]);
    vp[0]->neighbors.push_back(vp[4]);
    vp[2]->neighbors.push_back(vp[5]);
    vp[2]->neighbors.push_back(vp[3]);
    vp[3]->neighbors.push_back(vp[5]);
    vp[3]->neighbors.push_back(vp[4]);
    vp[4]->neighbors.push_back(vp[5]);
    vp[1]->neighbors.push_back(vp[2]);
    Solution solution;
    auto r = solution.topSort(vp);
    ASSERT_TRUE(r[0]->label < r[2]->label);
    ASSERT_TRUE(r[1]->label < r[2]->label);
    ASSERT_TRUE(r[2]->label < r[3]->label);
    ASSERT_TRUE(r[3]->label < r[4]->label);
    ASSERT_TRUE(r[4]->label < r[5]->label);
}

TEST_F(Test127, t5)
{
    std::vector<DirectedGraphNode> v{ 0, 1, 2, 3, 4 };
    std::vector<DirectedGraphNode* > vp;
    for (int i = 0; i < v.size(); i++) {
        vp.push_back(&v[i]);
    }
    vp[0]->neighbors.push_back(vp[1]);
    vp[0]->neighbors.push_back(vp[2]);
    vp[0]->neighbors.push_back(vp[3]);
    vp[0]->neighbors.push_back(vp[4]);
    vp[1]->neighbors.push_back(vp[3]);
    vp[1]->neighbors.push_back(vp[4]);
    vp[2]->neighbors.push_back(vp[1]);
    vp[2]->neighbors.push_back(vp[4]);
    vp[3]->neighbors.push_back(vp[4]);
    Solution solution;
    auto r = solution.topSort(vp);
    ASSERT_EQ(r[0]->label, 0);
    ASSERT_EQ(r[1]->label, 2);
    ASSERT_EQ(r[2]->label, 1);
    ASSERT_EQ(r[3]->label, 3);
    ASSERT_EQ(r[4]->label, 4);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
