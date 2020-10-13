#include "thuvien.h";
void nhap(int &a, int &b)
{
	cout << "\n nhap vao a : ";
	cin >> a;
	cout << "\n nhap vao b : ";
	cin >> b;
	while (b = 0) {
		cout << "\ hay nhap b khac 0 : ";
		cout << "\n nhap vao b : ";
		cin >> b;
	}
}

void congRd() {
	int a = rand()%100+1;
	int b = rand()%100+1;
	cout <<"\ntong hai so "<<a<<" va "<<b <<" la "<< a + b;
}
void truRd() {
	int a = rand() % 100 + 1;
	int b = rand() % 100 + 1;
	cout << "\ntong hai so " << a << " va " << b << " la " << a - b;
}
void Tinh(int a, int b) {
	cout << "\n phep tinh cong : " << a + b;
	cout << "\n phep tinh tru : " << a - b;
	cout << "\n phep tinh nhan : " << a * b;
	cout << "\n phep tinh chia : " << (float)a / b;
}