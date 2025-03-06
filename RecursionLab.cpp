//Source: https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/

#include <iostream>

//Base Case: If the array has only one element, return that element as the minimum.
/* General Case : 
        Divide the array into two parts, the first elementand the rest of the elements.
        Recursively find the minimum of the rest of the elements.
        Compare the minimum of the rest of the elements with the first element of the array. 
        Return the minimum of these two values as the minimum of the entire array.
*/ 


#include <iostream>
using namespace std;

int findMin(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    else {
        int restMin = findMin(arr + 1, size - 1);
        return min(arr[0], restMin);
    }
}

int main() {
    int arr[] = { 3, 5, 1, -7, 9, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int minVal = findMin(arr, size);
    cout << "The minimum value in the array is: " << minVal << endl;
    return 0;
}




