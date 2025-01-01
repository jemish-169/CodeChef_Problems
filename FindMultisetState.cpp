/*
Find Multiset State
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
        int k, n;
        cin >> k >> n;
        vector<int> vec(k);
        for (int i = 0; i < k; i++)
        {
            cin >> vec[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += vec[i];
        }
        for (int i = n; i < k - 1; i++)
        {
            cout << vec[i] << " ";
        }
        cout << vec[k - 1] + sum << endl;
    }
    return 0;
}