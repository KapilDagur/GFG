#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int isValid(string s) {
            // code here
            int i = 0,j = 1,len = s.length(),sum;
            string xn;
            while(i <= len){
                xn = "";
                while(s[i] != '.' && i <= len){
                    xn += s[i];
                    i++;
                }
                if(s[i] == '.' ){
                    if(xn.length() == 0){
                        return 0;
                    }
                    sum = 0;
                    for(char alpha : xn){
                        sum = sum * 10 + (alpha - '0');
                    }
                    if(sum < 256 && sum > -1)
                    {
                        j++;
                    }
                    else{
                        return 0;
                    }
                }
                else if(s[i] == '\0' && j == 4){
                    if(xn.length() == 0){
                        return 0;
                    }
                    sum = 0;
                    for(char alpha : xn){
                        sum = sum * 10 + (alpha - '0');
                    }
                    if(sum < 256 && sum > -1)
                    {
                        return 1;
                    }
                    else{
                        return 0;
                    }
                }
                i++;
            }
            if(j != 4){
                return 0;
            }
            return 1;
        }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout<<s.isValid("192.168.0.1"); 
    return 0;
}