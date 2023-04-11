#include <iostream>
#include <cmath>

double f(double x) {
	//return exp(1.0 / (4.0 * (1 + sqrt(x))));
	return (-1) * pow(abs(x - 1), 0.333333);
}

double searchRoot(double a, double b, double epsilon) {
	while (abs(b - a) > epsilon)
	{
		a = b;
		b = f(a);
	}
	return b;
}

int main() {
	std::cout << searchRoot(-2, -1, 0.001);
	return 0;
}