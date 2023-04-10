#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
class Data
{
private:
    int x, y, z, pass;

public:
    Data(int a)
    {
        pass = a;
    }
    int setpasscheck(int s)
    {
        if (s == pass)
            return 1;
        else
            return 0;
    }
    void set(int s, int p, int q, int r)
    {
        if (s == pass)
        {
            x = p;
            y = q;
            z = r;
        }
    }
    int get(int s)
    {
        if (s == pass)
        {
            cout << "Your Values Are : " << x << " " << y << " " << z << endl;
            return 1;
        }
        else
        {
            cout << "SORRY,PASSWORD DIDN'T MATCH." << endl;
            usleep(1000000);
            system("cls");
            return 0;
        }
    }
};
int main()
{
    int pass, pass2, pass3, i, j, k;
    char z;
    cout << "Please, Set Your Password : ";
    cin >> pass;
    Data vault(pass);
    system("cls");
    cout
        << "If You Want To Set Your Values, Verify That It's You. " << endl
        << "Please,Enter Your Password First : ";
    cin >> pass2;
    system("cls");
    if (vault.setpasscheck(pass2))
    {
        cout << "Enter Three Values : ";
        cin >> i >> j >> k;
        system("cls");
        vault.set(pass2, i, j, k);
    }
    else
    {
        for (int i = 1; i < 3; i++)
        {
            system("cls");
            cout
                << "SORRY,PASSWORD DIDN'T MATCH. PLEASE TRY AGAIN." << endl
                << endl
                << "Please,Enter Your Password Again : ";
            cin >> pass2;
            if (vault.setpasscheck(pass2))
            {
                system("cls");
                cout << "Enter Three Values : ";
                cin >> i >> j >> k;
                system("cls");
                vault.set(pass2, i, j, k);
                return 0;
            }
        }
        cout << "Sorry , Verification Failed.";
        usleep(2000000);
        system("cls");
        return 0;
    }
    cout
        << "If You Want To See Your Values, Please Write Y." << endl
        << "If You Don't Want To See Your Values, Please Write N." << endl
        << endl
        << endl;
    for (;;)
    {
        cout << "--->";
        cin >> z;
        if (z == 89 || z == 121)
        {
            system("cls");
            cout << "Please Enter Your Password : ";
            cin >> pass3;
            if (vault.get(pass3))
            {
                return 0;
            }
            else
            {
                for (int i = 1; i < 3; i++)
                {
                    cout << "Please Enter Your Password Again : ";
                    cin >> pass3;
                    if (vault.get(pass3))
                    {
                        usleep(4000000);
                        system("cls");
                        return 0;
                    }
                }
                system("cls");
                cout << "Verification Failed.";
                usleep(2000000);
                system("cls");
                return 0;
            }
        }
        else if (z == 78 || z == 110)
        {
            system("cls");
            cout << "Thank You";
            usleep(2000000);
            system("cls");
            return 0;
        }
        else
        {
            cout << "Wrong Keyword ! Please , Enter Correct Keyword ." << endl;
        }
    }
}