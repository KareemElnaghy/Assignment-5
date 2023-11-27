//
// Created by Kareem Elnaghy on 11/27/23.
//

#ifndef UNTITLED_PROBLEM_1_H
#define UNTITLED_PROBLEM_1_H
#include <string>
#include <iostream>
using namespace std;

const int SIZE = 6668;

struct exchangeInfo {
    std::string date;
    float value;
};
struct maxsub{
    string date;
    float value;
};
void getExchangeData(exchangeInfo data[]) ;

void minHeapify(exchangeInfo data[], int size, int index) ;

void maxHeapify(exchangeInfo data[], int size, int index) ;

// Build a Min-Heap in descending order.
void buildMinHeap(exchangeInfo data[], int size) ;


void buildMaxHeap(exchangeInfo data[], int size) ;


float getMean(exchangeInfo arr[]);

void mostPositiveChanges(exchangeInfo arr[],int num,float mean) ;

void mostNegativeChanges(exchangeInfo arr[], int num, float mean) ;

float maxsubsequence(maxsub arr[],exchangeInfo arr2[],int n, float mean);
#endif //UNTITLED_PROBLEM_1_H
