#include "thuvien.h";
void nhap(int &a, int &b)
{
	cout << "\n nhap a";
	cin >> a;
	cout << "\n nhap b";
	cin >> b;
	while (b = 0) {
		cout << "\ hay nhap b khac 0 : ";
		cout << "\n nhap vao b : ";
		cin >> b;
	}
}

void hcn()
{
	int a,b;
	cout << "------------DT VA CV HCN----------------";
	cout << "\n nhap a";
	cin >> a;
	cout << "\n nhap b";
	cin >> b;
	double length = a;
	double width = b;
	cout << "\n dien tich hcn" << length * width;
	cout << "\n chu vi hcn " << (length + width) * 2;
}
void hv()
{
	int a;
	cout << "\n ------------DT va CV HV----------------";
	cout << "\n nhap vao 2 canh a";
	cin >> a;
	cout << "\n DT HV" << a * a;
	cout << "\n CV HV" << a * 4;
}
void ht()
{
	cout << "\n ------------DT va CV HT----------------";
	float r;
	cout << "\n nhap ban kinh r=";
	cin >> r;
	cout << "\n DT HT" << r * r*3.14;
	cout << "\n CV HT" << 2 * 3.14*r;
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