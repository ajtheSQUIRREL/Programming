#include <bits/stdc++.h>
using namespace std;
class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    float total_tax;
};
int main()
{
    int n;
    cin >> n;
    Restaurant R;
    for (int i = 0; i < n; i++)
    {
        cin >> R.food_item_codes[i];
        getc(stdin);
        getline(cin, R.food_item_names[i]);
        cin >> R.food_item_prices[i];
    }
    system("CLS");
    cout << "                                      MAKE BILL" << endl;
    cout << "                                   ________________                    " << endl;
    cout << "Item Code                          Item Name                           Item Price" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << R.food_item_codes[i] << "                                ";
        cout << R.food_item_names[i];
        for (int j = 0; j < 36 - R.food_item_names[i].size(); j++)
            cout << " ";
        cout << R.food_item_prices[i] << endl;
    }
    cout << endl;

    int table, item;
    cout << "Enter Table Number : ";
    cin >> table;
    cout << "Enter Number Of Items : ";
    cin >> item;
    int itm[item], quantity[item];
    for (int i = 0; i < item; i++)
    {
        cout << "Enter Item " << i + 1 << " Code : ";
        cin >> itm[i];
        int flag = 1;
        for (int j = 0; j < n; j++)
        {
            if (itm[i] == R.food_item_codes[j])
            {
                flag = 0;
            }
        }
        if (flag)
        {
            i--;
            cout << "The Item Code Is Not Valid. Enter The Code Again." << endl;
            continue;
        }
        cout << "Enter Item " << i + 1 << " Quantity : ";
        cin >> quantity[i];
    }
    cout << "                                            BILL SUMMARY" << endl;
    cout << "                                         ___________________" << endl;
    cout << "Table No. : " << table << endl;
    cout << "Item Code          Item Name                   Item Price          Item Quantity          Total Price" << endl;
    float total[item];
    for (int i = 0; i < item; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (itm[i] == R.food_item_codes[j])
            {
                cout << itm[i] << "                ";
                cout << R.food_item_names[j];
                for (int k = 0; k < 28 - R.food_item_names[j].size(); k++)
                    cout << " ";
                cout << R.food_item_prices[j] << "                 ";
                cout << quantity[i];
                int x = 0, p = quantity[i];
                while (p > 0)
                {
                    x++;
                    p /= 10;
                }
                for (int k = 0; k < 23 - x; k++)
                    cout << " ";
                total[i] = R.food_item_prices[j] * quantity[i];
                cout << total[i] << endl;
                break;
            }
        }
    }
    float t = 0;
    for (int i = 0; i < item; i++)
    {
        t += total[i];
    }
    R.total_tax = (5 * t) / 100;
    t += R.total_tax;
    cout << "TAX                                                                                       " << R.total_tax << endl;
    cout << "__________________________________________________________________________________________________________" << endl;
    cout << "NET TOTAL                                                                                 " << t << " Taka" << endl;
}