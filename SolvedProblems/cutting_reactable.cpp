#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<long long int> minimumSquares(long long int L, long long int B)
        {
            // code here
            long long k = __gcd(L,B);
            return {(L*B)/(k*k),k};
        }
};