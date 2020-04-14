#include <iostream>
using namespace std;

int luaspersegi (int p, int l){
	int luas;
	luas = p*l;
	return luas;
}

int main()
{
	int a,b;
	
	cout<<"masukkan panjang: ";
	cin>> a;
	cout<<"masukkan lebar: ";
	cin>> b;
	
	cout<<"luas persegi: "<<luaspersegi (a,b);
	return 0;
}
