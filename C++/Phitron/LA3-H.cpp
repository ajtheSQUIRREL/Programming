#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    int x = s.find_last_of('Z') - s.find_first_of('A') + 1;
    cout << x;
}