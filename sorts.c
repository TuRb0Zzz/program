#include <iostream>
using namespace std;
#include "sorts.h"

void insertionSort(int* ar,int  size){
    int num;
    int pos;
    int con;
    for(int i=1;i<size;i++){
        if (ar[i]>ar[i-1]){
            num=ar[i];
            pos=i;
            for(int j=pos;j>0;j--){
                if (num>ar[j-1]){
                    con=j-1;
                }
                else{
                    break;
                }
            }
            for(int b=pos;b>con;b--){
                ar[b]=ar[b-1];
            }
            ar[con]=num;
        }
    }
}



void bubbleSort(int* ar,int size){
    int num;
    for(int s=size;s>0;s--){
        for(int i=0;i<size-1;i++){
            if (ar[i]<ar[i+1]){
                num = ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=num;
            }
        }
    }
}
