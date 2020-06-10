//Binary Search
//Search nd insert
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int r=nums.size()-1;
        int l=0;
       
        while(l<=r)
        {
             int m=(l+r)/2;
            if(nums[m]>target)
                r=m-1;
            else if(nums[m]<target)
                l=m+1;
            else
                return m;
        }
        return l;
            
    }
