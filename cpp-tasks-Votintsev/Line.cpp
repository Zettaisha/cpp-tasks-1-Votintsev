#include "Line.h"
#include <iostream>
#include <math.h>
#include "Point.h"
using namespace std;


void Line::SetPoint1(Point value)
{
	point1_ = value;
}
void Line::SetPoint2(Point value)
{
	point2_ = value;
}


void Line::Print() {
	cout << '(' << point1_.GetX() << ',' << point1_.GetY() << ')' << '(' << point2_.GetX() << ',' << point2_.GetY() << ')' << endl;
}

bool Line::Read(const char* txt)
{
	if (txt) cout << txt << endl;
	int x1, x2, y1, y2;

	cout << "X1: " && cin >> x1;
	cout << "Y1: " && cin >> y1;
	cout << "X2: " && cin >> x2;
	cout << "Y2: " && cin >> y2;

	point1_.SetX(x1);
	point1_.SetY(y1);
	point2_.SetX(x2);
	point2_.SetY(y2);
	return true;
}

void Line::Move(int delta_x, int delta_y)
{
	point1_.SetX(point1_.GetX() + delta_x);
	point1_.SetY(point1_.GetY() + delta_y);
	point2_.SetX(point2_.GetX() + delta_x);
	point2_.SetY(point2_.GetY() + delta_x);
}

double Line::Length()
{
	return sqrt(pow(static_cast<double>(point1_.GetX() - point2_.GetX()), 2) + pow(static_cast<double>(point1_.GetY() - point2_.GetY()), 2));
}

void Line::Center()
{
	int x, y;
	x = (point1_.GetX() + point2_.GetX()) / 2;
	y = (point1_.GetY() + point2_.GetY()) / 2;

	cout << "Center: " << '(' << x << ',' << y << ')' << endl;
}

void Line::CheckPoint(int x, int y)
{
	double result = (sqrt(pow(static_cast<double>(point1_.GetX() - x), 2) + pow(static_cast<double>(point1_.GetY() - y), 2)))
		+ (sqrt(pow(static_cast<double>(x - point2_.GetX()), 2) + pow(static_cast<double>(y - point2_.GetY()), 2)));
	if (result == Length())
		cout << "Dot" << '(' << x << ',' << y << ')' << " is on the line" << endl;
	else
		cout << "Dot" << '(' << x << ',' << y << ')' << " is not on the line" << endl;

}

