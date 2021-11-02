# 线段颜色

## 题目

已知有若干线段, 每个线段均有颜色, 且不透明. 线段依次放置于数轴上, 后面的线段会覆盖前面的. 所有线段放置完成后, 求每种颜色的合计长度.


    struct LS
    {
        int b;  // 线段起始位置, >= 0
        int len;  // 线段长度, > 0
        int color;  // 线段颜色, > 0
    };

    class Solution
    {
    public:
        std::map<int, int> func(const std::vector<LS>& a);
    };

