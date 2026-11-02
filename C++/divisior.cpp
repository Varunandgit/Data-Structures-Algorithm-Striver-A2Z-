two things to learn here , how do you find a divisior and how do you actually difne a array and vector 
--------------------------------------------------------------------------

class Solution {
public:
    vector<int> divisors(int n) {
        vector <int> ans;                   ===========> to deine a array or vector try to initilize the vector {{ vector<int> ans; }}

for ( int i = 1 ; i <= n ; i ++ ) {
    if ( n % i == 0) {
        ans.push_back(i);                 =====> expa,ns the vector as soon as it gets a new value satifying teh if conditiion
       
    }
}
      
     return ans;                    =====> retrun value or ans after the if and for loop is done executing
         
    }
};
