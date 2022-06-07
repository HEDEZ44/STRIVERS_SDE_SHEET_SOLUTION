// by sorting

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int count = 1, i;
        for (i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
                count++;
            else
            {
                if (count > n / 3)
                    ans.push_back(nums[i - 1]);
                count = 1;
            }
        }
        if (count > n / 3)
            ans.push_back(nums[i - 1]);
        return ans;
    }
};

// Boyer–Moore majority vote algorithm

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int a(-1), b(-1), ca(0), cb(0);
        int n = nums.size();
        for (int num : nums)
        {
            if (num == a)
                ca++;
            else if (num == b)
                cb++;
            else if (!ca)
                a = num, ca = 1;
            else if (!cb)
                b = num, cb = 1;
            else
                ca--, cb--;
        }

        ca = cb = 0;
        for (auto num : nums)
        {
            if (num == a)
                ca++;
            else if (num == b)
                cb++;
        }
        vector<int> ans;
        if (ca > n / 3)
            ans.push_back(a);
        if (cb > n / 3)
            ans.push_back(b);

        return ans;
    }
};