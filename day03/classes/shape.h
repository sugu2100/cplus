#include <iostream>
using namespace std;

struct Point { //struct�� �⺻ public��
	int x, y;  

	Point(int _x = 0, int _y = 0) {
		x = _x;
		y = _y;
		cout << "��(" << x << ", " << y << ")������" << endl;
	}
};

class Circle {
	Point center;
	int radius;

public:
	Circle(int cx = 0, int cy = 0, int r = 0) : center(cx, cy), radius(r) {
		cout << "��(������ = " << radius << ")������\n";
	}
};