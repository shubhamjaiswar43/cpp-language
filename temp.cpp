#ifndef iostream
#include <iostream>
#endif
// #ifndef stdlib.h
// #include <stdlib.h>
// #endif
// #ifndef string
// #include <string>
// #endif
#ifndef PI
#define PI 3.141592654
#define E 2.718281828459045
#endif
using namespace std;
template <class T>
T absolute(T x)
{
	if (x < 0)
	{
		x *= (-1);
	}
	return x;
}
double power(double x, int y)
{
	double ans = 1;
	for (int i = 0; i < y; i++)
	{
		ans *= x;
	}
	return ans;
}
unsigned long long int factorial(int x)
{
	unsigned long long int fact = 1;
	if (x > 20)
	{
		return -1;
	}
	for (int i = 1; i <= x; i++)
	{
		fact *= i;
	}
	return fact;
}
int permutation(int n, int r)
{
	int ans;
	ans = (factorial(n)) / (factorial(n - r));
	return ans;
}
int combination(int n, int r)
{
	int ans;
	ans = (factorial(n)) / (factorial(r) * factorial(n - r));
	return ans;
}
double sine(double rad)
{
	double ans = 0;
	int sign = 1;
start:
	while (rad >= PI)
	{
		rad -= PI;
	}
	while (rad < 0)
	{
		rad = PI - rad;
	}
	if (rad >= PI || rad < 0)
		goto start;
	if (rad == 0 || rad == PI)
	{
		return 0;
	}
	for (int i = 1; i <= 20; i += 2)
	{
		sign ? ans += power(rad, i) / factorial(i) : ans -= power(rad, i) / factorial(i);
		sign = sign ? 0 : 1;
	}
	return ans;
}
double cosine(double rad)
{
	double ans = 0;
	int sign = 0;
start:
	while (rad >= (2 * PI))
	{
		rad -= (2 * PI);
	}
	while (rad < 0)
	{
		rad = (-1) * rad;
	}
	if (rad >= (2 * PI) || rad < 0)
		goto start;

	for (int i = 0; i <= 20; i += 2)
	{
		if (i > 0)
		{
			sign ? ans += power(rad, i) / factorial(i) : ans -= power(rad, i) / factorial(i);
			sign = sign ? 0 : 1;
		}
		else
		{
			ans += 1;
		}
	}
	return ans;
}
double tangent(double rad)
{
	double ans;
start:
	while (rad >= (2 * PI))
	{
		rad -= PI;
	}
	while (rad < 0)
	{
		rad = PI + rad;
	}
	if (rad < 0 || rad >= (2 * PI))
		goto start;
	if (rad != (PI / 2) && rad != (3.142 / 2) && rad != (3.1415 / 2) && rad != (3.14 / 2))
	{
		ans = sine(rad) / cosine(rad);
		return ans;
	}
	ans = 0.0 / 0.0;
	return ans;
}
double cosecant(double rad)
{
	double ans;
	if (rad != 0 && rad != (PI) && rad != (3.142) && rad != (3.1415) && rad != (3.14))
	{
		ans = 1.0 / sine(rad);
		return ans;
	}
	ans = 0.0 / 0.0;
	return ans;
}
double secant(double rad)
{
	double ans;
	if (rad != (PI / 2) && rad != (3.142 / 2) && rad != (3.1415 / 2) && rad != (3.14 / 2))
	{
		ans = 1.0 / cosine(rad);
		return ans;
	}
	ans = 0.0 / 0.0;
	return ans;
}
double cotangent(double rad)
{
	double ans;
	if (rad == (PI / 2) || rad == (3.142 / 2) || rad == (3.1415 / 2) || rad == (3.14 / 2))
	{
		return 0;
	}
	else if (rad != 0 && rad != (PI) && rad != (3.142) && rad != (3.1415) && rad != (3.14))
	{
		ans = 1.0 / tangent(rad);
		return ans;
	}
	ans = 0.0 / 0.0;
	return ans;
}
double logBaseE(double x)
{
	bool sign = 0;
	if (x == 0)
	{
		return (0.0 / 0.0);
	}
	if (x < 1)
	{
		x = 1 / x;
		sign = 1;
	}
	double ans = 0, temp = x;
	while (temp > E)
	{
		ans++;
		temp /= E;
	}
	for (int i = 0; i < 6; i++)
	{
		temp = power(temp, 10);
		while (temp > E)
		{
			ans += 0.1 / power(10, i);
			temp /= E;
		}
	}

	/*ALTERNATE METHOD FOR PRECESION*/
	// double p = 1.0;
	// for (int i = 0; i < 60; i++)
	// {
	// 	temp *= temp;
	// 	p /= 2;
	// 	if (temp > E)
	// 	{
	// 		ans += p;
	// 		temp /= E;
	// 	}
	// }

	if (sign)
	{
		ans *= (-1);
	}
	return ans;
}
double logXbaseY(double x, double y)
{
	if (x == 0 || y == 0 || y == 1)
	{
		return (0.0 / 0.0);
	}
	if (x == (1 / y))
	{
		return -1;
	}
	if (x == y)
	{
		return 1;
	}
	double ans;
	ans = logBaseE(x) / logBaseE(y);
	return ans;
}
double exponent(double x)
{
	double ans = 1;
	// 			Roots      	1  10           100          1000       10000
	const float eRoot[5] = {E, 1.105170918, 1.010050167, 1.0010005, 1.000100005};
	int temp = x;
	bool sign=0;
	if(x<0){
		sign=1;
		x*=(-1);
		temp=x;
	}
	for (int i = 0; i < 5; i++)
	{
		ans *= power(eRoot[i], temp);
		x -= temp;
		x *= 10;
		temp = x;
		if (x == 0)
			break;
	}
	if(sign){
		ans=1/ans;
	}
	return ans;
}
double xRaiseToy(double x, double y)
{
	double ans;
	ans = exponent((double)y * logBaseE(x));
	return ans;
}
double squareRoot(double x)
{
	return xRaiseToy(x, 0.5);
}
// double summation(string f, int l1, int l2)
// {
// 	double ans = 0;
// 	if (l1 > l2)
// 	{
// 		return -1;
// 	}
// 	for (int i = l1; i < l2; i++)
// 	{
// 		for (int j = 0; j < f.size(); j++)
// 		{
// 			if (f[j] == 'x' && f[j + 1] == '^')
// 			{
// 				if (f[j + 3] == ' ')
// 				{
// 					string *ct = new string;
// 					*ct = {f[j+2]};
// 				}
// 				else if (f[j + 4] == ' ')
// 				{
// 					string *ct = new string;
// 					*ct = {f[j+2],f[j+3]};
// 				}
// 				else{
// 					string *ct=new string;
// 				}
// 				ans += power(i, stoi(*ct, nullptr, 10));
// 				j += 2;
// 			}
// 		}
// 	}
// }
// double derivative(string f, double l)
// {
// 	double ans = 0;
// 	int i = 0;
// 	while (f[i] != '\0')
// 	{
// 		if (f[i] == ' ')
// 		{
// 			continue;
// 		}
// 		else if (f[i] == '0' || f[i] == '1' || f[i] == '2' || f[i] == '3' || f[i] == '4' || f[i] == '5' || f[i] == '6' || f[i] == '7' || f[i] == '8' || f[i] == '9')
// 		{
// 		}
// 	}
// }
int main()
{
	// cout<<xRaiseToy(2.2,1.18546250);   =>>  FAILED

	// cout << factorial(5); // =>> PASSED

	// cout << permutation(5, 2); //=>> PASSED
	// cout << combination(5, 3); // =>> PASSED

	// cout << power(2, 10);	// =>>PASSED
	// cout << power(2.2, 10); //  =>>PASSED

	// cout << sine(0) << ", " << sine(PI / 6) << ", " << sine(PI / 4) << ", " << sine(PI / 3) << ", " << sine(PI / 2) << endl; //= >> PASSED
	// cout << sine(PI) << endl
	// 	 << endl;

	// cout << cosine(0) << ", " << cosine(PI / 6) << ", " << cosine(PI / 4) << ", " << cosine(PI / 3) << ", " << cosine(PI / 2) << endl; // =>> PASSED
	// cout << cosine(PI) << endl
	// 	 << endl;

	// cout << tangent(0) << ", " << tangent(PI / 6) << ", " << tangent(PI / 4) << ", " << tangent(PI / 3) << ", " << tangent(3.14 / 2) << endl; // =>> PASSED
	// cout << tangent(PI) << endl
	// 	 << endl;

	// cout << cosecant(0) << ", " << cosecant(PI / 6) << ", " << cosecant(PI / 4) << ", " << cosecant(PI / 3) << ", " << cosecant(3.14 / 2) << endl; // =>> PASSED
	// cout << cosecant(PI) << endl
	// 	 << endl;

	// cout << secant(0) << ", " << secant(PI / 6) << ", " << secant(PI / 4) << ", " << secant(PI / 3) << ", " << secant(3.14 / 2) << endl; // =>> PASSED
	// cout << secant(PI) << endl
	// 	 << endl;

	// cout << cotangent(0) << ", " << cotangent(PI / 6) << ", " << cotangent(PI / 4) << ", " << cotangent(PI / 3) << ", " << cotangent(3.14 / 2) << endl; // =>> PASSED
	// cout << cotangent(PI) << endl
	// 	 << endl;

	// cout << absolute(-1) << " " << absolute(1); // =>> PASSED

	// cout << logBaseE(10);  // =>> PASSED
	// cout<<logBaseE(2.5);	  // =>> PASSED
	// cout << logBaseE(0.4); // =>> PASSED

	// cout<<logXbaseY(2,0.4);// =>> PASSED

	// cout<<exponent(2.2);   // =>> PASSED

	// cout<<xRaiseToy(2,0.5)    // =>> PASSED
	//     <<" = "<<squareRoot(2);

	// cout<<logXbaseY(0.8,0.3);// =>> PASSED
	// cout<<squareRoot(0.8);   // =>> PASSED

	// cout<<xRaiseToy(0.8,0.3)<<endl;
	// cout<<exponent(0.3*logBaseE(0.8))<<"="<<"0.3 * "<<logBaseE(0.8);

	// cout<<exponent(0.0669429); //=>> PASSED

	return 0;
}