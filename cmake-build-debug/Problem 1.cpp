//
// Created by Kareem Elnaghy on 11/27/23.
//
#include "Problem 1.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


void getExchangeData(exchangeInfo data[]) {         // reads from the txt file and puts data into an array
    ifstream file("exchangeRate.txt");
    string line;
    int currentIndex = 0;

    if (!file.is_open())
        cout << "Unable to open the file" << endl;
    else {
        while (getline(file, line)) {
            istringstream file(line);
            string date, valueStr;
            if (file >> date >> valueStr) {
                data[currentIndex].date = date;
                data[currentIndex].value = stof(valueStr);
                currentIndex++;
            }
        }
    }
    file.close();
}

void minHeapify(exchangeInfo data[], int size, int index) {         // minheapify algorithm
    int minIndex = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    // Left child is smaller than the current minimum
    if (leftChild < size && data[leftChild].value < data[minIndex].value)
        minIndex = leftChild;

    // Right child is smaller than the current minimum
    if (rightChild < size && data[rightChild].value < data[minIndex].value)
        minIndex = rightChild;

    // If the minimum is not the current index, swap and continue
    if (minIndex != index) {
        swap(data[index], data[minIndex]);
        minHeapify(data, size, minIndex);
    }
}

void maxHeapify(exchangeInfo data[], int size, int index) {     // maxheapify algorithm
    int maxIndex = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    // Left child is greater than the current maximum
    if (leftChild < size && data[leftChild].value > data[maxIndex].value)
        maxIndex = leftChild;

    // Right child is greater than the current maximum
    if (rightChild < size && data[rightChild].value > data[maxIndex].value)
        maxIndex = rightChild;

    // If the maximum is not the current index, swap and continue
    if (maxIndex != index) {
        swap(data[index], data[maxIndex]);
        maxHeapify(data, size, maxIndex);
    }
}

// Build a Min-Heap
void buildMinHeap(exchangeInfo data[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--)
        minHeapify(data, size, i);

    for (int i = size - 1; i >= 0; i--) {
        swap(data[0], data[i]);
        minHeapify(data, i, 0);
    }
}


// Build a Max-Heap
void buildMaxHeap(exchangeInfo data[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--)
        maxHeapify(data, size, i);


    for (int i = size - 1; i >= 0; i--) {
        swap(data[0], data[i]);
        maxHeapify(data, i, 0);
    }
}

// Returns the mean of the exchange rates
float getMean(exchangeInfo arr[])
{
    float sum = 0;
    int i = 0;

    for(i = 0 ; i<SIZE ; i++)
        sum += arr[i].value;

    return(sum/SIZE);
}

// Outputs the N most Positive Changes in the exchange rate
void mostPositiveChanges(exchangeInfo arr[],int num,float mean) {
    buildMinHeap(arr, SIZE);
    cout<<"Top "<<num<<" Positive Changes: "<<endl;
    for (int i = 0; i < num; i++) {
        if (arr[i].value > mean) {
            cout << i + 1 << ") " << "Date: " << arr[i].date << ", Postive Change: " << arr[i].value - mean << endl;
        }
    }
    cout<<endl;
}

// Outputs the N most Negative Changes in the exchange rate
void mostNegativeChanges(exchangeInfo arr[], int num, float mean) {
    // Build a Max-Heap
    buildMaxHeap(arr, SIZE);
    // Iterate over the first N elements
    cout<<"Top "<<num<<" Negative Changes: "<<endl;
    for (int i = 0; i < num; i++) {
        // Check if the value is greater than the mean (negative change)
        if (arr[i].value < mean) {
            cout << i + 1 << ") " << "Date: " << arr[i].date << ", Negative Change: " << arr[i].value - mean << endl;

        }

    }
    cout<<endl;
}

