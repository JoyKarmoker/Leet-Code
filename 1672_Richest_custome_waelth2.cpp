class Solution {
#include<bits/stdc++.h>
using namespace std;
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealthSoFar = 0;
        
        for(auto customer: accounts)
        {
            int customerWealth = 0;
            for(auto bank: customer)
            {
                customerWealth+= bank;
            }
            
            maxWealthSoFar = max(maxWealthSoFar, customerWealth);
        }
        
        return maxWealthSoFar;
    }
};