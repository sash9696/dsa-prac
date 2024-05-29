#include <iostream>
using namespace std;

int reverse(int x)
{

    int revNum = 0;
    int lastDigit = 0;

    while (x > 0)
    {

        lastDigit = x % 10;
        x = x / 10;

        revNum = (revNum * 10) + lastDigit;
    };

    return revNum;
}

int main()
{
    int x;
    cin >> x;

    int revNum = reverse(x);
    cout << "Reverse " << x << " is " << revNum;
}