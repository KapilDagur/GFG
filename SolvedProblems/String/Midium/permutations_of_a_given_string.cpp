#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
		vector<string>find_permutation(string S)
		{
		    if(S.length() == 0){
                vector<string> vs;
                vs.push_back("");
                return vs;
            }
            char alphabet = S[0];
            string sub_str = S.substr(1);
            vector<string> prev_list = find_permutation(sub_str);
            vector<string> new_list;
            for(int i = 0; i < prev_list.size();i++){
                string each_str = prev_list[i];
                for(int j = 0; j <= each_str.length();j++){
                    string left_sub_str = each_str.substr(0,j);
                    string right_sub_str = each_str.substr(j);
                    new_list.push_back(left_sub_str+alphabet+right_sub_str);
                }
            }

            set<string> check;
            for(auto ele : new_list){
                check.insert(ele);
            }

            vector<string>op;
            for(auto s: check){
                op.push_back(s);
            }
            sort(op.begin(),op.end());
            return op;
		}
};


int main(int argc, char const *argv[])
{
    Solution s;
    vector<string> res =  s.find_permutation("ABB");
    for(auto s : res){
        cout<<s<<" ";
    }
    return 0;
}
