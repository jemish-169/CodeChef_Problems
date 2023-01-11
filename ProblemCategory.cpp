/*
Problem Category
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
        if (x >= 1 && x < 100)
            cout << "Easy" << endl;
        else if (x >= 100 && x < 200)
            cout << "Medium" << endl;
        else if (x >= 200 && x <= 300)
            cout << "Hard" << endl;
    }
    return 0;
}