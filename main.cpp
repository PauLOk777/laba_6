#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int sign(int a);

int main() {
	int x, y, z;
	cout << "Input x, y: \n";
	cin >> x >> y;

	z = (sign(x) + sign(y))*sign(x + y);
	cout << "Z = " << z << endl;
	return 0;
}

int sign(int a) {
	return (a < 0) ? a = -1 : a > 0 ? a = 1 : a = 0;
}
