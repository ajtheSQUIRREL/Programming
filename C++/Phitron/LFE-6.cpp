#include <bits/stdc++.h>

using namespace std;
// Magic_Colour
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string colour;
        cin >> colour;
        queue<char> Q1;
        queue<char> Q2;
        for (auto i : colour)
        {
            Q1.push(i);
        }
        string newColour = "";
        while (!Q1.empty())
        {
            char a = 'x', b = 'x';
            if (!Q1.empty())
            {
                a = Q1.front();
                Q1.pop();
            }
            if (!Q1.empty())
            {
                b = Q1.front();
                Q1.pop();
            }

            if (a == 'R' && b == 'B')
                newColour += 'P';
            else if (a == 'B' && b == 'R')
                newColour += 'P';
            else if (a == 'R' && b == 'G')
                newColour += 'Y';
            else if (a == 'G' && b == 'R')
                newColour += 'Y';
            else if (a == 'B' && b == 'G')
                newColour += 'C';
            else if (a == 'G' && b == 'B')
                newColour += 'C';
            else if (a == 'x')
                newColour += b;
            else if (b == 'x')
                newColour += a;
            else if (a == b)
            {
            }
        }
        for (int i = 0, j = 1; j <= newColour.size(); i++, j++)
        {
            if (newColour[i] == newColour[j])
            {
                newColour.erase(newColour.begin() + i);
                newColour.erase(newColour.begin() + i);
                i = 0;
                j = 1;
            }
        }
        if (newColour.size() == 2 && newColour[0] == newColour[1])
            newColour = "";
        cout << newColour << endl;
    }
}
