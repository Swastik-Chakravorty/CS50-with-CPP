#include<iostream>

using namespace std;

bool prime(int x);

int main()
{
    int str, end;
    do
    {
        cout << "Enter the minimum number: ";
        cin >> str;
    } while (str < 1);
    do
    {
        cout << "Enter the maximum number: ";
        cin >> end;
    } while (end < str);

    cout << "Prime numbers are:" << endl;
    for (int i = str; i <= end; i++)
    {
        if (prime(i) == true)
        {
            cout << i << endl;
        }
    }
    return 0;
}

bool prime(int x)
{
    if (x == 1)
    {
        return false;
    }

    if (x == 2 || x == 3)
    {
        return true;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;    
}