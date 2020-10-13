#include "thuvien.h";
void nhap(int &a, int &b)
{
	cout<< "------------DT VA CV HCN----------------";
	cout << "\n nhap a";
	cin >> a;
	cout << "\n nhap b";
	cin >> b;
	double length = a;
	double width = b;
	cout << "\n dien tich hcn" << length * width;
	cout << "\n chu vi hcn " << (length + width) * 2;
	cout << "\n ------------DT va CV HV----------------";
	cout << "\n nhap vao 2 canh a";
	cin >> a;
	cout << "\n DT HV" << a*a;
	cout << "\n CV HV" << a * 4;
	cout << "\n ------------DT va CV HT----------------";
	float r;
	cout << "\n nhap ban kinh r=";
	cin >> r;
	cout << "\n DT HT" << r * r*3.14;
	cout << "\n CV HT" << 2 * 3.14*r;
}