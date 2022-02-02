int maxProfit(vector<int> &arr)
{
    int index = 0; 
    int maxPro = 0; 
    int mm = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        mm = min(mm, arr[i]);
        maxPro = max(maxPro, arr[i] - mm);
    }
    return maxPro;
}