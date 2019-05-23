#include "Input_Output.h"
#include "TapXacDinh.h"
#include <iostream>

using namespace std;

void Write_and_Input(int &k)
{
	cout << "Chon Phuong Trinh ax + b = 0                    : Nhap 1" << endl;
	cout << "Chon Phuong Trinh ax^2 + bx + c = 0             : Nhap 2" << endl;
	cout << "Chon Phuong Trinh ax^3 + bx^2 + cx + d = 0      : Nhap 3" << endl;
	cout << "Chon Phuong Trinh ax^4 + bx^2 + c = 0           : Nhap 4" << endl;
	cout << "Chon Phuong Trinh (ax + b) / (cx + d) = 0       : Nhap 5" << endl;
	cout << "Chon Phuong Trinh (ax^2 + bx + c) / (dx + e) = 0: Nhap 6" << endl;
	cout << "Nhap vao 1 so: ";
	cin >> k;
	In_Out(k);
}

void In_Out(int k)
{
	float a, b, c, d, e;
	switch (k)
	{
	case 1:
		Input('a', a);
		Input('b', b);
		Write_1(a, b);
		TapXacDinh_1();
		break;
	case 2:
		Input('a', a);
		Input('b', b);
		Input('c', c);
		Write_2(a, b, c);
		TapXacDinh_2();
		break;
	case 3:
		Input('a', a);
		Input('b', b);
		Input('c', c);
		Input('d', d);
		Write_3(a, b, c, d);
		TapXacDinh_3();
		break;
	case 4:
		Input('a', a);
		Input('b', b);
		Input('c', c);
		Write_4(a, b, c);
		TapXacDinh_4();
		break;
	case 5:
		Input('a', a);
		Input('b', b);
		Input('c', c);
		Input('d', d);
		Write_5(a, b, c, d);
		TapXacDinh_5(a, b, c, d);
		break;
	case 6:
		Input('a', a);
		Input('b', b);
		Input('c', c);
		Input('d', d);
		Input('e', e);
		Write_6(a, b, c, d, e);
		TapXacDinh_6(a, b, c, d, e);
		break;
	default:
		cout << "Nhap vao khong hop le!!!";
		break;
	}
}

void Input(char ch, float &k)
{
	cout << ch << " = ";
	cin >> k;
}

void Write_1(float a, float b)
{		
	cout << "Phuong trinh co dang: " << a << "x + " << b << " = 0" << endl;
}

void Write_2(float a, float b, float c)
{
	cout << "Phuong trinh co dang: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
}

void Write_3(float a, float b, float c, float d)
{
	cout << "Phuong trinh co dang: " << a << "x^3 + " << b << "x^2 + " << c << "x + " << d << " = 0" << endl;
}

void Write_4(float a, float b, float c)
{
	cout << "Phuong trinh co dang: " << a << "x^4 + " << b << "x^2 + " << c << " = 0" << endl;
}

void Write_5(float a, float b, float c, float d)
{
	cout << "Phuong trinh co dang: (" << a << "x + " << b << ") / (" << c << "x + " << d << ") = 0" << endl;
}

void Write_6(float a, float b, float c, float d, float e)
{
	cout << "Phuong trinh co dang: (" << a << "x^2 + " << b << "x + " << c << ") / (" << d << "x + " << e << ") = 0" << endl;
}

