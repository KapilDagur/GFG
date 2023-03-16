#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isAnagram(string a, string b){
        if(a.length() != b.length()){
            return false;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i = 0; i < a.length(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
        // Your code here
        
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout<<s.isAnagram("greeksforgeek","geeksforgreek");
    return 0;
}
