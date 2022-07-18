/*
Swapping cheafs way
*/
#include <bits/stdc++.h>
using namespace std;
bool check(string str)
{
    int i;
    for (i = 0; i != str.size() - 1; i++)
    {
        if (str[i] > str[i + 1])
            return false;
    }
    if (i == str.size() - 1)
        return true;
    else
        return false;
}
int main()
{
    int num, cases = 0;
    string s;
    cin >> cases;
    while (cases--)
    {
        cin >> num >> s;
        for (int i = 0; i < num / 2; i++)
        {
            if (s[i] > s[num - 1 - i])
            {
                char ch = s[num - 1 - i];
                s[num - 1 - i] = s[i];
                s[i] = ch;
            }
        }
        check(s) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}