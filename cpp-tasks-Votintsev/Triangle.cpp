#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
#include "Triangle.h"

using namespace std;

void Triangle::SetX1(int value)
{
	x1_ = value;
}
void Triangle::SetX2(int value)
{
	x2_ = value;
}

void Triangle::SetY1(int value)
{
	y1_ = value;
}
void Triangle::SetY2(int value)
{
	y2_ = value;
}

void Triangle::SetY3(int value)
{
	y3_ = value;
}
void Triangle::SetX3(int value)
{
	x3_ = value;
}

void Triangle::Print() {
	cout << '(' << x1_ << ',' << y1_ << ')' << '(' << x2_ << ',' << y2_ << ')' << '(' << x3_ << ',' << y3_ << ')' << endl;
}

bool Triangle::Read(const char* txt)
{
	if (txt) cout << txt << endl;
	int x1, x2, x3, y1, y2, y3;

	cout << "X1: " && cin >> x1;
	cout << "Y1: " && cin >> y1;
	cout << "X2: " && cin >> x2;
	cout << "Y2: " && cin >> y2;
	cout << "X3: " && cin >> x3;
	cout << "Y3: " && cin >> y3;

	SetX1(x1);
	SetY1(y1);
	SetX2(x2);
	SetY2(y2);
	SetX3(x3);
	SetY3(y3);
	return true;
}

double Triangle::Perimeter()
{
	double a, b, c;
	a = hypot((x1_ - x2_), (y1_ - y2_));
	b = hypot((x1_ - x3_), (y1_ - y3_));
	c = hypot((x2_ - x3_), (y2_ - y3_));

	return a + b + c;
}

double Triangle::Area() {
	return abs((x1_ * (y2_ - y3_) + x2_ * (y3_ - y1_) +
		x3_ * (y1_ - y2_)) / 2.0);
}

void Triangle::Center()
{
	double x = (x1_ + x2_ + x3_) / 3;
	double y = (y1_ + y2_ + y3_) / 3;


	cout << "Center of a triangle: " << '(' << x << ',' << y << ')' << endl;
}

void Triangle::Move(int delta_x1, int delta_y1, int delta_x2, int delta_y2, int delta_x3, int delta_y3)
{
	this->SetX1(this->x1_ + delta_x1);
	this->SetY1(this->y1_ + delta_y1);
	this->SetX2(this->x2_ + delta_x2);
	this->SetY2(this->y2_ + delta_y2);
	this->SetX3(this->x2_ + delta_x3);
	this->SetY3(this->y2_ + delta_y3);
}