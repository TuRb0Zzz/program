#include <iostream>
using namespace std;

int main(){
int ar[]={5,4,42,33,15,2,8,7,9,10};
insertionSort(ar,10);
for(int i=0;i<10;i++){
        cout<<ar[i]<<" ";
}
return 0;

}
