class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //BRUTE FORCE APPROACH
        //int n = nums.size();
        //for(int val : nums){
          //  int freq = 0;
            //for(int el : nums){
              //  if(el == val){
                    //freq++;
                //}
            //}
            //if(freq>n/2){
              //  return val;
            //}
        //}
        //return -1;

        
        
    //}
    // moore's algorithm concept
    int freq = 0 , ans = 0;
    for(int i=0;i<nums.size();i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
};
