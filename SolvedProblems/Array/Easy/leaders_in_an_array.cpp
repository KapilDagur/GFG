#include<bits/stdc++.h>
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int max = a[n-1];
        vector<int> op;
        op.push_back(max);
        for(int i = n -1 ; i > 0; i--){
            if(max <= a[i-1]){
                max = a[i-1];
                op.push_back(max);
            }
        }
        reverse(op.begin(),op.end());
        return op;
    }
};


int main(int argc, char const *argv[])
{
    int v[] = {16,17,4,3,5,2};
    Solution s;
    vector<int> op = s.leaders(v,6);
    for(int i = 0; i < op.size();i++){
        cout<<op[i]<<" ";
    }
    return 0;
}
