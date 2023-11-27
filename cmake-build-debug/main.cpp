#include "Problem 1.h"

int main() {
    float avg, n;
    exchangeInfo arr[SIZE];

    getExchangeData(arr);
    avg = getMean(arr);

    cout<<"Enter N: ";
    cin>> n;

    mostPositiveChanges(arr,n, avg);
    mostNegativeChanges(arr,n,avg);

}