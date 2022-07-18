/*
Equal Strings
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = 0;
int mini = 10e8 + 10;
char *removeDuplicate(char str[], int n)
{
    unordered_set<char> s(str, str + n - 1);
    int i = 0;
    for (auto x : s)
        str[i++] = x;
    str[i] = '\0';
    return str;
}
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n, j, count = 0;
        cin >> n;
        char s1[n], s2[n];
        cin >> s1 >> s2;
        string str1 = removeDuplicate(s1, n + 1);
        string str2 = removeDuplicate(s2, n + 1);
        cout << str1 << " " << str2 << endl;
        for (int i = 0; i < str1.length(); i++)
        {
            for (j = 0; j < str2.length(); j++)
            {
                if (str1[i] == str2[j])
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}