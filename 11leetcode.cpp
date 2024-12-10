class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int lp=0,rp=height.size()-1;
        int width,currwater,ht;
        while(lp<rp){
            width = rp-lp;
            ht = min(height[lp],height[rp]);
            currwater = width*ht;
            maxwater = max(maxwater,currwater);
            height[lp]<height[rp] ? lp++ : rp--;
        }
        return maxwater;
    }
};
