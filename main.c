#include <iostream>
using namespace std;
#include "sorts.h"

// надо соблюдать отступы... при несоблюдении отсnупов? код больше смотреть не буду

void testInsertionSorts() {
	{	//test 1
		int ar[] = {9,8,7,6,5,4,3,2,1};
		int etalonAr[] = {9,8,7,6,5,4,3,2,1};
		insertionSort(ar, 9);
		bool ok = true;
		for (int i = 0; i < 9; i++) {
			if (etalonAr[i] != ar[i]) {
				std::cerr << "test 1 FAILED" << std::endl;
				ok = false;
				break;
			}
		}
		if (ok == true) {
			std::cerr << "test1 OK" << std::endl;
		}

	}
}

int main(){
	testInsertionSorts();
	int ar[] = {5,4,42,33,15,2,8,7,9,10};

	insertionSort(ar,10);

//это вынести в функцию....
	for(int i = 0; i < 10; i++){
        	cout << ar[i] << " ";
	}
//---------------------

	std::cout << std::endl;	//пожалуйста пишите эту строчку...., либо добавляйте символ "\n" - это перевод каретки
	return 0;
}
