class Solution {
public:
//O(n^3) hash表法（unordered_set）
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)continue;
            if(i>0 && nums[i]==nums[i-1])continue;
            unordered_set<int> sett;
            for(int j=i+1;j<nums.size();j++){
                int c=-(nums[i]+nums[j]);
                if(j>i+2 && nums[j]==nums[j-1] && nums[j-1]==nums[j-2])continue;
                if( sett.find( c ) != sett.end() ){
                    res.push_back({ nums[i],nums[j],c });
                    sett.erase(c);
                }else{
                sett.insert(nums[j]);
                }
            }
        }
        return res;
    }
};