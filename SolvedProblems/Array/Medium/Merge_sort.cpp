#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        // Your code here
        int N1 = m - l + 1;
        int N2 = r - m;
        int l_a[N1];
        int r_a[N2];
        int i,j,k;
        for(i = 0; i < N1;i++){
            l_a[i] = arr[i+l];
        }
        for(i = 0; i < N2;i++){
            r_a[i] = arr[i+m+1];
        }
        i = j = 0;
        k = l;
        while (i < N1 && j < N2)
        {
            /* code */
            if(l_a[i] <= r_a[j]){
                arr[k] = l_a[i];
                i++;
            }
            else{
                arr[k] = r_a[j];
                j++;
            }
            k++;
        }
        while (i < N1)
        {
            /* code */
            arr[k] = l_a[i];
            i++;
            k++;
        }
        while (j < N2)
        {
            /* code */
            arr[k] = r_a[j];
            j++;
            k++;
        }    
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l < r){
            int m = l + (r - l) / 2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }
    }
};


int main(int argc, char const *argv[])
{
    /* code */
    Solution s;
    int arr[] = {7,5,3,4,2,6,1};
    s.mergeSort(arr,0,6);
    for(int a: arr){
        cout<<a<<" ";
    }
    return 0;
}
