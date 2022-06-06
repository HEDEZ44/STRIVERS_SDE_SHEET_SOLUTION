#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int k)
{
    // Write your code here
    long long n = k;
    long long s = (n * (n + 1)) / 2;
    long long p = n * (n + 1) * (2 * n + 1) / 6;

    for (int i = 0; i < n; i++)
    {
        s -= (long long)arr[i];
        p -= ((long long)arr[i] * (long long)arr[i]);
    }
    int missing = (s + p / s) / 2;
    int repeat = missing - s;
    pair<int, int> ans;
    ans.first = missing;
    ans.second = repeat;
    return ans;
}
