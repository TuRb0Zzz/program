#include <iostream>
using namespace std;
#include "arraywork.h"



void showar(int* ar,int size){
    for (int i = 0;i < size; i++){
        cout << ar[i] << " ";
    }
    cout<<endl;
}

void randomFilling(int* ar,int size,int min,int max){
     srand(time(0));
     for(int p = 0;p < size; p++){
        int num = min + rand() % (max - min + 1);
        ar[p] = num;
}}
