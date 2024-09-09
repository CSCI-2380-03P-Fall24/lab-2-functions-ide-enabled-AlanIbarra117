#include <iostream> // Used for cin and cout
#include <string>
using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.


int locateSmallest(int array[], int start, int end){
	if (start > end) {
        return -1;
    }
	int minIndex = start;
    for (int i = start + 1; i <= end; ++i) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

//Write the function called replaceVariable in the given interval such that 
// output : you decide what is the output (here I put "void" - change this if you need to!)
// input : an array of int, the target value we are searching for, 
//     an int which is the starting index of search,
//     an int which is the ending point of searchspace
// function: Search in the array from given start to end index and replace the given target value with 1000
void replaceVariable(int array[], int target, int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (array[i] == target) {
            array[i] = 1000;
        }
    }
}


//write a function called printArray to print out the elements of the given array
//output: nothing
//input: the array of integers and its size
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}


//Write a function called sumOdds in the given interval such that 
// output : integer
// input : an array of int, the starting index of search, the ending point of searchspace
// function: Sum the odd numbers in the given interval 
//Hint: % is used for modulo operation. 
//     n%m gives you the remainder after dividing n to m. for example 7%3 = 1 because 7 = 3*2 + 1, then 1 is the remainder.
int sumOdds(int array[], int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        if (array[i] % 2 != 0) { 
            sum += array[i];
        }
    }
    return sum;
}