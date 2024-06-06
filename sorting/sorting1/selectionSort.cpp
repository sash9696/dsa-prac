#include <iostream>

using namespace std;

//find min and swap with min and first
void selection_sort(int arr[], int n){

    for(int i = 0; i <= n-2 ; i++){
        int min = i;

    //select min
        for(int j = i; j <= n-1 ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
            //swap
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;

        }
    }
}
//Time complexity (On2) best worst avg

int main(){

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i <n; i++) cin >> arr[i];

    selection_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}