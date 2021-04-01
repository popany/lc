#pragma once

#include <vector>
#include <queue>

#if 0
// 只找右、下
// 总耗时 61 ms
// 您的提交打败了 60.00% 的提交!
class Solution {
    struct Pos {
        int x;
        int y;
        Pos(int x, int y): x(x), y(y) {}
    };
public:
    /**
     * @param grid: a boolean 2D matrix
     * @return: an integer
     */
    int numIslands(std::vector<std::vector<bool>> &grid) {
        if (grid.empty()) {
            return 0;
        }
        int h = grid.size();
        int w = grid[0].size();
        std::vector<int> m(h * w, 0);
        std::queue<Pos> q;
        int n = 0;
        int round = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (!m[i * w + j] && grid[i][j]) {
                    round++;
                    q.push(Pos(j, i));
                    int d = 1;
                    while (!q.empty()) {
                        Pos p = q.front();
                        if (p.x + 1 < w && grid[p.y][p.x + 1]) {
                            if (m[p.y * w + p.x + 1]) {
                                if (m[p.y * w + p.x + 1] != round) { // 处理有环的情况
                                    d = 0;
                                }
                            } else {
                                m[p.y * w + p.x + 1] = round;
                                q.push(Pos(p.x + 1, p.y));
                            }
                        }
                        if (p.y + 1 < h && grid[p.y + 1][p.x]) {
                            if (m[(p.y + 1) * w + p.x]) {
                                if (m[(p.y + 1) * w + p.x] != round) {
                                    d = 0;
                                }
                            } else {
                                m[(p.y + 1) * w + p.x] = round;
                                q.push(Pos(p.x, p.y + 1));
                            }
                        }
                        q.pop();
                    }
                    n += d;
                }
            }
        }
        return n;
    }
};

#else

#  if 0
// 上、下、左、右都找
// 总耗时 61 ms
// 您的提交打败了 60.00% 的提交!
class Solution {
    struct Pos {
        int x;
        int y;
        Pos(int x, int y): x(x), y(y) {}
    };

public:
    /**
     * @param grid: a boolean 2D matrix
     * @return: an integer
     */
    int numIslands(std::vector<std::vector<bool>> &grid) {
        if (grid.empty()) {
            return 0;
        }
        int h = grid.size();
        int w = grid[0].size();
        std::vector<bool> m(h * w, false);
        std::queue<Pos> q;
        int n = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (!m[i * w + j] && grid[i][j]) {
                    n++;
                    q.push(Pos(j, i));
                    while (!q.empty()) {
                        Pos p = q.front();
                        if (p.x - 1 >= 0 && grid[p.y][p.x - 1]) {
                            if (!m[p.y * w + p.x - 1]) {
                                q.push(Pos(p.x - 1, p.y));
                                m[p.y * w + p.x - 1] = true;
                            } 
                        }
                        if (p.x + 1 < w && grid[p.y][p.x + 1]) {
                            if (!m[p.y * w + p.x + 1]) {
                                q.push(Pos(p.x + 1, p.y));
                                m[p.y * w + p.x + 1] = true;
                            }
                        }
                        if (p.y - 1 >= 0 && grid[p.y - 1][p.x]) {
                            if (!m[(p.y - 1) * w + p.x]) {
                                q.push(Pos(p.x, p.y - 1));
                                m[(p.y - 1) * w + p.x] = true;
                            }
                        }
                        if (p.y + 1 < h && grid[p.y + 1][p.x]) {
                            if (!m[(p.y + 1) * w + p.x]) {
                                q.push(Pos(p.x, p.y + 1));
                                m[(p.y + 1) * w + p.x] = true;
                            }
                        }

                        q.pop();
                    }
                }
            }
        }
        return n;
    }
};
#  else
// 上、下、左、右都找, 使用二维数组
// 总耗时 61 ms
// 您的提交打败了 60.00% 的提交!
class Solution {
    struct Pos {
        int x;
        int y;
        Pos(int x, int y): x(x), y(y) {}
    };

public:
    /**
     * @param grid: a boolean 2D matrix
     * @return: an integer
     */
    int numIslands(std::vector<std::vector<bool>> &grid) {
        if (grid.empty()) {
            return 0;
        }
        int h = grid.size();
        int w = grid[0].size();
        std::vector<std::vector<bool>> m(h, std::vector<bool>(w, false));
        std::queue<Pos> q;
        int n = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (!m[i][j] && grid[i][j]) {
                    n++;
                    q.push(Pos(j, i));
                    while (!q.empty()) {
                        Pos p = q.front();
                        if (p.x - 1 >= 0 && grid[p.y][p.x - 1]) {
                            if (!m[p.y][p.x - 1]) {
                                q.push(Pos(p.x - 1, p.y));
                                m[p.y][p.x - 1] = true;
                            } 
                        }
                        if (p.x + 1 < w && grid[p.y][p.x + 1]) {
                            if (!m[p.y][p.x + 1]) {
                                q.push(Pos(p.x + 1, p.y));
                                m[p.y][p.x + 1] = true;
                            }
                        }
                        if (p.y - 1 >= 0 && grid[p.y - 1][p.x]) {
                            if (!m[p.y - 1][p.x]) {
                                q.push(Pos(p.x, p.y - 1));
                                m[p.y - 1][p.x] = true;
                            }
                        }
                        if (p.y + 1 < h && grid[p.y + 1][p.x]) {
                            if (!m[p.y + 1][p.x]) {
                                q.push(Pos(p.x, p.y + 1));
                                m[p.y + 1][p.x] = true;
                            }
                        }

                        q.pop();
                    }
                }
            }
        }
        return n;
    }
};
#  endif

#endif