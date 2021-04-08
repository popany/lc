#pragma once

#include <vector>
#include <unordered_map>
#include <algorithm>

 // Definition for Directed graph.
struct DirectedGraphNode
{
    int label;
    std::vector<DirectedGraphNode *> neighbors;
    DirectedGraphNode(int x) : label(x) {};
};

#if 0

// 广度优先
// 总耗时 142 ms
// 您的提交打败了 99.60% 的提交!
class Solution {
public:
    /**
     * @param graph: A list of Directed graph node
     * @return: Any topological order for the given graph.
     */
    std::vector<DirectedGraphNode*> topSort(std::vector<DirectedGraphNode*> graph) {
        std::unordered_map<DirectedGraphNode*, int> m;
        for (auto& e : graph) {
            if (!m.count(e)) {
                m[e] = 0;
            }
            
            for (auto& f : e->neighbors) {
                auto t = m.find(f);
                if (t == m.end()) {
                    m[f] = 1;
                } else {
                    t->second++;
                }
            }
        }
        std::vector<DirectedGraphNode*> v;
        for (auto& e : m) {
            if (!e.second) {
                v.push_back(e.first);
            }
        }
        int a = 0;
        int b = v.size();
        while (a < b) {
            for (int i = a; i < b; i++) {
                for (auto& e : v[i]->neighbors) {
                    int n = --m[e];
                    if (!n) {
                        v.push_back(e);
                    }
                }
            }
            a = b;
            b = v.size();
        }
        return v;
    }
};

#else

// 深度优先
// 总耗时 161 ms
// 您的提交打败了 98.40% 的提交!
class Solution {
    std::unordered_map<DirectedGraphNode*, int> m;
    void func(DirectedGraphNode* a, int h)
    {
        auto t = m.find(a);
        if (t == m.end()) {
            m[a] = h;
        } else if (t->second >= h) { // 已经访问过 a, 且上次访问时 a 的深度不小于当前深度, 则无需再次访问 a 和 a 的子节点
            return;
        } else {
            t->second = h;
        }
        for (auto& e : a->neighbors) {
            func(e, h + 1);
        }
    }

public:
    /**
     * @param graph: A list of Directed graph node
     * @return: Any topological order for the given graph.
     */
    std::vector<DirectedGraphNode*> topSort(std::vector<DirectedGraphNode*> graph) {
        int h = graph.size() * graph.size();
        for (auto& e : graph) {
            h -= graph.size();
            if (m.count(e)) {
                continue;
            }
            func(e, h);
        }
        std::sort(graph.begin(), graph.end(),
            [&] (DirectedGraphNode* a, DirectedGraphNode* b) -> bool {
                return m[a] < m[b];
            });
        return graph;
    }
};

#endif
