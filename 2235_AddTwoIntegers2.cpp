#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int sum = 0;
        
        for(auto it = nums.begin(); it!= nums.end(); ++it)
        {
            sum = sum + *it;
            result.push_back(sum);
        }
        
        return result;
    }
};