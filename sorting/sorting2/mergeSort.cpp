#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{

    vector<int> temp;

    // low -> mid
    // mod + 1 -> high
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    };

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    };

    while (right <= high)
    {

        temp.push_back(arr[right]);
        right++;
    };

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}


void ms(vector<int> &arr, int low, int high)
{

    if (low == high)
        return;

    int mid = (low + high) / 2;

    ms(arr, low, mid);
    ms(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
// Time complexity (O(n*log2n))  worst
// Space complexity O(n) worst case due to temp array
void merge_sort(vector<int> &arr, int n)
{
    ms(arr, 0, n - 1);
}

int main()
{

    int n;       // Number of elements in the vector
    int element; // Temporary variable to store the input element
    cin >> n;

    vector<int> vec;

    for (int i = 0; i < n; ++i)
    {
        cin >> element;
        vec.push_back(element); // Add the element to the vector
    }

    cout << "The elements in the vector are: " << endl;
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Sort the vector using merge sort
    merge_sort(vec, vec.size());


    cout << "sorted vector: " << endl;
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}