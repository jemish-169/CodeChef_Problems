/*
indivisible
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
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 2; i < 99; i++)
        {
            if (a % i != 0 && b % i != 0 && c % i != 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}