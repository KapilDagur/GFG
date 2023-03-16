#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<string> invIsoTriangle(int N) {
        // code here
        string s;
        vector<string> vs;
        for(int i = N; i > 0; i--){
            s ="";
            for(int j = 2*i-1; j > 0; j--){
                s += "*";
            }
            vs.push_back(s);
        }
        return vs;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    s.invIsoTriangle(5);
    return 0;
}
