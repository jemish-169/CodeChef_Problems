/*
Minimum distance between 1s
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
        int n;
        string s;
        cin >> n >> s;
        bool b = true;
        stack<char> st;
        for (auto i : s)
        {
            if (!st.empty())
            {
                if (st.top() == '0' && i == '0')
                    st.pop();
                else if (st.top() == '1' && i == '1')
                {
                    b = false;
                    break;
                }
                else
                    st.push(i);
            }
            else
                st.push(i);
        }
        if (b)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}