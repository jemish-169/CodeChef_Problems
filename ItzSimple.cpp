/*
Itz Simple
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
        int n, k, p, maxi = 0, sum = 0;
        cin >> n >> k >> p;
        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            maxi = max(maxi, vec[i]);
            sum += vec[i];
        }

        sum -= maxi;

        if ((sum + p) > (k + maxi))
        {
            cout << "Varun" << endl;
        }
        else if ((sum + p) == (maxi + k))
            cout << "Equal" << endl;
        else
        {
            cout << "Ved" << endl;
        }
    }
    return 0;
}