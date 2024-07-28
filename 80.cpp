class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int next=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0||i==1)
            nums[next++]=nums[i];
            else
            {
                if(nums[i]!=nums[next-1]||nums[i]!=nums[next-2])
                    nums[next++]=nums[i];
            }
        }
        return next;
        
    }
};