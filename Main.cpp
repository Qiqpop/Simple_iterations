#include <iostream>
#include <cmath>

double f(double x) {
	return exp(1.0 / (4.0 * (1 + sqrt(x))));
}

double searchRoot(double a, double b, double epsilon) {
	while (true)
	{
		b = f(a);
		if (abs(b - a) < epsilon) break;
		a = b;
	}
	return b;
}

int main() {
	std::cout << searchRoot(1, 2, 0.01);
	return 0;
}