#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void sort012(int a[], int n)
    {
        // code here
        int one_count = 0, two_count = 0, zero_count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1){
                one_count++;
            }
            else if(a[i] == 2){
                two_count++;
            }
            else{
                zero_count++;
            }
        }
        for(int i = 0 ; i < n; i++){
            if(zero_count > 0){
                a[i] = 0;
                zero_count--;
            }
            else if(one_count > 0){
                a[i] = 1;
                one_count--;
            }
            else{
                a[i] = 2;
                two_count--;
            }
        }
    }
    void sort_012(int a[],int n){
        int low = 0;

        int mid = 0;

        int high = n-1;

        while(mid<=high){

            if(a[mid]==0){

                swap(a[mid],a[low]);

                mid++;

                low++;

            }

            else if(a[mid]==1){

                mid++;

            }

            

            else {

                swap(a[mid],a[high]);

                high--;

            }

        }
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    int a[] = {0, 2, 1, 2,0};
    s.sort012(a,5);
    for(int z: a){
        cout<<z<<" ";
    }
    return 0;
}
