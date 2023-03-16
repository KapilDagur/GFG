#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x){
        if(x.length()%2 == 1){
            return false;
        }
        char alphabet,STACK[x.length()];
        bool tag = true;
        int i = 0,TOP = -1,length_of_string = x.length();
        while (i < length_of_string)
        {
            alphabet = x[i];
            switch (alphabet)
            {
            case '(':
                STACK[++TOP] = '(';
                break;
    
            case '{':
                STACK[++TOP] = '{';
                break;
    
            case '[':
                STACK[++TOP] = '[';
                break;
            
            case ')':
                if(TOP == -1 || STACK[TOP] != '('){
                    tag = false;
                }
                --TOP;
                break;
    
            case '}':
                if(TOP == -1 || STACK[TOP] != '{'){
                    tag = false;
                }
                --TOP;
                break;
            
            case ']':
                if(TOP == -1 || STACK[TOP] != '['){
                    tag = false;
                }
                --TOP;
                break;
    
            }
            if(!tag){
                break;
            }
            i++;
        }
        return tag;
    }
};


int main(int argc, char const *argv[])
{
    Solution s;
    cout<<s.ispar("{{{[](){}([(())])}}}");
    return 0;
}
