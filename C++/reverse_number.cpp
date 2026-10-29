core concept :- we need to find the pattern of occuerance and defien a number as revNum_ 

class Solution {
public:
    int reverse(int x) {  // try to use int x in leetcode problems 
        long long revN = 0; // Use long long to safely hold values larger than int
        
        while (x != 0) {
            int last_digit = x % 10;
            revN = (revN * 10) + last_digit;
            x = x / 10;
        }
        
        // Check if the reversed number exceeds 32-bit signed integer limits
        if (revN > INT_MAX || revN < INT_MIN) {
            return 0; // LeetCode rule: return 0 on overflow
        }
        
        return (int)revN;
    }
};
