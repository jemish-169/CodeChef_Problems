/*
Calorie Limit
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
        int n, a, count = 0, sum = 0;
        bool flag = false;
        cin >> n >> a;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        for (int i = 0; i < n; i++)
        {
            sum += vec[i];
            count++;
            if (sum > a)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            count--;
        cout << count << endl;
    }
    return 0;
}