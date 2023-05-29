#include<bits/stdc++.h>

using namespace std;

int main()
{
    float bill, tax, tips;
    cout << "Bill before tax and tip: ";
    cin >> bill;
    cout << "Sale Tax percent: ";
    cin >> tax;
    cout << "Tip percent: ";
    cin >> tips;
    bill = bill + (bill * (tax / 100));
    bill = (bill + (bill * (tips / 100))) / 2;
    cout << "You will owe $" << setprecision(3) << bill << " each!" << endl;
    return 0;
}