#include <iostream>
using namespace std;
#include "sorts.h"



void testInsertionSorts() {
	{	//test 1
		int ar[] = {9,8,7,6,5,4,3,2,1};
		int etalonAr[] = {9,8,7,6,5,4,3,2,1};
		insertionSort(ar, 9);
		bool ok = true;
		for (int i = 0; i < 9; i++) {
			if (etalonAr[i] != ar[i]) {
                                std::cerr << "insertionsort FAILED" << std::endl;
				ok = false;
				break;
			}
		}
		if (ok == true) {
                        std::cerr << "insertionsort is OK" << std::endl;
		}

	}
}

void testselectionSort() {
        {	//test 1
                int ar[] = {10,5,50,7,4,3,8,2,1};
                int etalonAr[] = {50,10,8,7,5,4,3,2,1};
                selectionSort(ar, 9);
                bool ok = true;
                for (int i = 0; i < 9; i++) {
                        if (etalonAr[i] != ar[i]) {
                                std::cerr << "selectionsort  FAILED" << std::endl;
                                ok = false;
                                break;
                        }
                }
                if (ok == true) {
                        std::cerr << "selectionsort is  OK" << std::endl;
                }

        }
}

int main(){
        testInsertionSorts();

        testselectionSort();

	std::cout << std::endl;	//пожалуйста пишите эту строчку...., либо добавляйте символ "\n" - это перевод каретки
	return 0;
}
