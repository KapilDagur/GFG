#include<bits/stdc++.h>
using namespace std;

class Soloution{
    public:
    string reverseWords(string S) 
    { 
        int i = 0;
        string op;
        while(i < S.length()){
            string w= "";
            while(S[i] != '.' and S[i] != '\0'){
                w += S[i];
                i++;
            }
            if(S[i] == '.'){
                w = '.' + w;
                op = w + op;
            }
            else if( S[i] == '\0'){
                op = w + op;
            }
            i++;
        }
        return op;
    } 
};

int main(int argc, char const *argv[])
{
    Soloution s;
    cout<<s.reverseWords("i.like.this.program.very.much");
    return 0;
}
