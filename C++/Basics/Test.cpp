#include <iostream>
#include <cmath>

using namespace std;

const int N = 3;

void luDecomposition(double a[][N], double l[][N], double u[][N])
{
    // Initialize L and U matrices
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j < i)
                l[j][i] = 0;
            else if (j == i)
                l[j][i] = 1;
            else
                u[j][i] = 0;
        }
    }

    // LU decomposition
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            double sum = 0;
            if (j < i)
            {
                for (int k = 0; k < j; k++)
                    sum += l[j][k] * u[k][i];
                l[j][i] = (a[j][i] - sum) / u[j][j];
            }
            else
            {
                for (int k = 0; k < i; k++)
                    sum += l[j][k] * u[k][i];
                u[j][i] = a[j][i] - sum;
            }
        }
    }
}

void forwardSubstitution(double l[][N], double b[], double y[])
{
    // Solve Ly = b
    for (int i = 0; i < N; i++)
    {
        double sum = 0;
        for (int j = 0; j < i; j++)
            sum += l[i][j] * y[j];
        y[i] = (b[i] - sum) / l[i][i];
    }
}

void backwardSubstitution(double u[][N], double y[], double x[])
{
    // Solve Ux = y
    for (int i = N - 1; i >= 0; i--)
    {
        double sum = 0;
        for (int j = i + 1; j < N; j++)
            sum += u[i][j] * x[j];
        x[i] = (y[i] - sum) / u[i][i];
    }
}

int main()
{
    double a[N][N] = {{1, 1, 1}, {3, -1, 1}, {2, 1, 1}};
    double b[N] = {1, 5, 10};
    double l[N][N], u[N][N], y[N], x[N];

    luDecomposition(a, l, u);
    forwardSubstitution(l, b, y);
    backwardSubstitution(u, y, x);

    // Print solution
    cout << "x1 = " << x[0] << endl;
    cout << "x2 = " << x[1] << endl;
    cout << "x3 = " << x[2] << endl;

    return 0;
}
