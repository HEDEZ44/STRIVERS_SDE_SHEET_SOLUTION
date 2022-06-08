#include <bits/stdc++.h>
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int, int> mp;
    int cnt = 0, xr = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        xr ^= arr[i];
        if (xr == x)
            cnt++;
        int h = xr ^ x;
        if (mp.find(h) != mp.end())
            cnt += mp[h];
        mp[xr]++;
    }
    return cnt;
}