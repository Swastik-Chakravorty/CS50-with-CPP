#include<iostream>

using namespace std;

int checksum(long long x);

int main()
{
    long long num;
    cout << "Enter your credit card number: ";
    cin >> num;

    int len = 0;
    int firstOneDig = 0;
    int firstTwoDig = 0;
    while (num > 0)
    {
        if (num >= 0 && num <= 9)
        {
            firstOneDig = num;
        }
        if (num >= 10 && num <= 99)
        {
            firstTwoDig = num;
        }
        num /= 10;
        len++;
    }

    int total = checksum(num);

    if ((len == 13 || len == 16) && firstOneDig == 4 && total % 10 == 0)
    {
        cout << "VISA" << endl;
    }

    else if (len == 16 && (firstTwoDig == 22 || firstTwoDig == 51 || firstTwoDig == 52 || firstTwoDig == 53 || firstTwoDig == 54 || firstTwoDig == 55) && total % 10 == 0)
    {
        cout << "MASTERCARD" << endl;
    }

    else if (len == 15 && (firstTwoDig == 34 || firstTwoDig == 37) && total % 10 == 0)
    {
        cout << "AMEX" << endl;
    }

    else
        cout << "INVALID" << endl;

    return 0;
}

int checksum(long long x)
{
    bool decision = true;
    int rem = 0;
    int sum = 0;

    while (x > 0)
    {
        while (decision == true)
        {
            sum += x % 10;
            x /= 10;
            decision = false;
        }
        while (decision == false)
        {
            rem = (x % 10) * 2;
            if (rem > 10)
            {
                rem += rem % 10;
                rem += rem / 10;
            }
            else
                rem += rem;
            x /= 10;
            decision = true;
        }
        
    }

    return rem + sum;
}