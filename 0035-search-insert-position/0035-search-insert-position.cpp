class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
    int n=nums.size();
    int start = 0;
    int end = n - 1;
    int ans;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
            if (start > end)
            {
                ans = start;
            }
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
            if (start > end)
            {
                ans = start;
            }
        }
    }
    return ans;

    }
};