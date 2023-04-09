//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int start_row = 0,start_col = 0;
        int end_row = r-1,end_col = c-1;
        int count = 0,total = r*c;
        vector<int>ans;
        
        while(count < total){

            for(int col = start_col; col <= end_col && count < total; col++){
                ans.push_back(matrix[start_row][col]);
                count++;
                
            }
            start_row++;
            
            for(int row = start_row; row <= end_row && count < total; row++){
                ans.push_back(matrix[row][end_col]);
                count++;
            }
            end_col--;
            
            for(int col = end_col; col >= start_col && count < total; col--){
                ans.push_back(matrix[end_row][col]);
                count++;
            }
            end_row--;
            
            for(int row = end_row; row >= start_row && count < total; row--){
                ans.push_back(matrix[row][start_col]);
                count++;
            }
            start_col++;
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends