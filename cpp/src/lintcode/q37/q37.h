#pragma once

class Solution {
public:
    /**
     * @param number: A 3-digit number.
     * @return: Reversed number.
     */
    int reverseInteger(int number) {
        int t1 = number % 10;
        int t3 = number / 100;
        number -= t1;
        number -= t3 * 100;
        return number + t1 * 100 + t3;
    }
};
