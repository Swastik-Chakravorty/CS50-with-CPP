#include<iostream>

using namespace std;

int main()
{
    int str, end;
    int yr = 0;
    do
    {
        cout << "Start size: ";
        cin >> str;
    } while (str < 9);

    do
    {
        cout << "End size: ";
        cin >> end;
    } while (end < str);
    
    while (str < end)
    {
        str = str + (str / 3) - (str / 4);
        yr++;
    }

    cout << "Years: " << yr << endl;

    return 0;
}