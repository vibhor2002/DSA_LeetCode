class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {
        // reverse the individual array
        for (int i = 0; i < A.size(); i++)
        {
            reverse(A[i].begin(), A[i].end());
            // ^ denotes bitwise xor operation
            for (int j = 0; j < A[i].size(); j++)
            {
                A[i][j] ^= 1;
            }
        }
        return A;
    }
};
