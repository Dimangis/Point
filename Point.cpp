#include "Point.h"
#include <iostream>
#include <fstream>
using namespace std;


int main() {
	Point A, B(3, -2.5), C(B);
	cout << "Success" << endl;
	system("pause");
}
