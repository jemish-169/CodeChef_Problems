/*
Best of 2 Dice game
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
        vector<int> vec(6);
        for (int i = 0; i < 6; i++)
            cin >> vec[i];
        int x = vec[0] + vec[1] + vec[2] - min({vec[0], vec[1], vec[2]});
        int y = vec[3] + vec[4] + vec[5] - min({vec[3], vec[4], vec[5]});
        if (x > y)
            cout << "Alice"
                 << "\n";
        else if (y > x)
            cout << "Bob"
                 << "\n";
        else
            cout << "Tie"
                 << "\n";
    }
    return 0;
}