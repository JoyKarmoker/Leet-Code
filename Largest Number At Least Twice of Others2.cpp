class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int length = nums.size();
        int largeIndex = 0;
        int i = 0;
        int secondLargeIndex = 0;  
        
        if(nums[0] > nums[1])
        {
            largeIndex = 0;
            secondLargeIndex = 1;
        }
        
        else if(nums[1] > nums[0])
        {
            largeIndex = 1;
            secondLargeIndex = 0;
        }
        
        
        for(i=2; i<length; i++)
        {
            if(nums[i] > nums[largeIndex])
            {
                //printf("here\n");           
                secondLargeIndex = largeIndex;
                largeIndex = i;
            }
            
            else if (nums[i] > nums[secondLargeIndex])
            {
                secondLargeIndex = i;
            }
            
        }
        
        //printf("large = %d\n", nums[largeIndex]);
        //printf("secondlarge = %d\n", nums[secondLargeIndex]);
        
        if(nums[largeIndex] >= (nums[secondLargeIndex]*2))
        {
            return largeIndex;
        }
        
        return -1;
        

    }
};