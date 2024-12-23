class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
    int m = nums1.size();
    int n = nums2.size();

    // Make sure nums1 is the shorter array
    if (m > n) {
        swap(nums1, nums2);
        swap(m, n);
    }

    int left = 0;
    int right = m;

    while (left <= right) {
        int i = (left + right) / 2; // Partition nums1
        int j = (m + n + 1) / 2 - i; // Partition nums2

        // Handle edge cases
        int nums1LeftMax = (i == 0) ? INT_MIN : nums1[i - 1];
        int nums1RightMin = (i == m) ? INT_MAX : nums1[i];
        int nums2LeftMax = (j == 0) ? INT_MIN : nums2[j - 1];
        int nums2RightMin = (j == n) ? INT_MAX : nums2[j];

        // Check if the partition is valid
        if (nums1LeftMax <= nums2RightMin && nums2LeftMax <= nums1RightMin) {
            // Found the correct partition
            if ((m + n) % 2 == 0) {
                // Even number of elements
                return (max(nums1LeftMax, nums2LeftMax) + min(nums1RightMin, nums2RightMin)) / 2.0;
            } else {
                // Odd number of elements
                return max(nums1LeftMax, nums2LeftMax);
            }
        } else if (nums1LeftMax > nums2RightMin) {
            // Adjust partition in nums1 to the left
            right = i - 1;
        } else {
            // Adjust partition in nums1 to the right
            left = i + 1;
        }
    }

    return 0.0; // Should not reach here
}
};
