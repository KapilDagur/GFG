#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:		
	int isPalindrome(string S)
	{
	    // Your code goes here
	    for(int i =0,j = S.length()-1;i < j; i++,j--){
	        if(S[i] != S[j]){
	            return false;
	        }
	    }
	    return true;
	}

};


int main(int argc, char const *argv[])
{
    Solution s;
    cout<<s.isPalindrome("abbabba");
    return 0;
}
