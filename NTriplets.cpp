/*
NTriplet
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
        int x;
        cin >> x;
        int a(1), b, c;
        for (int i = 2; i < ((x / 2) + 1); i++)
        {
            if (x % i == 0)
            {
                int val = x / i;
                b = i;
                if (val == i)
                {
                    continue;
                }
                if (val != i)
                {
                    c = val;
                    break;
                }
            }
        }
        if (b == 0 || c == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}