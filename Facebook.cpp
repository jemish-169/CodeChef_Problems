/*
Facebook
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
        int x;
        cin >> x;
        vector<int> vec(x);
        vector<int> vc(x);
        for (int i = 0; i < x; i++)
            cin >> vec[i];
        for (int i = 0; i < x; i++)
            cin >> vc[i];
        int maxi = 0, cmt, ind;
        for (int i = 0; i < x; i++)
        {
            if (vec[i] > maxi)
            {
                ind = i;
                maxi = vec[i];
                cmt = vc[i];
            }
            else if (vec[i] == maxi && cmt <= vc[i])
            {
                cmt = vc[i];
                maxi = vec[i];
                ind = i;
            }
        }
        cout << ind + 1 << endl;
    }
    return 0;
}