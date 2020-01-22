//sorting pair lexicographically
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool sortfun(const pair<int, int> &a, const pair<int, int> &b);
int main()
{
    int n;
    cin >> n;
    int x, y;
    vector<pair<int, int>> vect;
    for (int i = 0; i < n; i++)
    {

        cin >> x;
        cin >> y;
        vect.push_back(make_pair(x, y));
    }
    string s;

    sort(vect.begin(), vect.end(), sortfun);
    cout<<"Sorted List:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << vect[i].first << " " << vect[i].second << endl;
    }


return 0;
}
bool sortfun(const pair<int, int> &a,
             const pair<int, int> &b)
{
    if (a.first == b.first)
        return (a.second < b.second);
    else
    {
        return (a.first < b.first);
    }
}
