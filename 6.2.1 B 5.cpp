#include <math.h>
#include <iostream>
using namespace std;

double LengthBtwPoints(double A[], double B[]) {
	return abs(sqrt(pow(B[0] - A[0], 2) + pow(B[1] - A[1], 2)));
}
double AngularCoeff(double A[], double B[]) {
	return (B[1] - A[1]) / (B[0] - A[0]);
}
double InOut(string var, bool input) {
	double x = 0;
	if (!input) {
		cout << var << endl;
	}
	else {
		cout << var;
		cin >> x;
		cout << endl;
	}
	return x;
}
bool CheckOut(double A[], double B[], double C[], double D[]) {
	if (LengthBtwPoints(A, B) == LengthBtwPoints(C, D) && AngularCoeff(A, B) == AngularCoeff(C, D)) {
		if (LengthBtwPoints(B, C) == LengthBtwPoints(A, D) && AngularCoeff(B, C) == AngularCoeff(A, D)) {
			return true;
		}
	}
	return false;
}

int main() {
	InOut("Enter coordinates of A", false);
	double A[2] = { InOut("x = ", true), InOut("y = ", true)};
	InOut("Enter coordinates of B", false);
	double B[2] = { InOut("x = ", true), InOut("y = ", true) };
	InOut("Enter coordinates of C", false);
	double C[2] = { InOut("x = ", true), InOut("y = ", true) };
	InOut("Enter coordinates of D", false);
	double D[2] = { InOut("x = ", true), InOut("y = ", true) };

	if (CheckOut(A, B, C, D)) {
		InOut("Is a parallelogram", false);
	}
	else {
		InOut("Is not a parallelogram", false);
	}
}
