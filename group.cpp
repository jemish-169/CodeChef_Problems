/*
chef and group
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0, flag = 0;
    cin >> cases;
    while (cases--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                while (s[i] != '0')
                    i++;
                flag++;
            }
        }
        cout << flag << endl;
        flag = 0;
    }

    return 0;
}