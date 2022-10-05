/*
Chef and Happy String
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st = {'a', 'e', 'i', 'o', 'u'};
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
        string s;
        bool b = true;
        int x = 0;
        cin >> s;
        for (auto i : s)
        {
            if (st.find(i) != st.end())
                ++x;
            else
                x = 0;
            if (x > 2)
            {
                b = false;
                cout << "Happy" << endl;
                break;
            }
        }
        if (b)
            cout << "Sad" << endl;
    }
    return 0;
}