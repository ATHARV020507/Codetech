class Solution {
public:
    vector<int> twoSum(vector<int>& a,int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<a.size();i++){
            int find = target-a[i];
            if(mp.count(find)){
                return {i,mp[find]};
            }
            mp[a[i]] = i;
        }
        return {};
        
    }
};
