core concept :- we need to find the pattern of occuerance and defien a number as revNum_ 

class Solution {
public:
    int reverseNumber(int n) {
       

int revN = 0 ;
int last_digit = 0;

while ( n > 0) {
   last_digit = n % 10;
   n = n / 10;

   revN = ( revN * 10 ) + last_digit ;   =====> need to find the pattern by observation

}
return revN ;

    }
} ;
