#include <iostream>
using namespace std;

int find_min_tail(int arr[], int size, int min_val = INT_MAX) {
    if (size == 0) {
        return min_val;
    }
    else {
        int new_min_val = min(min_val, arr[0]);
        return find_min_tail(arr + 1, size - 1, new_min_val);
    }
}

int main() {
    int arr[] = { 3, 5, 1, -7, 9, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int min_val = find_min_tail(arr, size);
    cout << "The minimum value in the array is: " << min_val << endl;
    return 0;
}