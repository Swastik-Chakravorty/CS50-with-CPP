#include<iostream>

using namespace std;

int length(long long x);
int strdigit(long long x);
int checksum(long long x);

int main()
{
    long long num;
    cout << "Enter your credit card number: ";
    cin >> num;
    int len = length(num);
    int firstTwoDig = strdigit(num);
    int total = checksum(num);

    if ((len == 13 || len == 16) && firstTwoDig / 10 == 4 && total % 10 == 0)
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

int length(long long x)
{
    int count = 0;
    while (x > 0)
    {
        x /= 10;
        count++;
    }
    return count;
}

int strdigit(long long x)
{
    int len = length(x);
    for (int i = 0; i < (len - 2); i++)
    {
        x /= 10;
    }
    return x;
}

int checksum(long long x)
{
    long long temp = x;
    int oddSum = 0;
    int evenSum = 0;

    while (temp > 0)
    {
        temp /= 10;
        int dig1 = (temp % 10) * 2;
        temp /= 10;
        if (dig1 / 10 > 0)
        {
            dig1 = (dig1 % 10) + (dig1 / 10);
        }
        oddSum += dig1;
    }

    while (x > 0)
    {
        int dig2 = x % 10;
        x /= 100;
        evenSum += dig2;
    }

    return oddSum + evenSum;
}