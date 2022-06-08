#include <bits/stdc++.h>
int LongestSubsetWithZeroSum(vector<int> arr)
{

    // Write your code here
    unordered_map<long long, int> mp;
    int len = 0;
    long long sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == 0)
            len = i + 1;
        if (mp.find(sum) != mp.end())
        {
            len = max(len, i - mp[sum]);
        }
        if (mp.find(sum) == mp.end())
            mp[sum] = i;
    }

    return len;
}