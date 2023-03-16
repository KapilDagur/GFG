#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to sort an array using quick sort algorithm.

    inline void swap(int* a,int* b ){
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low < high){
            int mid = partition(arr,low,high);
            quickSort(arr,low,mid-1);
            quickSort(arr,mid+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int i = low-1,j = high-1,pivot = arr[high];
       for(j = low; j < high;j++){
            if(arr[j] <= pivot){
                i++;
                swap(&arr[i],&arr[j]);
            }
       }
       swap(&arr[i+1],&arr[high]);
       return i+1;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    int arr[] = {5,7,4,3,2,8,1,9};
    s.quickSort(arr,0,7);
    for(int a: arr){
        cout<<a<<" ";
    }
    return 0;
}
