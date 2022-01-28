class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len=0;
        int sum=0,i=0,result=INT32_MAX;
        for(int j=0;j<nums.size();j++)
        {
            sum+=nums[j];
            len++;
            while(sum>=target){
               len=j-i+1;
               result=len<result?len:result;
               sum-=nums[i++];
            }
        }
        return result<INT32_MAX?result:0;
    }
};