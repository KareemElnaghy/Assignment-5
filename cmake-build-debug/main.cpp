//
// Created by Kareem Elnaghy on 11/27/23.
//


#include "Problem 1.h"
#include "Problem2.h"

int main() {
    float avg, n;   // n will store the 'N' required for the most positive/negative
    exchangeInfo arr[SIZE];
    exchangeInfo arr2[SIZE];

    getExchangeData(arr);   // reads txt file and stores in arr

    avg = getMean(arr);     // returns the mean

    for(int i=0; i<SIZE; i++) {     // assigns exchange rate difference to arr2
        arr2[i].date = arr[i].date;
        arr2[i].value = arr[i].value - avg;}

    cout << "Enter N: ";        //inputs N
    cin >> n;

    mostPositiveChanges(arr, n, avg);       //functions that output the most positive/negative
    mostNegativeChanges(arr, n, avg);

    cout<<MaxSubsequence(arr2, SIZE, avg);
}

// Analysis:
// The buildmaxheap and buildminheap functions both have a time complexity of O(N), where N is the size fo the heap.
// The heapify functions have a time complexity of O(log N), where N is the size fo the heap.
// The function that reads from the txt file and assigns the values to an array has a time complexity of O(N),
// where N is the number of lines in the text file.
// The getMean function has a time complexity of O(N), where N is the size of the heap.
// The function for the mostPositiveChanges and mostNegativeChanges has a complexity of O(Nlog N), since it iterates
// over the first N elements and calls the buildmaxheap and buildminheap functions.
// The maximum subsequence function has a time complexity of O(N) since it iterates over the size of the heap.

// Therefore, the total complexity of the entire program will be O(Nlog N) which is a result of the addition of the
// complexities of all the functions used in the program and by neglecting lower order terms. Since Nlog N > logN > N,
// the overall time complexity will be O(Nlog N).
