#include <iostream>
using namespace std;
#include "sorts.h"


void insertionSort(int* ar,int  size){
    int num;
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
    for (int i = 0;i < size; i++){
        cout << ar[i] << " ";
    }
}


void selectionSort(int* ar, int size)
{
    int i , j ,maxindex;
    for(i = 0; i < size; i++)
    {
        maxindex = i;
        for(j = i+1;j < size; j++)
            if (ar[j] > ar[maxindex])
                maxindex = j;
        swap(ar[i],ar[maxindex]);
    }
}

int getMax(int* ar,int size){
    int  max = ar[0];
    for (int i = 0;i < size; i++){
        if (ar[i]>max){max=ar[i];}
    }
    return(max);
}


int getMin(int* ar,int size){
    int  min = ar[0];
    for (int i = 0;i < size; i++){
        if (ar[i]<min){min=ar[i];}
    }
    return(min);
}

void countsort(int *ar, int size){
    int maxel = getMax(ar,size);
    int array[maxel+1];
	for (int i = 0; i <maxel+1; i++){
		array[i] = 0;
	}
	
	
    for (int i = 0; i < size; i++){
		array[ar[i]]++;
	}
    
    int k = 0;
    for (int i = 0; i <= maxel; i++){
		for (int j = k; j < k + array[i]; j++){
			ar[j] = i;
		}
		k += array[i];
	}
}
