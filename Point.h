#pragma once
class Point
{
public:
	Point();
	Point(const Point &p);
	Point(double _x, double _y);
	Point(double _x);
	~Point();

private:
	double x, y;	
};

Point::Point() {
	x = 0.0;
	y = 0.0;
}

Point::Point(const Point &p) {
	x = p.x;
	y = p.y;
}

Point::Point(double _x, double _y) : x(_x), y(_y) {  }

Point::Point(double _x) {
	x = _x;
	y = 0.0;
}

Point::~Point() {
	x = 0.0;
	y = 0.0;
}

