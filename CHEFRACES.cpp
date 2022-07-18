/*
chef races
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0, data, flag = 0;
    cin >> cases;
    while (cases--)
    {
        int a[5] = {0};
        for (int i = 0; i < 4; i++)
        {
            cin >> data;
            if (a[data] == 0)
                a[data] = data;
            else
                flag++;
        }
        cout << 2 - flag << endl;
        flag = 0;
    }

    return 0;
}