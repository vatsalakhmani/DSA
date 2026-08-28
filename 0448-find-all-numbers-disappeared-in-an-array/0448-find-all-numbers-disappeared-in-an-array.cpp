class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // using hashmap

        // vector<int> result;
        // unordered_map<int,int> map;
        // for(auto num :nums){
        //     map[num]++;
        // }
        // for(int i=0;i<nums.size();i++){
        //    if(map.count(i+1)==0) result.push_back(i+1);
        // }
        // return result;

        // using hasharray
        //   vector<int>hash(nums.size()+1,0);
        // for(int i=0;i<nums.size();i++){
        //     hash[nums[i]]++;
        // }
        // vector<int> result;
        // for(int i=1;i<nums.size() + 1;i++){
        //     if(hash[i] < 1){
        //         result.push_back(i);
        //     }
        // }
        // return result;

        //using hashset
        vector<int> result;
        unordered_set<int> st(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            if(st.count(i)==0) result.push_back(i);
        }
        return result;
    }
};