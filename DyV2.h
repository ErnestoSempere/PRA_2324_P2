#include <vector>
#include <iostream>

template <typename T>
int Busquedabin(T X, T V[], int ini, int fin){
	if (ini > fin) {
		std::cout << "no se encuentra en el array" << std::endl;
		return -1;
	}
	
	int medio = (ini + fin) / 2;

	if (X == V[medio]){
		return medio;
	}
	else {
		if (X < medio){
			return Busquedabin(X, V, ini, medio - 1);
		}
		else {
			return Busquedabin(X, V, medio + 1, fin);
		}
	}
}

