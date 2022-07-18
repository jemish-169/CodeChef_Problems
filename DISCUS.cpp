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
        list<int> mylist;
        for (int j = 0; j < 3; j++)
        {
            cin >> data;
            mylist.push_back(data);
        }
        cout << *max_element(mylist.begin(), mylist.end()) << endl;
    }
    return 0;
}