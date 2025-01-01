/*
Minimum Types
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
        int n, sum;
        cin >> n >> sum;
        vector<int> vec(n);
        vector<int> vec2(n);
        int x = 0;
        int num = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> x;

            vec2[i] = x * vec[i];
            // cout << vec2[i] << " ";
        }
        sort(vec2.begin(), vec2.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            num += vec2[i];
            if (num >= sum)
            {
                cout << i + 1 << endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}