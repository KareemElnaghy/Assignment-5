//
// Created by Kareem Elnaghy on 11/27/23.
//

#ifndef UNTITLED_PROBLEM_1_H
#define UNTITLED_PROBLEM_1_H
#include <string>
#include <iostream>
#include <limits>
using namespace std;

const int SIZE = 6668; //global variable size of the heap

struct exchangeInfo {               //exchange info which contains the date and exchange rate
    std::string date;
    float value;
};

void getExchangeData(exchangeInfo data[]) ;         //function prototypes

void minHeapify(exchangeInfo data[], int size, int index) ;

void maxHeapify(exchangeInfo data[], int size, int index) ;

void buildMinHeap(exchangeInfo data[], int size) ;


void buildMaxHeap(exchangeInfo data[], int size) ;


float getMean(exchangeInfo arr[]);

void mostPositiveChanges(exchangeInfo arr[],int num,float mean) ;

void mostNegativeChanges(exchangeInfo arr[], int num, float mean) ;




#endif //UNTITLED_PROBLEM_1_H
