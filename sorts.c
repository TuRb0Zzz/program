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
