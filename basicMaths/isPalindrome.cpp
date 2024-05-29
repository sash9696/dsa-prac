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

int isPalindrome(int x) {
    int temp = x;
    int revNum = 0;

    while (x > 0) {
        int lastDigit = x % 10;
        x = x / 10;

        revNum = revNum * 10 + lastDigit;
    }

    return revNum == temp;
}
//TC => O(log(x))
//Space Complexity: O(1)

int main()
{
    int x;
    cin >> x;

   
    cout <<  isPalindrome(x);
}