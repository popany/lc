# 1229 · 循环数组中的环

算法

中等

通过率

34%

## 描述

给你一个包含正整数和负整数的数组。如果在某个位置包含正整数 n ，那么你将从这个位置出发正向（向右）移动 n 步；相反的，如果在某个位置包含负整数 -n ，那么你将从这个位置出发反向（向左）移动 n 步。数组被视为首尾相连的，即第一个元素视为在最后一个元素的右边，最后一个元素视为在第一个元素的左边。你的任务是判断其中是否包含环：一个环从某一个确定的位置出发，在经过若干次移动后仍能回到这个位置。环中必须包含一个以上的元素，且环必须是单向（不是正向就是反向）移动的。

数组中保证不会出现数字0。

## 样例

### 样例1

输入：[2, -1, 1, 2, 2]

输出：true

解释：存在一个环，其下标可以表示为0 -> 2 -> 3 -> 0。

### 样例2

输入：[-1, 2]
输出：false

## 挑战

你能否在 O(n) 时间复杂度和 O(1) 空间复杂度内找到环

## 题解

    class Solution {
        bool hasLoop(const vector<int>& nums, int p) {
            int a = p;
            bool pos = nums[p] > 0;
            for (int i = 0; i < nums.size(); ++i) {
                if (pos != (nums[a] > 0)) {  // 环必须是单向（不是正向就是反向）移动的
                    return false;
                }
                int n = (a + nums[a]) % int(nums.size());
                n = n >= 0 ? n : n + int(nums.size());
                if (n == a) {
                    return false;
                }
                if (n == p) {
                    return true;
                }
                a = n;
            }
            return true;
        }

    public:
        /**
        * @param nums: an array of positive and negative integers
        * @return: if there is a loop in this array
        */
        bool circularArrayLoop(vector<int> &nums) {
            for (int i = 0; i < nums.size(); ++i) {
                if (hasLoop(nums, i)) {
                    return true;
                }
            }
            return false;
        }
    };
