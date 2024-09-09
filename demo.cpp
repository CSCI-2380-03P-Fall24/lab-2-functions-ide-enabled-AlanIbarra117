// write any code to test out your functions here
// run comman "make demo" to run this code

#include <iostream>
int main() {
    int arr[] = {10, 50, 5, 7, 9, 2, 100, 2, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minIndex = locateSmallest(arr, 0, 5);
    cout << "Index of the smallest element between 0 and 5: " << minIndex << endl; // Output: 5 (index of 2)

   
    cout << "Array before replacement: ";
    printArray(arr, size);
    
    replaceVariable(arr, 2, 0, size - 1);
    
    cout << "Array after replacing 2 with 1000: ";
    printArray(arr, size); // Output: 10 50 5 7 9 1000 100 1000 40

    
    int oddSum = sumOdds(arr, 0, size - 1);
    cout << "Sum of odd numbers in the array: " << oddSum << endl; // Output: 5 + 7 + 9 = 21

    return 0;
}