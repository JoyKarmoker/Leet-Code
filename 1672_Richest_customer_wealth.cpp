#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows = accounts.size();
        int collumns = accounts[0].size();
        int max = 0;
            
        //printf("Rows: %d , collumns: %d\n", rows, collumns);
        
        
        for(int i=0; i<rows; i++)
        {
            int sum=0;
            for(int j=0; j<collumns; j++)
            {
                sum+= accounts[i][j];
            }
            
            if(sum >max)
            {
                max = sum;
            }
        }
        return max;
    }
};