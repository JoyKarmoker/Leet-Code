class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int length = nums.size();
        int largeIndex = 0;     
        
        int secondLarge = nums[0];
        int large = nums[0];
        
        if(nums[0] > nums[1])
        {
            large = nums[0];
            secondLarge = nums[1];
            largeIndex = 0;
        }
        
        else if(nums[1] > nums[0])
        {
            large = nums[1];
            secondLarge = nums[0];
            largeIndex = 1;
        }
        
        
        for(int i=0; i<length; i++)
        {
            if(nums[i] > large)
            {
                //printf("here\n");
                large = nums[i];
                largeIndex = i;
            }
            
        }
        
        for(int i=0; i<length; i++)
        {
            if((nums[i] > secondLarge) &&(nums[i] < large))
            {
                //printf("here\n");
                secondLarge = nums[i];
            }
            
        }
        
        
        //printf("large = %d\n", large);
        //printf("secondlarge = %d\n", secondLarge);
        if(large >= (secondLarge*2))
        {
            return largeIndex;
        }
        
        return -1;
        

    }
};