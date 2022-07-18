/*
Construct N
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
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        if (n <= 7)
        {
            if (n % 2 == 0 || n % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
        // for (int i = 0; x && 2 * i <= n; i++)
        // {
        //     for (int j = 0; x && 7 * j <= n; j++)
        //     {
        //         if (2 * i + 7 * j == n)
        //         {
        //             x = 0;
        //             break;
        //         }
        //     }
        // }
        // cout << (x == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}