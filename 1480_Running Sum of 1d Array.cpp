class Solution {
private:
    int findSum(vector<int> &nums, int i){
        int sum = 0;
        for(int j=0; j<=i; j++)
        {
            sum = sum+nums[j];
        }
        
        return sum;
    }
public:
    vector<int> runningSum(vector<int>& nums) {
        int length = size(nums);
        vector<int> runningSum;
        //printf("length = %d", length);
        for(int i=0; i<length; i++)
        {
            int sum = findSum(nums, i);
            runningSum.push_back(sum);
        }
        return runningSum;
    }
};