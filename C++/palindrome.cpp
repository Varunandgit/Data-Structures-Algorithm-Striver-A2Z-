LC style

core concept :- to be pallindrome a number must be equal to its rev n and negative numbers can never be  pallindrome 




CODE :-


class Solution {
public:
    bool isPalindrome(int x) {
        long long dup = x;     ========> because we will be comparing revn to it we need to hav duplicate or it will compare to n which is 0 after the while loop.
        long long ld ;
        long long revN = 0 ;

        if (x < 0){
            return false;
        }                     ====> EDGE CASES 
        if (x == 0){
            return true;
        }

        while ( x > 0) {
            ld = x % 10 ;
            revN = (revN * 10) + ld ;
            x = x / 10 ;
        }
        if (revN > INT_MAX || revN < INT_MIN) {
            return 0;  ==========> LeetCode rule: return 0 on overflow
        }
        
        if (revN == dup) {
            return true;             NOTE :- in bool , string or vector any dtatype always retur the value never do cout .
        } else {
            return false;
        }
    }
};
