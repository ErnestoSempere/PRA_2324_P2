#include <iostream>
#include <vector>
#include "DyV2.h"

int main(){

	int a[6] = {1, 3, 4, 7, 8, 13};
	
	std::cout << Busquedabin(3, a, 0, 5) << std::endl;

	int b[7] = {2, 4, 6, 8, 10, 12, 14};

	std::cout << Busquedabin(14, b, 0, 6) << std::endl;

	std::cout << Busquedabin(2, a, 0, 5) << std::endl;


	return 0;
}
