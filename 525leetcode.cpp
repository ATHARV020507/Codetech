class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        



    int n = nums.size();
    int maxLen = 0;
    int count = 0; 
    unordered_map<int, int> countIndex; 

    // Initialize with count 0 at index -1
    countIndex[0] = -1; 

    for (int i = 0; i < n; i++) {
        count += (nums[i] == 1) ? 1 : -1; 

        // If this count is seen before, update maxLen
        if (countIndex.find(count) != countIndex.end()) {
            maxLen = max(maxLen, i - countIndex[count]);
        } else {
            // If not seen before, store the current index in the map
            countIndex[count] = i;
        }
    }

    return maxLen;
}
};

//
