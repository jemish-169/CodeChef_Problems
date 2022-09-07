/*
Mean and Median
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x, y;
        cin >> x >> y;
        int m = 3 * x - y;
        for (int i = -1000; i <= 1000; i++)
        {
            if ((i + (m - i) + y) / 3 == x && m - i <= 1000 && m - i >= -1000)
            {
                cout << i << " " << y << " " << m - i << endl;
                break;
            }
        }
    }
    return 0;
}