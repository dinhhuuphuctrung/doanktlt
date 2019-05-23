#include "TapXacDinh.h"
#include "Equation.h"
#include <iostream>
#include <cmath>
#define esilon 1e-5

using namespace std;

void TapXacDinh_1()
{
	cout << "Tap xac dinh cua phuong trinh la R" << endl;
}

void TapXacDinh_2()
{
	cout << "Tap xac dinh cua phuong trinh la R" << endl;
}

void TapXacDinh_3()
{
	cout << "Tap xac dinh cua phuong trinh la R" << endl;
}

void TapXacDinh_4()
{
	cout << "Tap xac dinh cua phuong trinh la R" << endl;
}

void TapXacDinh_5(float a, float b,float c,float d)
{
	if (fabs(c) <= esilon || fabs(Equa_1(a, b, -d / c)) <= esilon) cout << "Tap xac dinh cua phuong trinh la R" << endl;
	else cout << "Tap xac dinh cua phuong trinh la R \\ {" << -d / c << "}" << endl;
}

void TapXacDinh_6(float a, float b, float c, float d,float e)
{
	if (d <= esilon || Equa_2(a, b, c, -e / d) <= esilon) cout << "Tap xac dinh cua phuong trinh la R" << endl;
	else cout << "Tap xac dinh cua phuong trinh la R \\ {" << -e / d << "}" << endl;
}
