#include "Equation.h"
#include <cmath>

float Equa_1(float a, float b, float x)
{
	return a*x + b;
}

float Equa_2(float a, float b, float c, float x)
{
	return a*x*x + b*x + c;
}

float Equa_3(float a, float b, float c, float d, float x)
{
	return a*x*x*x + b*x*x + c*x + d;
}

float Equa_4(float a, float b, float c, float x)
{
	return a*x*x*x*x + b*x*x + c;
}

float Equa_5(float a, float b, float c, float d, float x)
{
	return (a*x + b) / (c*x + d);
}

float Equa_6(float a, float b, float c, float d, float e, float x)
{
	return (a*x*x + b*x + c) / (d*x + e);
}