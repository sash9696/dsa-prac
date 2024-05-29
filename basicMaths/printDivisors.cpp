
#include <iostream>
#include <vector>
using namespace std;


// void printDivisors(int x){

//     for(int i = 1; i <= x; i++){
//         if(x % i == 0){
//             cout << i << " ";
//         }
//     }
// }
// //naive approach
// //TC => O(N)

void printDivisors(int x){

    vector<int> ls;

    // for(int i = 1; i <= sqrt(x); i++){
    for(int i = 1; i*i <= x; i++){
        if(x % i == 0){
            ls.push_back(i);

            if(x / i != i){
                ls.push_back(x/i);
            }
        }
    }
    //optimized approach
//TC => O(sqrt(N))

    sort(ls.begin(), ls.end());
//TC => O(no of factors * log(no of factors))
    for(auto it: ls) cout << it << " ";
    //TC => O(no of factors)
}


int main(){

    int x;

    cin >>x;

    printDivisors(x);

}