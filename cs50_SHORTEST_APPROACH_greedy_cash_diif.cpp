#include<iostream>

using namespace std;

int main()
{
    int cents;
    do
    {
        cout << "Change owed: ";
        cin >> cents;
    } while (cents < 0);

    int qua = cents / 25;
    cents = cents - qua * 25;

    int dim = cents / 10;
    cents = cents - dim * 10;

    int nic = cents / 5;
    cents = cents - nic * 5;

    int pen = cents;

    cout << "Total number of coins are: " << qua + dim + nic + pen << ", Out of which: " << endl;

    if (qua > 0)
    {
        cout << "Number of quarters: " << qua << endl;
    }
    if (dim > 0)
    {
        cout << "Number of dimes: " << dim << endl;
    }
    if (nic > 0)
    {
        cout << "Number of nickels: " << nic << endl;
    }
    if (pen > 0)
    {
        cout << "Number of pennies: " << pen << endl;
    }

    return 0;
}