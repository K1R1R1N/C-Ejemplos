#include <iostream>

using namespace std;

int main()
{
	char cadena[5] = {'H','o','l','a','\0'};

	char *ptr = cadena;

	cout << &cadena << "  Esta es la direccion de memoria del arreglo (cadena)." << endl;
	cout << &ptr << "  Esta es la direccion de memoria del puntero (ptr)." << endl;
	cout << endl;
	
	cout << "El valor en cadena[0] = " << cadena[0] << " y se encuentra en la direccion de memoria " << (int*)&cadena[0] << endl;
	cout << "El valor en cadena[1] = " << cadena[1] << " y se encuentra en la direccion de memoria " << (int*)&cadena[1] << endl;
	cout << "El valor en cadena[2] = " << cadena[2] << " y se encuentra en la direccion de memoria " << (int*)&cadena[2] << endl;
	cout << "El valor en cadena[3] = " << cadena[3] << " y se encuentra en la direccion de memoria " << (int*)&cadena[3] << endl;
	cout << "El valor en cadena[4] = " << cadena[4] << " y se encuentra en la direccion de memoria " << (int*)&cadena[4] << endl;
	cout << endl;

	cout << "********** La misma impresion mediante el uso del apuntador \"ptr\" ***********" << endl;
	cout << endl;
	
	cout << "La direccion de memoria a la cual apunta \"ptr\" es " << (int*)ptr << endl;
	cout << "El valor en cadena[0] = " << *ptr 	<< " y se encuentra en la direccion de memoria " << (int*)ptr << endl;
	cout << "El valor en cadena[1] = " << *(ptr+1) << " y se encuentra en la direccion de memoria " << (int*)(ptr+1) << endl;
	cout << "El valor en cadena[2] = " << *(ptr+2) << " y se encuentra en la direccion de memoria " << (int*)(ptr+2) << endl;
	cout << "El valor en cadena[3] = " << *(ptr+3) << " y se encuentra en la direccion de memoria " << (int*)(ptr+3) << endl;
	cout << "El valor en cadena[4] = " << *(ptr+4) << " y se encuentra en la direccion de memoria " << (int*)(ptr+4) << endl;

	return 0;
}