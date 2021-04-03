#include "gtest/gtest.h"

#include <vector>
#include <string>
#include "q77.h"

class Test77 : public ::testing::Test
{
protected:
    Test77()
    {}

    virtual ~Test77()
    {}

    virtual void SetUp()
    {}

    virtual void TearDown()
    {}
};

TEST_F(Test77, t1)
{
    Solution solution;
    std::string a = "a";
    std::string b = "a";
    ASSERT_EQ(solution.longestCommonSubsequence(a, b), 1);
}

TEST_F(Test77, t2)
{
    Solution solution;
    std::string a = "a";
    std::string b = "b";
    ASSERT_EQ(solution.longestCommonSubsequence(a, b), 0);
}

TEST_F(Test77, t3)
{
    Solution solution;
    std::string a = "a";
    std::string b = "ba";
    ASSERT_EQ(solution.longestCommonSubsequence(a, b), 1);
}

TEST_F(Test77, t4)
{
    Solution solution;
    std::string a = "abc";
    std::string b = "bab";
    ASSERT_EQ(solution.longestCommonSubsequence(a, b), 2);
}

TEST_F(Test77, t5)
{
    Solution solution;
    std::string a = "abcd";
    std::string b = "babdabc";
    ASSERT_EQ(solution.longestCommonSubsequence(a, b), 3);
}

TEST_F(Test77, t6)
{
    Solution solution;
    std::string a = "abcde";
    std::string b = "babdabced";
    ASSERT_EQ(solution.longestCommonSubsequence(a, b), 4);
}

TEST_F(Test77, t7)
{
    Solution solution;
    std::string a = "abcdde";
    std::string b = "babdabced";
    ASSERT_EQ(solution.longestCommonSubsequence(a, b), 4);
}

TEST_F(Test77, t8)
{
    Solution solution;
    std::string a = "abcdde";
    std::string b = "babdabcadaed";
    ASSERT_EQ(solution.longestCommonSubsequence(a, b), 5);
}

TEST_F(Test77, t9)
{
    Solution solution;
    std::string a = "1a2b3c4d5d6e7";
    std::string b = "babdabcadaed";
    ASSERT_EQ(solution.longestCommonSubsequence(a, b), 5);
}

TEST_F(Test77, t10)
{
    Solution solution;
    std::string a = "cbbeedeaccbacecabdadaddcbacddacedccbaacccdeecbceaeccdaccdcdeeeceecbbcabadcdceabc";
    std::string b = "bdabbddebceeeeaeadcdcaacdcedbbaaaacceacbbcadcedabeebeadaecadcaebcdaeacebeabcedba";
    ASSERT_EQ(solution.longestCommonSubsequence(a, b), 46);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
