//Find the length of the longest contiguous subarray whose sum is ≤ K.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {2, 5, 1, 1, 4, 7, 2, 4, 5, 6, 8};
    int k = 14;

    int l = 0, sum = 0, maxLen = 0;

    for (int r = 0; r < arr.size(); r++)
    {
        sum += arr[r];

        while (sum > k)
        {
            sum -= arr[l];
            l++;
        }

        maxLen = max(maxLen, r - l + 1);
    }

    cout << "Longest Subarray is : " << maxLen;
    return 0;
}
