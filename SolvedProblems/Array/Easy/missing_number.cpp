#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int i;
        sort(array.begin(),array.end());
        for(i = 1; i < n; i++){
            if(array[i-1] != i){
                return i;
            }
        }
        return i;
    }

};


int main(int argc, char const *argv[])
{
    vector<int> arr = {5,3,6,2,7,1};
    Solution s;
    cout<<s.MissingNumber(arr,arr.size()+1);
    return 0;
}
