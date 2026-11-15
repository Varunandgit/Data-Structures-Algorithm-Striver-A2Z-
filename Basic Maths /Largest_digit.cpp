define a variable max_digit ,
another function 
n = abs(n);
it converts the negative number into postive number if the coonstraint is not given to take only postive number 


                                                            C O D E :-

  #include<iostream> 
  #include<cmath>

  using namespace std ;


  class Solution {
public:

    int largestDigit(int n) {
        int ld ;
        int max_digit = 0;   ========> initilize max_digit as smallest digit .
        
        n = abs(n)  =================>it converts negative number into postive number .

        if ( n == 0 ) {
            return 0 ;
        }

        while ( n > 0 ) {
       ld = n % 10 ; 
       if (max_digit < ld) {   
        max_digit = ld;
       }
         n = n / 10 ;
        }
        return max_digit; ======> return fucntion must be to return value at the end of the loop block ... 
     } 
    };
