
#include <iostream>

using namespace std;

//array hashing for indesxes less tahn 10 power 9

int main(){

    int n;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
         cin >> arr[i];
    }

    //  for(int i = 0; i < n; i++){
    //      cout << arr[i];
    // }
    //precompute
    int hash[13] = {0};

    for(int i = 0; i < n; i++){

        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
     while(q--){
         int number;
         cin >> number;

         //fetch

         cout << hash[number] << endl;
         
     }


    return 0;
}