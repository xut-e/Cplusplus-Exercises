//7. Crea un programa que pida un número al usuario y muestra su valor negado (si introduce 1 debe mostrar-1 y si introduce-1 debe mostrar 1).

#include <iostream>

void main() {
	int numero;
	int numeroNegado;

	std::cout << "Introduce un numero: " << std::endl;
	std::cin >> numero;

	numeroNegado = (-1) * numero;

	std::cout << "El valor negado del numero que introdugiste es: " << numeroNegado << std::endl;
}