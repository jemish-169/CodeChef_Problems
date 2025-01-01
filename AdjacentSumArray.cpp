/*
Adjacent Sum Array
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        vector<int> vec(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());

        vector<int> res(n);
        res[0] = 1;
        for (int i = 1; i < n; i++)
        {
            res[i] = vec[i - 1] - res[i - 1];
        }
        for (auto i : res)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}