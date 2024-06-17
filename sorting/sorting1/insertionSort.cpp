#include <iostream>

using namespace std;

// find max and do adjacent swapping
// pushes max to the last
void insertion_sort(int arr[], int n)
{

    for (int i = 0; i <= n - 1; i++)
    {

        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];

            arr[j - 1] = arr[j];

            arr[j] = temp;

            j--;
        }
    }
}
// Time complexity (On2)  worst avg
// O(n) best case if we taked sorted array

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}