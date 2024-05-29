


#include <iostream>
using namespace std;

int count(int x){

    int cnt = 0;

    while(x > 0){

        x = x / 10;
        cnt ++;
    };

    return cnt;

}

int main()
{
    int x;
    cin >> x;

   int cnt =  count(x);
   cout << "No of digits in " << x << " is " << cnt;
}