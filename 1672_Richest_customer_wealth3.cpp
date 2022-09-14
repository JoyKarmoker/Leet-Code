class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealthSoFar = 0;
        
        for(vector<int> customer: accounts)
        {
            int customerWealth = 0;
            //cout << typeid(customer).name() << endl;
            for(int bank: customer)
            {
                //cout << typeid(bank).name() << endl;
                customerWealth+= bank;
            }
            
            maxWealthSoFar = max(maxWealthSoFar, customerWealth);
        }
        
        return maxWealthSoFar;
    }
};