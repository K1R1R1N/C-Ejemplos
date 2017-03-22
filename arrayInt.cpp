#include <iostream>

using namespace std;

int main()
{
	int num[] = {100,200,300};

	int *ptr = num;

	cout << num << "  Esta es la direccion de memoria del arreglo (num)." << endl;
	cout << &ptr << "  Esta es la direccion de memoria del puntero (ptr)." << endl;
	cout << endl;

	cout << "El valor en num[0] = " << num[0] << " y se encuentra en la direccion de memoria " << &num[0] << endl;
	cout << "El valor en num[1] = " << num[1] << " y se encuentra en la direccion de memoria " << &num[1] << endl;
	cout << "El valor en num[2] = " << num[2] << " y se encuentra en la direccion de memoria " << &num[2] << endl;
	cout << endl;

	cout << "********** La misma impresion mediante el uso del apuntador \"ptr\" ***********" << endl;
	cout << endl;
	
	cout << "La direccion de memoria a la cual apunta \"ptr\" es " << ptr << endl;
	cout << "El valor en num[0] = " << *ptr 	<< " y se encuentra en la direccion de memoria " << ptr << endl;
	cout << "El valor en num[1] = " << *(ptr+1) << " y se encuentra en la direccion de memoria " << ptr+1 << endl;
	cout << "El valor en num[2] = " << *(ptr+2) << " y se encuentra en la direccion de memoria " << ptr+2 << endl;

	return 0;
}