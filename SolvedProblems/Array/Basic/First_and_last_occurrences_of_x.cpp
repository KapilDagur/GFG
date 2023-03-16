#include<bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n , int x ){
    vector<int> result = {-1,-1};
    // code here
    int low = 0,high = n-1,mid = 0;
    while(low < high){
        mid = (low + high) / 2;
        if(x == arr[mid]){
            low = high = mid;
            while((low > 0) && arr[low] == x){
                low--;
            }
            while((high < n) && arr[high] == x){
                high++;
            }
            result[0] = ++low;
            result[1] = --high;
            return result;
        }
        else if(x > arr[mid]){
            low = mid;
        }
        else{
            high = mid;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int v[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
    int f[] = {1, 1, 1, 2, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 9, 10, 10, 10};
    vector<int> r = find(v,9,5);
    cout<<r[0]<<" "<<r[1]<<endl;
    r = find(f,30,9);
    cout<<r[0]<<" "<<r[1]<<endl;
    return 0;
}


