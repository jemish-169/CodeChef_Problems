/*
Balanced reversals
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0, len;
    cin >> cases;
    while (cases--)
    {
        cin >> len;
        char arr[len];
        for (int i = 0; i < len; i++)
            cin >> arr[i];
        arr[len] = '\0';
        sort(arr, arr + len);
        cout << arr << endl;
    }
    return 0;
}