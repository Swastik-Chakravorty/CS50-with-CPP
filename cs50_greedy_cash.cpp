#include<iostream>

using namespace std;

int quarters(int num);
int dimes(int num);
int nickels(int num);

int main()
{
    int cents;
    int qua = 0;
    int dim = 0;
    int nic = 0;
    int pen = 0;
    do
    {
        cout << "Change owed: ";
        cin >> cents;
    } while (cents < 0);
    
    if (cents >= 25)
    {
        qua = quarters(cents);
        cents = cents - (qua * 25);
        if (cents >= 10)
        {
            dim = dimes(cents);
            cents = cents - (dim * 10);
            if (cents >= 5)
            {
                nic = nickels(cents);
                pen = cents % 5;
                cents = 0;
            }
            else if (cents >= 1 && cents < 5)
            {
            pen = cents;
            cents = 0;
            }
        }
        else if (cents >= 5 && cents < 10)
        {
            nic = nickels(cents);
            pen = cents % 5;
            cents = 0;
        }
        else if (cents >= 1 && cents < 5)
        {
            pen = cents;
            cents = 0;
        }
    }

    else if (cents >= 10 && cents < 25)
    {
        dim = dimes(cents);
        cents = cents - (dim * 10);
        if (cents >= 5)
        {
            nic = nickels(cents);
            pen = cents % 5;
            cents = 0;
        }
        else if (cents >= 1 && cents < 5)
        {
            pen = cents;
            cents = 0;
        }
    }

    else if (cents >= 5 && cents < 10)
    {
        nic = nickels(cents);
        pen = cents % 5;
        cents = 0;
            
        if (cents >= 1 && cents < 5)
        {
            pen = cents;
            cents = 0;
        }
    }

    else
        pen = cents;
        cents = 0;

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

int quarters(int num)
{
    return num / 25;
}

int dimes(int num)
{
    return num / 10;
}

int nickels(int num)
{
    return num / 5;
}