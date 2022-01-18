class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size();
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]> target) r=mid-1;
            else if(nums[mid]< target) l=mid+1;
            if(l==nums.size()) return l;
        }
        return l;
    }
};