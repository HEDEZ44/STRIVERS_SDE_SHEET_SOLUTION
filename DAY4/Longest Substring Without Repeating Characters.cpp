class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> dist(256, -1);
        int start = -1, ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (dist[s[i]] > start)
            {
                start = dist[s[i]];
            }
            dist[s[i]] = i;
            ans = max(ans, i - start);
        }
        return ans;
    }
};