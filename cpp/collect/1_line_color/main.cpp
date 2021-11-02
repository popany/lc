#include <iostream>
#include <map>
#include <vector>

struct LS
{
    int b;
    int len;
    int color;
};

class Solution
{
    struct Node
    {
        int b;
        int e;
        int c;
        Node* lhs;
        Node* rhs;

        Node(int b, int e, int c):
            b(b),
            e(e),
            c(c),
            lhs(nullptr),
            rhs(nullptr)
        {}
    }

    void insert(Node* p, const LS& s)
    {
        int b = s.b;
        int e = s.e;
        if (p.b <= b && p.e >= e) {
            return;
        }
        if (p.b > b) {
            if (p->lhs) {
                LS lhs = { b, p.b - b, s.c };
                insert(p->lhs, lhs);
            }
            else {
                p->lhs = new Node(b, p.b, s.c);
            }
        }
        if (p.e < e) {
            if (p->rhs) {
                LS rhs = { p.e, e - p.e, s.c };
                insert(p->rhs, rhs);
            }
            else {
                p->rhs = new Node(p.e, e, s.c);
            }
        }
    }

    void calc(Node* p, std::map<int, int>& m)
    {
        if (!p) {
            return;
        }
        m[p->c] += (p->e - p->b);
        calc(p->lhs, m);
        calc(p->rhs, m);
        delete p;
    }

public:
    std::map<int, int> func(const std::vector<LS>& a)
    {
        std::map<int, int> m;
        if (a.empty()) {
            return m;
        }

        Node* p = new Node(a.back().b, a.back().b + a.back().len, a.back().c);
        for (int i = v.size() - 1; --i >= 0; ) {
            insert(p, a[i]);
        }

        calc(p, m);
        return m;
    }

};

