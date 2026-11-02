armstong number is the number where the number of diigit n if all the diigts are raided to power n and sum it will result in armstrong number .
  1634 = 1^3 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634.
  153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153


  ---------------------------------------------------------------
#include <iostream>
#include <cmath>    ===> we use pow function.
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int ld;
        int copy = n ;  =====> used to find out number of diigts
        int original_n = n ;  =====> used to compare with sum

        if  ( n == 0) {
            return true;
        }
         int count = 0 ;    ===========> to calculate number of digigts to raise the power 
        while ( copy > 0 ) {
            ld = copy % 10 ;
            copy = copy / 10 ;
            count ++ ; 
        }
      int sum_total = 0 ;  =====> initilize sum as 0 and starts the value as the new sum value after while loop ends
        while ( n > 0 ) 
            ld = n % 10 ; 
            sum_total += pow ( ld , count) ;  ======>  MOST IMPORTANT { THIS += actually stores the previsous value and adds the next value so that the inital ld dont get removed
            n = n / 10 ;
        }

if (sum_total == original_n) {  ======> cuz copy and n got destroyed
    return true;
} else {
    return false;
}
    }
------------------------------------------------------------------------------
} ;

  
