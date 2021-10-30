# Readme

- [Readme](#readme)
  - [c++](#c)
    - [Build](#build)
      - [windows](#windows)
      - [Linux](#linux)
  - [LeetCode](#leetcode)
    - [tags](#tags)
      - [tree](#tree)
  - [LintCode](#lintcode)
    - [参考](#参考)
      - [入门](#入门)
      - [中期](#中期)
        - [动态规划](#动态规划)
        - [双指针算法](#双指针算法)
        - [广度优先](#广度优先)
        - [深度优先](#深度优先)
        - [分治算法](#分治算法)
        - [哈希表](#哈希表)
        - [堆](#堆)
        - [贪心](#贪心)
        - [链表](#链表)
        - [线段树](#线段树)
      - [按公司](#按公司)
        - [阿里](#阿里)
        - [字节](#字节)
        - [腾讯](#腾讯)
        - [百度](#百度)
        - [美团](#美团)
        - [Google](#google)
        - [Facebook](#facebook)
        - [Microsoft](#microsoft)
        - [Amazon](#amazon)
        - [领英](#领英)
        - [Apple](#apple)
    - [自找](#自找)
      - [链表](#链表-1)
      - [算法](#算法)
      - [树](#树)

## c++
### Build

#### windows

    md build-win32
    cd build-win32
    pushd
    Launch-VsDevShell.ps1
    popd
    cmake -G "Visual Studio 14 2015 Win64" ..
    cmake --build . --config debug

#### Linux

    mkdir build
    cd build
    cmake ..
    make -j

## LeetCode

### tags

#### [tree](https://leetcode-cn.com/tag/tree/)

- [110. 平衡二叉树](https://leetcode-cn.com/problems/balanced-binary-tree/)

       cpp/src/leetcode/q110

- [面试题 04.03. 特定深度节点链表](https://leetcode-cn.com/problems/list-of-depth-lcci/)

       cpp/src/leetcode/m0403

## LintCode

### [参考](https://www.zhihu.com/question/302483921/answer/1770931984)

#### 入门

1. [整数排序](https://www.lintcode.com/problem/463/)

       cpp/src/lintcode/q463

2. [反转一个3位整数](https://www.lintcode.com/problem/37/)

       cpp/src/lintcode/q37

3. [三数之中的最大值](https://www.lintcode.com/problem/283)

   略.

4. [从不充值的玩家](https://www.lintcode.com/problem/1921)

   略.

5. [寻找素数](https://www.lintcode.com/problem/298)

       cpp/src/lintcode/q298

6. [寻找最大值](https://www.lintcode.com/problem/297)

   略.

7. [链表节点计数](https://www.lintcode.com/problem/466)

   略.

8. [矩阵面积](https://www.lintcode.com/problem/454)

   略.

9. [打印X](https://www.lintcode.com/problem/25/)

   略.

10. [分数超过组长的组员](https://www.lintcode.com/problem/1919/)

    略.

11. [硬币翻面](https://www.lintcode.com/problem/1927/)

    略.

12. [张三的故事](https://www.lintcode.com/problem/1934/)

    略.

13. [寻找特定的患者](https://www.lintcode.com/problem/1931/)

    略.

14. [挂科最多的同学](https://www.lintcode.com/problem/1932/)

    略.

15. [查询用户邮箱](https://www.lintcode.com/problem/1938/)

    略.

16. [增长的疫情感染人数](https://www.lintcode.com/problem/1923/)

    略.

17. [公租房信息查询](https://www.lintcode.com/problem/1930/)

    略.

18. [查找重名的同学](https://www.lintcode.com/problem/1920/)

    略.

19. [超过3名球员所得到的分数]https://www.lintcode.com/problem/1925/)

    略.

20. [推荐学理科的同学]https://www.lintcode.com/problem/1924/)

    略.

#### 中期

##### 动态规划

1. [栅栏染色](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/514)

2. [爬楼梯](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/111)

3. [约翰的后花园](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/749)

4. [单词拆分](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/683)

5. [书籍复印](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/437)

6. [解码方法](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/512)

7. [通配符匹配](https://link.zhihu.com/?target=http%3A//lintcode.com/problem/192)

8. [旅行商问题](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/816)

9. [青蛙跳](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/622)

10. [骰子求和](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/20)

##### 双指针算法

1. [颜色分类](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/148)

2. [两数之和 III-数据结构设计](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/607)

3. [排颜色](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/143)

4. [最长子串覆盖](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/32)

5. [有效回文](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/891)

6. [带环链表](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/102)

7. [交错正负数](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/144)

8. [最接近的三数之和](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/59)

9. [四数之和](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/58)

10. [接雨水](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/363)

##### 广度优先

1. [岛屿的个数](https://www.lintcode.com/problem/433/)

       cpp/src/lintcode/q433

2. [序列重构](https://www.lintcode.com/problem/605/)

       cpp/src/lintcode/q463

3. [拓扑排序](https://www.lintcode.com/problem/127/)

xxxx

4. [课程表](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/615)

5. [买卖股票的最佳时期](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/151)

6. [安排课程](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/616)

7. [最大子数组差](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/45)

##### 深度优先

1. [子集](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/17)

2. [图是否是树](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/178)

3. [子数组之和](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/138)

4. [电话号码的字母组合](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/425)

5. [K数和](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/90)

6. [因式分解](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/652)

##### 分治算法

1. [子集](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/17)

2. [数组划分](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/31)

3. [验证二叉查找树](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/95)

4. [全排列](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/15)

5. [克隆图](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/137)

6. [排颜色](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/143)

7. [子数组之和](https://link.zhihu.com/?target=https%3A//www.lintcode.com/problem/138)

##### 哈希表

1. [两数之和](https://www.lintcode.com/problem/two-sum/)

2. [最长回文串](https://www.lintcode.com/problem/longest-palindrome/)

3. [两数组的交集](https://www.lintcode.com/problem/intersection-of-two-arrays)

4. [数据流中第一个唯一的数字](https://www.lintcode.com/problem/first-unique-number-in-data-stream/)

5. [两数和 II-输入已排序的数组](https://www.lintcode.com/problem/two-sum-ii-input-array-is-sorted)

##### 堆

1. [丑数](https://www.lintcode.com/problem/517/)

2. [堆化](https://www.lintcode.com/problem/130)

3. [滑动窗口的中位数](https://www.lintcode.com/problem/360)

4. [大楼轮廓](https://www.lintcode.com/problem/131)

5. [超级丑数](https://www.lintcode.com/problem/518)

6. [食物集合](https://www.lintcode.com/problem/964)

7. [影际网络](https://www.lintcode.com/problem/808)

##### 贪心

1. [会议室](https://www.lintcode.com/problem/919)

2. [俄罗斯套娃信封](https://www.lintcode.com/problem/602)

3. [最大乘积](https://www.lintcode.com/problem/304)

4. [加油站](https://www.lintcode.com/problem/187)

5. [最大子数组差](https://www.lintcode.com/problem/45)

##### 链表

1. [合并k个排序链表](https://www.lintcode.com/problem/104)

2. [数据流中第一个唯一的数字](https://www.lintcode.com/problem/685)

3. [带环链表](https://www.lintcode.com/problem/102)

4. [旋转链表](https://www.lintcode.com/problem/170)

5. [两个链表的交叉](https://www.lintcode.com/problem/380)

6. [K组翻转链表](https://www.lintcode.com/problem/450)

##### 线段树

1. [线段树的构造](https://www.lintcode.com/problem/201)

2. [线段树的查询](https://www.lintcode.com/problem/202)

3. [区间求和](https://www.lintcode.com/problem/207)

4. [区间最小数](https://www.lintcode.com/problem/205)

5. [我的日历](https://www.lintcode.com/problem/1063)

6. [排序方案](https://www.lintcode.com/problem/290)

7. [构造队列](https://www.lintcode.com/problem/998/)

8. [矩形面积](https://www.lintcode.com/problem/1450/)

#### 按公司

##### 阿里

- [牛牌](https://www.lintcode.com/problem/bull-cards)

- [连接字符串](https://www.lintcode.com/problem/split-concatenated-strings)

- [同和分割数组](https://www.lintcode.com/problem/split-array-with-equal-sum)

- [有效的括号字符串](https://www.lintcode.com/problem/valid-parenthesis-string)

- [路径和](https://www.lintcode.com/problem/path-sum-iv)

- [数组评分](https://www.lintcode.com/problem/array-score/)

##### 字节

- [删除字符](https://www.lintcode.com/problem/delete-char)

- [矩阵中的最长递增路径](https://www.lintcode.com/problem/longest-increasing-path-in-a-matrix)

- [恢复数组](https://www.lintcode.com/problem/restorearray)

- [食物组合](https://www.lintcode.com/problem/food-set)

- [组合新数字](https://www.lintcode.com/problem/combine-new-numbers)

- [最大点的集合](https://www.lintcode.com/problem/maximum-points-set)

##### 腾讯

- [最短休息日](https://www.lintcode.com/problem/minimum-rest-days)

- [解压字符串](https://www.lintcode.com/problem/decrypt-the-string)

- [中位数](https://www.lintcode.com/problem/median-ii)

- [移除箱子](https://www.lintcode.com/problem/remove-boxes)

- [最小分解](https://www.lintcode.com/problem/minimum-factorization)

- [歌曲时间](https://www.lintcode.com/problem/song-time)

##### 百度

- [等差切片](https://www.lintcode.com/problem/arithmetic-slices/)

- [祖玛游戏](https://www.lintcode.com/problem/zuma-game)

- [生命游戏](https://www.lintcode.com/problem/game-of-life)

- [字符至少出现K次的最长子串](https://www.lintcode.com/problem/longest-substring-with-at-least-k-repeating-characters)

- [整数替换](https://www.lintcode.com/problem/integer-replacement)

- [拆分子数组](https://www.lintcode.com/problem/split-array-largest-sum)

##### 美团

- [考试策略](https://www.lintcode.com/problem/test-strategy)

- [字符串划分](https://www.lintcode.com/problem/string-partition)

- [区间极值异或](https://www.lintcode.com/problem/xorsum-of-interval-extremum)

- [月份天数](https://www.lintcode.com/problem/the-months-days)

- [关联查询](https://www.lintcode.com/problem/associated-query)

- [字符删除](https://www.lintcode.com/problem/character-deletion)

##### Google

- [第k大元素](https://www.lintcode.com/problem/kth-largest-element/)

- [LRU缓存策略](https://www.lintcode.com/problem/lru-cache)

- [图是否是树](https://www.lintcode.com/problem/graph-valid-tree)

- [序列重构](https://www.lintcode.com/problem/sequence-reconstruction)

- [单词拆分 I](https://www.lintcode.com/problem/word-break)

- [最多有k个不同字符的最长子字符串](https://www.lintcode.com/problem/longest-substring-with-at-most-k-distinct-characters)

##### Facebook

- [三数之和](https://www.lintcode.com/problem/3sum)

- [颜色分类](https://www.lintcode.com/problem/sort-colors/)

- [单词接龙](https://www.lintcode.com/problem/word-ladder)

- [验证二叉查找树](https://www.lintcode.com/problem/validate-binary-search-tree)

- [搜索旋转排序数组](https://www.lintcode.com/problem/search-in-rotated-sorted-array)

##### Microsoft

- [买卖股票的最佳时机](https://www.lintcode.com/problem/best-time-to-buy-and-sell-stock)

- [滑动窗口的最大值](https://www.lintcode.com/problem/sliding-window-maximum)

- [二叉树的锯齿形层次遍历](https://www.lintcode.com/problem/binary-tree-zigzag-level-order-traversal/)

- [两个链表的交叉](https://www.lintcode.com/problem/intersection-of-two-linked-lists)

- [复制带随机指针的链表](https://www.lintcode.com/problem/copy-list-with-random-pointer)

##### Amazon

- [最长回文串](https://www.lintcode.com/problem/627/)

- [课程表](https://www.lintcode.com/problem/615)

- [最长无重复字符的子串](https://www.lintcode.com/problem/384)

- [安排课程](https://www.lintcode.com/problem/616)

- [飞行棋](https://www.lintcode.com/problem/1565/)

- [两个链表的交叉](https://www.lintcode.com/problem/380)

##### 领英

- [打劫房屋](https://www.lintcode.com/problem/392)

- [识别名人](https://www.lintcode.com/problem/645)

- [对称树](https://www.lintcode.com/problem/1360/)

- [划分和相等的子集](https://www.lintcode.com/problem/588)

- [最大栈](https://www.lintcode.com/problem/859)

##### Apple

- [接雨水](https://www.lintcode.com/problem/363)

- [反转整数](https://www.lintcode.com/problem/413/)

- [勒索信](https://www.lintcode.com/problem/1270)

- [比较版本号](https://www.lintcode.com/problem/1352/)

- [杨辉三角](https://www.lintcode.com/problem/1355)

- [序列化和反序列N叉树](https://www.lintcode.com/problem/1532/)

### 自找 

#### 链表

- [173 · 链表插入排序](https://www.lintcode.com/problem/173/leaderboard)

    cpp/src/lintcode/q173

- [98 · 链表排序](https://www.lintcode.com/problem/98)

    cpp/src/lintcode/q98

- [599 · 向循环有序链表插入节点](https://www.lintcode.com/problem/599)

    cpp/src/lintcode/q599

- [102 · 带环链表](https://www.lintcode.com/problem/102/)

    cpp/src/lintcode/q102

- [103 · 带环链表 II](https://www.lintcode.com/problem/103)

    cpp/src/lintcode/q103

- [380 · 两个链表的交叉](https://www.lintcode.com/problem/380)

    cpp/src/lintcode/q380

- [1229 · 循环数组中的环](https://www.lintcode.com/problem/1229)

    cpp/src/lintcode/q1229

- [1609 · 链表的中间结点](https://www.lintcode.com/problem/1609/)

#### 算法

- [24 · LFU缓存](https://www.lintcode.com/problem/24)

- [134 · LRU缓存策略](https://www.lintcode.com/problem/134/)

- [538 · 内存缓存](https://www.lintcode.com/problem/538)

- [64 · 合并排序数组（简单版）](https://www.lintcode.com/problem/64/)

- [839 · 合并两个排序的间隔列表](https://www.lintcode.com/problem/839)

- [577 · 合并K个排序间隔列表](https://www.lintcode.com/problem/577)

- [486 · 合并k个排序数组](https://www.lintcode.com/problem/486)

- [165 · 合并两个排序链表](https://www.lintcode.com/problem/165)

- [104 · 合并k个排序链表](https://www.lintcode.com/problem/104)

- [212 · 空格替换](https://www.lintcode.com/problem/212)

- [6 · 合并排序数组](https://www.lintcode.com/problem/6)

- [464 · 整数排序 II](https://www.lintcode.com/problem/464)

    cpp/src/lintcode/q464

- [428 · x的n次幂](https://www.lintcode.com/problem/428/)

    cpp/src/lintcode/q428

- [669 · 换硬币](https://www.lintcode.com/problem/669/leaderboard)

    cpp/src/lintcode/q669

- [749 · 约翰的后花园](https://www.lintcode.com/problem/749)

- [564 · 组合总和 IV](https://www.lintcode.com/problem/564)

- [563 · 背包问题 V](https://www.lintcode.com/problem/563)

- [562 · 背包问题 IV](https://www.lintcode.com/problem/562)

- [440 · 背包问题 III](https://www.lintcode.com/problem/440)

- [125 · 背包问题（二）](https://www.lintcode.com/problem/125)

- [92 · 背包问题](https://www.lintcode.com/problem/92)

- [1192 · 最长非公共子序列之1](https://www.lintcode.com/problem/1192/)

- [762 · 最长公共子序列 II](https://www.lintcode.com/problem/762/discuss)

- [77 · 最长公共子序列](https://www.lintcode.com/problem/77/)

    cpp/src/lintcode/q77

- [1702 · 不同的子序列 II](https://www.lintcode.com/problem/1702/)

- [1874 · 特定序列的第K小的数](https://www.lintcode.com/problem/1874/)

- [1880 · 序列中出现X次的最大数字X](https://www.lintcode.com/problem/1880/)

- [79 · 最长公共子串](https://www.lintcode.com/problem/79)

- [119 · 编辑距离](https://www.lintcode.com/problem/119)

- [623 · K步编辑](https://www.lintcode.com/problem/623)

- [640 · 一次编辑距离](https://www.lintcode.com/problem/640)

- [149 · 买卖股票的最佳时机](https://www.lintcode.com/problem/149)

- [150 · 买卖股票的最佳时机 II](https://www.lintcode.com/problem/150)

- [151 · 买卖股票的最佳时机 III](https://www.lintcode.com/problem/151)

- [393 · 买卖股票的最佳时机 IV](https://www.lintcode.com/problem/393)

- [1691 · 买卖股票的最佳时机 V](https://www.lintcode.com/problem/1691/)

#### 树

- [1746 · 二叉搜索树结点最小距离](https://www.lintcode.com/problem/1746/)

- [1744 · 递增顺序查找树](https://www.lintcode.com/problem/1744/)

- [1534 · 将二叉搜索树转换为已排序的双向链接列表](https://www.lintcode.com/problem/1534/)

- [1524 · 在二叉搜索树中查找](https://www.lintcode.com/problem/1524/)

- [1359 · 有序数组转换为二叉搜索树](https://www.lintcode.com/problem/1359/)

- [1311 · 二叉搜索树的最近公共祖先](https://www.lintcode.com/problem/1311/)

- [1307 · 验证二叉搜索树中的前序序列](https://www.lintcode.com/problem/1307/)

- [1188 · BST的最小绝对差](https://www.lintcode.com/problem/1188/)

- [1033 · BST中的最小差值](https://www.lintcode.com/problem/1033/)

- [915 · BST的中序前驱节点](https://www.lintcode.com/problem/915/)

- [902 · BST中第K小的元素](https://www.lintcode.com/problem/902/)

- [901 · 二叉搜索树中最接近的值 II](https://www.lintcode.com/problem/901/)

- [900 · 二叉搜索树中最接近的值](https://www.lintcode.com/problem/900/)

- [701 · 修剪二叉搜索树](https://www.lintcode.com/problem/701/)

- [691 · 恢复二叉搜索树](https://www.lintcode.com/problem/691/)

- [689 · 两数之和 - BST版本](https://www.lintcode.com/problem/689/)

- [661 · 把二叉搜索树转化成更大的树](https://www.lintcode.com/problem/661/)

- [448 · 二叉查找树的中序后继](https://www.lintcode.com/problem/448/)

- [177 · 把排序数组转换为高度最小的二叉搜索树](https://www.lintcode.com/problem/177/)

- [164 · 不同的二叉查找树 II](https://www.lintcode.com/problem/164/)

- [106 · 有序链表转换为二叉搜索树](https://www.lintcode.com/problem/106/)

- [95 · 验证二叉查找树](https://www.lintcode.com/problem/95/)

- [87 · 删除二叉查找树的节点](https://www.lintcode.com/problem/87/)

- [86 · 二叉查找树迭代器](https://www.lintcode.com/problem/86/)

- [85 · 在二叉查找树中插入节点](https://www.lintcode.com/problem/85/)

- [11 · 二叉查找树中搜索区间](https://www.lintcode.com/problem/11/)
