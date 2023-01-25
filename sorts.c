#include <iostream>
using namespace std;
#include "sorts.h"


void insertionSort(int* ar,int  size){
    int num;	//желательно все переменные инициализировать.....
    int pos;
    int con;
    for(int i = 1; i < size; i++){
        if (ar[i] > ar[i-1]){
            num = ar[i];
            pos = i;
            for(int j = pos; j > 0; j--){
                if (num > ar[j-1]){
                    con = j-1;
                }
                else { //else плохо.... придумай как можно обойтись без else... маленькая подсказка: поменять условие....
                    break;
                }
            }
            for(int b = pos; b > con; b--){
                ar[b] = ar[b-1];
            }
            ar[con] = num;
        }
    }
}

void bubbleSort(int* ar,int size){
    int num;
    for(int s = size; s > 0; s--){
        for(int i = 0; i < size-1; i++){
            if (ar[i] < ar[i+1]){
                num = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = num;
            }
        }
    }
}


void showar(int* ar,int size){
    for (int i=0;i<size;i++){
        cout << ar[i] << " ";
    }
}


void selectionSort(int* ar, int size)
{
    int i,j,maxindex;
    for(i=0;i<size;i++)
    {
        maxindex = i;
        for(j=i+1;j<size;j++)
            if (ar[j] > ar[maxindex])
                maxindex = j;
        swap(ar[i],ar[maxindex]);
    }
}

