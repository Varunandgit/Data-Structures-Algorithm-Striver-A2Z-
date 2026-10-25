algorithm :_ 
class Solution {
public:
    int countOddDigit(int n) {
        if (n==0){
            return 0;     ======> edge case 
        } 
         int count =0 ;   ---------> we declared it outside of while loop cuz it would get reset after every loop.
        while ( n > 0) {

            int ld = n% 10;        -----> "Extract the last digit first"
        if (ld % 2 != 0) {   -------> this % 2 is used to determine wether a function has a remainder or not.
        count = count +1 ;
        }
        n = n / 10;     -------> it removes the last digit. 
            
        }
       
     return count;


    }
};                            THOUGT PROCESS :- extract the digit using the n / 10 value and then before getting the other loop we check using "% 2 != 0" function. 
