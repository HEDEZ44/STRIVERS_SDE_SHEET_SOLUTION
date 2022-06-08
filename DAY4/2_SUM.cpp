class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        int n = nums.size(), i;
        for (i = 0; i < n; i++)
            mp[nums[i]] = i;
        for (i = 0; i < n; i++)
        {
            if (mp.count(target - nums[i]) && i != mp[target - nums[i]])
                break;
        }
        return {i, mp[target - nums[i]]};
    }
};