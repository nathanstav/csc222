#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double n = 5;
	double m = 7;
	cout << "The sum of " << n << " and " << m << " is ";
	cout << n + m << "." << endl;
	
	cout << "The difference between " << n << " and " << m << " is ";
	cout << n - m << "." << endl;

	cout << "The product of " << n << " and " << m << " is ";
	cout << n * m << "." << endl;
	
	cout << "The quotient of " << n << " and " << m << " is ";
	cout << n / m << "." << endl;
	
	cout << "The sum of " << n << " * " << m << " and " << n << " / " << m << " is ";
	cout << n * m + n / m << "." << endl;

	cout << "The square root of " << n << " + " << m << " is ";
	cout << sqrt(n + m) << "." << endl;

	cout << n << " to the power of " << m << " is ";
	cout << pow(n, m) << "." << endl;

	cout << "The remainder of " << n << " / " << m << " is ";
	cout << fmod(n, m) << "." << endl;

	cout << "The cube root of " << n << " * " << m << " is ";
	cout << cbrt(n * m) << "." << endl;

	cout << "The hypotenuse of a triangle with legs lengthed " << n << " and " << m << " would be ";
	cout << hypot(n, m) << "." << endl;

	return 0;
}


