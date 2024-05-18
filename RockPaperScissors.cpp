/*
Rock Paper Scissors
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
        int n, count = 1;
        string str;
        cin >> n >> str;

        for (int i = 1; i < n; i++)
        {
            if (str[i] == str[i - 1])
                str[i] = 'X';
            else
                count++;
        }
        cout << count << endl;
    }
    return 0;
}