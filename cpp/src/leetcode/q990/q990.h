#pragma once

#include <vector>
#include <string>
#include <map>

class Solution {
    std::map<char, char> m;

    char getValue(char a) {
        if (m[a] == a) {
            return a;
        }
        return m[a] = getValue(m[a]);
    }

    void setValue(char a, char value) {
        m[m[a]] = value;
    }

public:
    bool equationsPossible(std::vector<std::string>& equations) {
        for (char a = 'a'; a <= 'z'; ++a) {
            m[a] = a;
        }

        for (auto it = equations.begin(); it != equations.end(); ++it) {
            if ((*it)[1] == '!') {
                continue;
            }
            char lhs = (*it)[0];
            char rhs = (*it)[3];

            char lhsValue = getValue(lhs);
            char rhsValue = getValue(rhs);
            setValue(lhs, rhsValue);
        }

        for (auto it = equations.begin(); it != equations.end(); ++it) {
            if ((*it)[1] == '=') {
                continue;
            }
            char lhs = (*it)[0];
            char rhs = (*it)[3];

            char lhsValue = getValue(lhs);
            char rhsValue = getValue(rhs);
            if (lhsValue == rhsValue) {
                return false;
            }
        }
        
        return true;
    }
};
