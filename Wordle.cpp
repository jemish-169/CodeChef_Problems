/*
Wordle
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s1, s2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2;
        for (int j = 0; j < s1.length(); j++)
        {
            if (s1[j] != s2[j])
                s1[j] = 'B';
            else
                s1[j] = 'G';
        }
        cout << s1 << endl;
    }
    return 0;
}