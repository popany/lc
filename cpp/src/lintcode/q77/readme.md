# [77 · 最长公共子序列](https://www.lintcode.com/problem/77/)

- [77 · 最长公共子序列](#77--最长公共子序列)
  - [描述](#描述)
  - [说明](#说明)
  - [样例](#样例)

中等

## 描述

给出两个字符串，找到最长公共子序列(LCS)，返回LCS的长度。

## 说明

最长公共子序列的定义：

- 最长公共子序列问题是在一组序列（通常2个）中找到最长公共子序列（注意：不同于子串，LCS不需要是连续的子串）。该问题是典型的计算机科学问题，是文件差异比较程序的基础，在生物信息学中也有所应用。

- https://en.wikipedia.org/wiki/Longest_common_subsequence_problem

## 样例

样例 1:

    输入:  "ABCD" and "EDCA"
    输出:  1

    解释:
    LCS 是 'A' 或  'D' 或 'C'

样例 2:

    输入: "ABCD" and "EACB"
    输出:  2

    解释: 
    LCS 是 "AC"