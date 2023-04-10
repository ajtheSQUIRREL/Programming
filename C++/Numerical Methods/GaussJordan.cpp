#include <bits/stdc++.h>
using namespace std;

int PerformOperation(float a[][4], int n)
{
    int i, j, k = 0, c, flag = 0, m = 0;
    float pro = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i][i] == 0)
        {
            c = 1;
            while ((i + c) < n && a[i + c][i] == 0)
                c++;
            if ((i + c) == n)
            {
                flag = 1;
                break;
            }
            for (j = i, k = 0; k <= n; k++)
                swap(a[j][k], a[j + c][k]);
        }

        for (j = 0; j < n; j++)
        {

            if (i != j)
            {

                float pro = a[j][i] / a[i][i];

                for (k = 0; k <= n; k++)
                    a[j][k] = a[j][k] - (a[i][k]) * pro;
            }
        }
    }
    return flag;
}

void PrintResult(float a[][4], int n, int flag)
{
    cout << "Result is : ";

    if (flag == 2)
        cout << "Infinite Solutions Exists" << endl;
    else if (flag == 3)
        cout << "No Solution Exists" << endl;

    else
    {
        for (int i = 0; i < n; i++)
            cout << a[i][n] / a[i][i] << " ";
    }
}

int CheckConsistency(float a[][4], int n, int flag)
{
    int i, j;
    float sum;

    // flag == 2 for infinite solution
    // flag == 3 for No solution
    flag = 3;
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
            sum = sum + a[i][j];
        if (sum == a[i][j])
            flag = 2;
    }
    return flag;
}
int main()
{
    float a[3][4];
    cout << "Enter Coefficients Of Equation 1 :";
    cin >> a[0][0] >> a[0][1] >> a[0][2] >> a[0][3];
    cout << "Enter Coefficients Of Equation 2 :";
    cin >> a[1][0] >> a[1][1] >> a[1][2] >> a[1][3];
    cout << "Enter Coefficients Of Equation 3 :";
    cin >> a[2][0] >> a[2][1] >> a[2][2] >> a[2][3];
    // float a[3][4] = {{4, -3, 1, -10},
    //                  {2, 1, 3, 0},
    //                  {-1, 2, -5, 17}};

    int n = 3, flag = 0;

    flag = PerformOperation(a, n);

    if (flag == 1)
        flag = CheckConsistency(a, n, flag);

    PrintResult(a, n, flag);

    return 0;
}
