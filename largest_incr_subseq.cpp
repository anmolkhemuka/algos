#include <iostream>
using namespace std;
int LIS(int n, int arr[]);
int main()
{

    int t;
    cin >> t;
    while (t--)

    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << LIS(n, arr) << endl;
        ;
    }
    return 0;
}
int LIS(int n, int arr[])
{
    int lis[n]; // this array stores the length of the longest increasing subsequence ending at index i;
    lis[0] = 1;
    for (int i = 1; i < n; i++) //filling the valuse in lis array in order(n^2) complexity.
    {
        int max = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i])
            {
                max = (max > (lis[j] + 1) ? max : (lis[j] + 1));
            }
            lis[i] = max;
        }
    }
    int ans = lis[0];
    for (int i = 1; i < n; i++) //finding the max length
    {
        if (lis[i] > ans)
            ans = lis[i];
    }

    return ans;
}