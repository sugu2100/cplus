#include <iostream>
using namespace std;

struct Point { //struct는 기본 public임
	int x, y;  

	Point(int _x = 0, int _y = 0) {
		x = _x;
		y = _y;
		//cout << "점(" << x << ', ' << y << ")생성자\n";
		cout << "점(" << x << ", " << y << ")생성자" << endl;
	}
};

class Circle {
	Point center;
	int radius;

public:
	Circle(int cx = 0, int cy = 0, int r = 0) {
		center.x = cx;
		center.y = cy;
		radius = r;
		cout << "원(반지름 = " << radius << ")생성자\n";
	}
};