#include "Point.h"
#include <iostream>
using namespace std;

void Point::SetX(int value)
{
	x_ = value;
}

void Point::SetY(int value)
{
	y_ = value;
}

void Point::Print() {
	cout << '(' << x_ << ',' << y_ << ')';
}

bool Point::Read(const char* txt)
{
	if (txt) cout << txt << endl;
	int x, y; string color;

	cout << "X: " && cin >> x;
	cout << "Y: " && cin >> y;

	SetX(x);
	SetY(y);
	return true;
}

void Point::Move(int delta_x, int delta_y)
{
	this->SetX(this->x_ + delta_x);
	this->SetY(this->y_ + delta_y);
}

double Point::Dist(const Point& otherPixel)
{
	return sqrt(pow(static_cast<double>(otherPixel.x_ - x_), 2) + pow(static_cast<double>(otherPixel.y_ - y_), 2));
}
