#include <iostream>
using namespace std;
#include "sorts.h"
#include "statarray.h"
#include "testsorts.h"
#include "arraywork.h"





int main(){
        testInsertionSorts();

        testselectionSort();

        testbubbleSort();

        testcountSort();

        std::cout << std::endl;
	return 0;
}
