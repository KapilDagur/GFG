#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> v;
    void solve(int N){
        // code here
        if(N <= 0){
            v.push_back(N);
            return;
        }
        v.push_back(N);
        solve(N-5);
        v.push_back(N);
    }

    vector<int> pattern(int N){
        solve(N);
        return v;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> op = s.pattern(16);
    for(int a : op){
        cout<<a<<" ";
    }
    return 0;
}
