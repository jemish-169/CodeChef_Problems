/*
Stable Array
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
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        int fir = n - 1, sec = n - 1, dif = 0;
        for (; sec >= 0;)
        {
            if (vec[sec] > vec[fir])
            {
                dif = max(dif, (fir - sec - 1));
                fir = sec;
            }
            else
                sec--;
        }
        dif = max(dif, (fir - 0));
        cout << dif << endl;
    }
    return 0;
}