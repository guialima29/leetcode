#include <limits>
#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        const int MIN_INT = std::numeric_limits<int>::min();
        const int MAX_INT = std::numeric_limits<int>::max();
        if (x >= MIN_INT && x <= MAX_INT) {
            long long x_rev = 0;
            int num = x;

            while (x > 0) {
                x_rev = x_rev * 10 + x % 10;
                x = x/10;
            }
        
            if (x_rev == num) {
                return true;
            }
            return false;
        }
        return false;
    }
};