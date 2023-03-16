#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if(str1.length() != str2.length()){
            return false;
        }
        if(str1.length() == 1 && str2.length() == 1){
            return str1[0] == str2[0];
        }
        string str_tmp = str1.substr(str1.length()-2) + str1.substr(0,str1.length()-2) ;
        bool if_l_s_r = true,if_r_s_r = true;
        for(int i = 0; i < str1.length();i++){
            if(str_tmp[i] != str2[i]){
                if_l_s_r = false;
            }
        }
        str2 = str2.substr(str1.length()-2) + str2.substr(0,str1.length()-2);
        
        for(int i = 0; i < str1.length();i++){
            if(str1[i] != str2[i]){
                if_r_s_r = false;
            }
        }
        if(if_l_s_r || if_r_s_r){
            return true;
        }
        return false;

    }

};


int main(int argc, char const *argv[])
{
    Solution s;
    string m = "amazon", n = "azonam";
    string a = "geeksforgeeks",b = "ageeksgeeksfor";
    cout<<s.isRotated(a,b);
    cout<<s.isRotated(m,n);
    cout<<s.isRotated(n,m);
    return 0;
}
