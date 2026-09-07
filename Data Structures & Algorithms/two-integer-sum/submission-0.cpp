class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num;
        for(int i=0; i<nums.size(); i++){
            int x = nums[i];
            int needed= target - x;
            if(num.find(needed)!=num.end()){
                if(num[needed]<i){
                    return {num[needed], i};
                }
                return {i, num[needed]};
            }
            num[x]=i;
        }

    }
};
