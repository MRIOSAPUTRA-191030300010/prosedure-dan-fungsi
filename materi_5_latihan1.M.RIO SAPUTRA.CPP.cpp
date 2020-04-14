#include <iostream>
using namespace std;

void luaspersegi()
{
	int panjang, lebar;
	
	cout<<"masukkan panjang: ";
	cin>> panjang;
	
	cout<<"maskkan lebar: ";
	cin>> lebar;
	
	cout<<"luas persegi: " << panjang*lebar;
}

int main()
{
	luaspersegi();
	return 0;
}
