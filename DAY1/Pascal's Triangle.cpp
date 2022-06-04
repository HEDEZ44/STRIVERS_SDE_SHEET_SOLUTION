class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ptri(numRows);
        for (int i = 0; i < numRows; i++)
        {
            ptri[i].resize(i + 1);
            ptri[i][0] = ptri[i][i] = 1;
            for (int k = 1; k < i; k++)
            {
                ptri[i][k] = ptri[i - 1][k - 1] + ptri[i - 1][k];
            }
        }
        return ptri;
    }
};