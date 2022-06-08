class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {

        vector<vector<int>> ans;
        if (nums.empty())
            return ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            int sum3 = target - nums[i];
            for (int j = i + 1; j < n; j++)
            {
                int sum2 = sum3 - nums[j];

                int front = j + 1, back = n - 1;
                while (front < back)
                {
                    int sum = nums[front] + nums[back];
                    if (sum > sum2)
                        back--;
                    else if (sum < sum2)
                        front++;
                    else
                    {
                        vector<int> res(4, 0);
                        res[0] = nums[i];
                        res[1] = nums[j];
                        res[2] = nums[front];
                        res[3] = nums[back];
                        ans.push_back(res);
                        while (front < back && res[2] == nums[front])
                            front++;
                        while (front < back && res[3] == nums[back])
                            back--;
                    }
                }
                while (j + 1 < n && nums[j + 1] == nums[j])
                    j++;
            }
            while (i + 1 < n && nums[i + 1] == nums[i])
                i++;
        }
        return ans;
    }
};