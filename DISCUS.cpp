/*
DISCUS
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, data;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        vector<int> vec;
        for (int j = 0; j < 3; j++)
        {
            cin >> data;
            vec.push_back(data);
        }
        cout << *max_element(vec.begin(), vec.end()) << endl;
    }
    return 0;
}