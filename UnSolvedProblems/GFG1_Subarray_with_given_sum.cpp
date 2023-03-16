#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        long long temp = 0;
        bool tag = false;
        vector<int> v;
        for(int i = 0; i < n; i++){
            temp = 0;
            for(int j = i; j < n; j++){
                temp += arr[j];
                if(temp == s){
                    cout<<i+1<<" "<<j+1<<endl;
                    v.push_back(i+1);
                    v.push_back(j+1);
                    tag = true;
                    break;
                }
                else if(temp > s){
                    break;
                }
            }
            if(tag){
                return v;
            }
        }
        v.push_back(-1);
        if(!tag){
        cout<<-1<<endl;
        return v;
        }
    }
};


int main(int argc, char const *argv[])
{
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    Solution s;
    s.subarraySum(v,v.size(),15);
    return 0;
}
