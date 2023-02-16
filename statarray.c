#include <iostream>
using namespace std;
#include "statarray.h"

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
