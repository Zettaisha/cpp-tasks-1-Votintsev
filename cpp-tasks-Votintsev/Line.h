#pragma once
#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

class Line {
private:
	Point point1_;
	Point point2_;
public:
	Point GetPoint1();
	Point GetPoint2();

	void SetPoint1(Point);
	void SetPoint2(Point);

	void Print();
	bool Read(const char* txt);
	void Move(int, int);
	double Length();
	void Center();
	void CheckPoint(int, int);
};

inline Point Line::GetPoint1() {
	return point1_;
}
inline Point Line::GetPoint2() {
	return point2_;
}
