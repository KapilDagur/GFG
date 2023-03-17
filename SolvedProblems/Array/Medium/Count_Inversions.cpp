//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    void merge(long long arr[], long long st, long long end, long long &count){
        vector<long long int>v;
        long long mid = (st+end)/2, i = st, j = mid+1;

        while (i <= mid and j <= end)
        {
            if (arr[i] <= arr[j])
            {
                v.push_back(arr[i++]);
            }
            else
            {
                count += mid - i + 1;
                v.push_back(arr[j++]);
            }
        }

        while (i <= mid)
            v.push_back(arr[i++]);

        while (j <= end)
            v.push_back(arr[j++]);
    
        for (long long k = st; k <= end; k++)
        {
            arr[k] = v[k-st];
        }
    }
    void mergeSort(long long arr[], long long st, long long end, long long int &count){
        if(st >= end) return;

        long long mid = (st+end)/2;

        mergeSort(arr, st, mid, count);
        mergeSort(arr, mid+1, end, count);
        merge(arr, st, end, count);
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int count = 0;
        mergeSort(arr,0,N-1,count);
        return count;
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