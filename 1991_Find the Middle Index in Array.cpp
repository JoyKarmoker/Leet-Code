class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int length = nums.size();
        int leftSum = 0;
        int rightSum = 0;
        
        if(sum - nums[0] == 0)
        {
            return 0;
        }      
        
        for(int i=1; i<length; i++)
        {
            leftSum = leftSum + nums[i-1];
            rightSum = sum - leftSum - nums[i];
            
            if(leftSum == rightSum)
            {
                return i;
            }
        }
        
        
        if(sum - nums[length-1] == 0)
        {
            return length-1;
        }
        
        return -1;
        
    }
};