//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        int result;
    }

    long long int merge(long long arr[], long long int p, long long int q, long long int r, int& result){
        long long int left_arr_len(r - p + 1);
        long long int right_arr_len(q - r);
        long long int L[left_arr_len];
        long long int R[right_arr_len];

    }

    long long int mergeSort(long long arr[], long long int p, long long int r,int& result){
        if(p < r){
            int q = p + (r - q) / 2;
            mergeSort(arr,p,q,result);
            mergeSort(arr,q+1,r,result);
            merge(arr,p,q,r,result);
        }
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends