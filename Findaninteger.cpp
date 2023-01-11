/*
Find an integer
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
        int a, b, i = 1;
        cin >> a >> b;
        while (true)
        {
            if ((a + i) % b == 0 && (b + i) % a == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}