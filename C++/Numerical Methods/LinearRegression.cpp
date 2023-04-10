#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter The Number Of Points : ";
    cin >> n;
    float point[n][2];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Point " << i + 1 << " : ";
        cin >> point[i][0] >> point[i][1];
    }
    float sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumXW2 = 0;
    for (int i = 0; i < n; i++)
    {
        sumX += point[i][0];
        sumY += point[i][1];
        sumXY += point[i][0] * point[i][1];
        sumX2 += point[i][0] * point[i][0];
        sumXW2 = sumX * sumX;
    }
    float a1 = (n * sumXY - (sumX * sumY)) / (n * sumX2 - sumXW2);
    float avgX = 0, avgY = 0;
    avgX = sumX / n;
    avgY = sumY / n;
    float a0 = avgY - (a1 * avgX);
    float SR = 0, ST = 0;
    for (int i = 0; i < n; i++)
    {
        SR += pow(point[i][1] - a0 - a1 * point[i][0], 2);
        ST += pow(point[i][1] - avgY, 2);
    }
    float r2 = (ST - SR) / ST;
    float r = sqrt(r2);
    float er = SR / (n - 2);
    float error = sqrt(er);
    float dev = ST / (n - 1);
    float deviation = sqrt(dev);
    cout << endl
         << endl
         << "The Equation Is y = " << a0 << " + " << a1 << "x" << endl
         << "The Value Of A0 = " << a0 << endl
         << "The Value Of A1 = " << a1 << endl
         << "St = " << ST << endl
         << "Sr = " << SR << endl
         << "The Standard Error Of Estimate = " << error << endl
         << "The Standard Deviation , Sy = " << deviation << endl
         << "Co-relation Coefficient , r = " << r << endl;
}

/*

11
6 29
7 21
11 29
15 14
17 21
21 15
23 7
29 7
29 13
37 0
39 3

7
1 0.5
2 2.5
3 2.0
4 4.0
5 3.5
6 6.0
7 5.5

*/