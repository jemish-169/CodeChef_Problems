/*
Weapon Value
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
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
        int x, sum(0);
        cin >> x;
        vector<string> vec(x);
        for (int i = 0; i < x; i++)
            cin >> vec[i];
        for (int i = 0; i < 10; i++)
        {
            int e(0);
            for (int j = 0; j < x; j++)
            {
                if (vec[j][i] == '1')
                    e++;
            }
            if (e % 2 == 1)
                sum++;
        }
        cout << sum << endl;
    }
    return 0;
}