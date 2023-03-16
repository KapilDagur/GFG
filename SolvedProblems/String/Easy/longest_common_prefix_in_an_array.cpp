#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string min_len_element = arr[0];
        for(int i = 1; i < N; i++){
            if(arr[i].length() < min_len_element.length()){
                min_len_element = arr[i];
            }
        }
        int m_e_l = min_len_element.length();
        string op;
        bool tag = false;
        for(int i = 0 ; i < m_e_l; i++){
            op += min_len_element[i];
            for(int j = 0; j < N; j++){
                if(arr[j][i] != min_len_element[i]){
                    op.erase(i);
                    tag = true;
                    break;
                }
            }
            if(tag){
                break;
            }
        }
        if(op.length() == 0){
            return to_string(-1);
        }
        return op;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    Solution s;
    string arr[] = {"geeksforgeeks", "geeks", "geek",
         "geezer"};
    cout<<s.longestCommonPrefix(arr,4);
    return 0;
}
