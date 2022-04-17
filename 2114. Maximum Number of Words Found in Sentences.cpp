class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int ans = 0;
        for (int i = 0; i < sentences.size(); i++)
        {
            int j = sentences[i].length();
            int c = 1;
            for (int m = 0; m < j; m++)
            {
                if (sentences[i][m] == ' ')
                {
                    c++;
                }
            }
            ans = max(c, ans);
        }
        return ans;
    }
};