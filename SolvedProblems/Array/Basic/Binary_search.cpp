#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
        int binarySearch(vector<int> & array, int n, int k){
            int low = 0, mid , high = n-1;
            while(low < high){
                mid = (low + high) / 2;
                if(array[mid] == k){
                    return mid;
                }
                else if (array[mid] < k)
                {
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            return -1;
        }
};


int main(int argc, char const *argv[])
{
    vector<int> v = {};
    Solution s;
    cout<<s.binarySearch(v,v.size(),6);
    return 0;
}
