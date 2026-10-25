int count = 0;                                    |    intiution :- use a count function to count the number of times it is diviisble 
                                                       possible errror :- you might mess up the syntax or not include the edge case of 0 ;
for (int i = 1; i <= 5; i++) {                         tc ;- whenever diviison by any certain number for here it is 10 the tc = O(log base 10 (n))
    count++;                                            lets say n/5 was happeing .. tc would be o(log base 2 (n));
}

cout << count;

the output printed is = 5 ;

----------------------------------------------------

 the algorithm ==>

  #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDigit(int n) {
    
 if (n == 0) {
 return 1 ;
 }
 int count = 0;
 while (n > 0) {
    n = n /10;
    count = count + 1;
 }
return count;
    }
};
