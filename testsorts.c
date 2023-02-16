#include <iostream>
using namespace std;
#include "testsorts.h"

void testInsertionSorts() {
        {
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
        {
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


void testbubbleSort(){
    {
            int ar[] = {10,5,50,7,4,3,8,2,1};
            int etalonAr[] = {50,10,8,7,5,4,3,2,1};
            bubbleSort(ar, 9);
            bool ok = true;
            for (int i = 0; i < 9; i++) {
                    if (etalonAr[i] != ar[i]) {
                            std::cerr << "bubblesort FAILED" << std::endl;
                            ok = false;
                            break;
                    }
            }
            if (ok == true) {
                    std::cerr << "bubblesort is  OK" << std::endl;
            }

    }
}


void testcountSort(){
    {
            int ar[] = {10,5,50,7,4,3,8,2,1};
            int etalonAr[] = {1,2,3,4,5,7,8,10,50};
            countsort(ar, 9);
            bool ok = true;
            for (int i = 0; i < 9; i++) {
                    if (etalonAr[i] != ar[i]) {
                            std::cerr << "countSort FAILED" << std::endl;
                            ok = false;
                            break;
                    }
            }
            if (ok == true) {
                    std::cerr << "CountSort is  OK" << std::endl;
            }

    }
}
