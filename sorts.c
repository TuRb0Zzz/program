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
                else {
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
}static void merge(int* ar, int size, int central) {
    int left = 0;
    int right = central;
    int* arTemp = new int [size];
    int indexTemp = 0;

    while (left < central && right < size) {
        while(ar[left] <= ar[right] && left < central) {
            arTemp[indexTemp++] = ar[left++];
        }
        while(ar[left] > ar[right] && right < size) {
            arTemp[indexTemp] = ar[right];
            indexTemp++;
            right++;
        }
    }

    while (left < central) {
        arTemp[indexTemp++] = ar[left++];
    }
    while (right < size) {
        arTemp[indexTemp++] = ar[right++];
    }

    memcpy(ar, arTemp, size * sizeof(int));

    delete [] arTemp;
}

void mergeSort(int* ar, int size) {
    if (size <= 1) {
        return;
    }
    mergeSort(&ar[0], size >> 1);
    mergeSort(&ar[size >> 1], size - (size >> 1));

    merge(ar, size, size >> 1);
}



