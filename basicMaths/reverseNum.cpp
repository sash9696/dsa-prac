#include <iostream>
#include <limits.h>

using namespace std;

// int reverse(int x)
// {

//     int revNum = 0;
//     int lastDigit = 0;

//     while (x > 0)
//     {

//         lastDigit = x % 10;
//         x = x / 10;

//         revNum = (revNum * 10) + lastDigit;
//     };

//     return revNum;
// }

//leetcode

int reverse(int x) {
    int revNum = 0;

    while (x != 0) {
        int lastDigit = x % 10;
        x = x / 10;

        // Check for overflow before updating revNum
        if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && lastDigit > 7)) {
            return 0; // Overflow case for positive numbers
        }
        if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && lastDigit < -8)) {
            return 0; // Overflow case for negative numbers
        }

        revNum = revNum * 10 + lastDigit;
    }

    return revNum;
}
//TC => O(log(x))
//Space Complexity: O(1)

int main()
{
    int x;
    cin >> x;

    int revNum = reverse(x);
    cout << "Reverse " << x << " is " << revNum;
}