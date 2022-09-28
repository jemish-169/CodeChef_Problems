/*
add to sequence
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        int n;
        cin >> n;
        vector<int> vec(n), a;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            m[vec[i]]++;
        }
        for (auto i : m)
        {
            a.push_back(i.second);
        }
        int amax = *max_element(a.begin(), a.end());
        cout << ceil(log2(amax)) << "\n";
    }

    return 0;
}