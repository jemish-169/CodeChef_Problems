/*
Geometric Mean Inequality
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int data, cases = 0, pos(0), neg(0);
    cin >> cases;
    while (cases--)
    {
        cin >> data;
        int arr[data];
        for (int i = 0; i < data; i++)
        {
            cin >> arr[i];
            // cin >> data;
            arr[i] == 1 ? pos++ : neg++;
        }
        abs(neg - pos) < 3 ? cout << "Yes" << endl : cout << "No" << endl;
        // cout << abs(pos - neg) << endl;
        pos = neg = 0;
    }

    return 0;
}