class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int ans = 0;
        for (auto num : nums)
        {
            if (map[num])
                continue;
            ans = max(ans, map[num] = map[num + map[num + 1]] = map[num - map[num - 1]] = map[num - 1] + map[num + 1] + 1);
        }
        return ans;
    }
};