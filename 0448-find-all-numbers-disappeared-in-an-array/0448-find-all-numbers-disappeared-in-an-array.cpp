class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        unordered_map<int,int> map;
        for(auto num :nums){
            map[num]++;
        }
        for(int i=0;i<nums.size();i++){
           if(map.count(i+1)==0) result.push_back(i+1);
        }
        return result;
    }
};