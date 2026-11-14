two things to learn here , how do you find a divisior and how do you actually difne a array and vector 
    
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
TC == O (N)
---------
We can get a optimal solution and it is very important for product of integers
we get a set of mutlipk repeated for every prime ie 
for 36
    1*36           36*1
    and so onn

   6*6             6*6
    so we see we only need to run this loop tiil half or sqrt of n therefore we can save the time complexity by moving it from n to sqrt n

for ( int i = 1 ; i*i <= n ; i ++ ) {
if ( n % i == 0) {
        ans.push_back(i);  
}
if ( n / i != n} {   ========> it ensures the digits like 6*6 donrt get counted twice and teh other factor is also printed
ans.push_back(n / i)

    now to sort the given verctor we take 
sort (ans.begin() , ans.end())
return ans


    TC = O ( sqrt(n) )
    -------------------------





