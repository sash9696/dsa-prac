#include <iostream>
#include <limits.h>

using namespace std;


bool isArmstrong(int x) {
    int temp = x;
    int sum = 0;
    while (x > 0) {
        int lastDigit = x % 10;
        x = x / 10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
    }

    return sum == temp;
}
//TC => O(log(x))
//Space Complexity: O(1)

int main()
{
    int x;
    cin >> x;
   
    cout <<  isArmstrong(x);
}