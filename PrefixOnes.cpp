/*
Prefix Ones
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
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
        string s;
        cin >> s;

        int maxi = INT_MIN;
        int j = 0, sum(0), cnt(0);
        while (j < x && s[j] == '1')
        {
            cnt++;
            j++;
        }
        for (int i = j; i < x; i++)
        {
            if (s[i] == '1')
                sum++;
            else
            {
                maxi = max(maxi, sum);
                sum = 0;
            }
        }
        maxi = max(sum, maxi);
        cout << cnt + maxi << endl;
    }
    return 0;
}