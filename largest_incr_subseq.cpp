#include <iostream>
#include <vector>
using namespace std;
int LIS(int n, int arr[]);
void printLIS(int n, int arr[]);
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
        
        printLIS(n, arr);
    }
    return 0;
}
int LIS(int n, int arr[])
{
    int lis[n]; // this array stores the length of the longest increasing subsequence ending at index i;
    lis[0] = 1;
    for (int i = 1; i < n; i++) //filling the valuse in lis array in order(n^2) complexity.
    {
        int max = 1;
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
void printLIS(int n, int arr[])
{
    int lis[n];
    // this array stores the length of the longest increasing subsequence ending at index i;
    string liss[n];
    lis[0] = 1;
    liss[0] = to_string(arr[0]);
    for (int i = 1; i < n; i++) //filling the valuse in lis array in order(n^2) complexity.
    {
        int max = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i])
            {
                if (max < (lis[j] + 1))
                    liss[i] = liss[j] + "," + to_string(arr[i]);
                max = (max > (lis[j] + 1) ? max : (lis[j] + 1));
            }
            lis[i] = max;
        }
    }
    int ans = lis[0];
    string s = "";
    for (int i = 1; i < n; i++) //finding the max length
    {

        if (lis[i] > ans)
        {
            ans = lis[i];
            s = liss[i];
        }
    }

    cout << ans << endl
         << s << endl;
}