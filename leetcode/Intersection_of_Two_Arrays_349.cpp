class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result;
        unordered_set<int> num_set(nums1.begin(),nums1.end());
        for(int num:nums2){//c++11新特性
            if(num_set.find(num)!=num_set.end())
                result.insert(num);
        }
        return vector(result.begin(),result.end());
    }
};