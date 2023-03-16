#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int m, int n, vector<vector<int>> Mat) {
         // code here
        int sRow = 0;
        int sCol = 0;
        int eRow = m-1;
        int eCol = n-1;
        
        while(sRow<eRow && sCol<eCol){
            int previous = Mat[sRow+1][sCol];
            
            //1st row
            for(int i = sCol;i<=eCol;i++){
                int current = Mat[sRow][i];
                Mat[sRow][i] = previous;
                previous = current;
            }
            sRow++;
            
            //last col
            for(int i= sRow;i<=eRow;i++){
                int current = Mat[i][eCol];
                Mat[i][eCol] = previous;
                previous = current;
            }
            eCol--;
            //last row
            for(int i = eCol;i>=sCol;i--){
                int current = Mat[eRow][i];
                Mat[eRow][i] = previous;
                previous = current;
        }
        eRow--;
            //1st col
            for(int i = eRow;i>=sRow;i--){
                int current = Mat[i][sCol];
                Mat[i][sCol] = previous;
                previous = current;
            }
        sCol++;
    }
    return Mat;
    }
};