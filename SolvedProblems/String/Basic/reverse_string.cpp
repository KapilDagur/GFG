#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str){
    for(int i = 0,j = str.length()-1; i < j; i++,j--){
        char alphabet = str[i];
        str[i] = str[j];
        str[j] = alphabet;
    }
    return str;
}

int main(int argc, char const *argv[])
{
    string s ="greeksforgeek";
    cout<<reverseWord(s);
    return 0;
}
