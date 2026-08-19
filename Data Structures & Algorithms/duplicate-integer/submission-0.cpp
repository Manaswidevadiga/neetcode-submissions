class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> num;
        for (int x : nums){
            if(num.find(x)!=num.end()){
                return true;
            }
            num.insert(x);
        }
        return false;
    }
};