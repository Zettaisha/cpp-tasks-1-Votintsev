#pragma once
#include <iostream>
using namespace std;

class Point {
private:
	int x_ = 0;
	int y_ = 0;
public:
	int GetX();
	int GetY();

	void SetX(int);
	void SetY(int);

	void Print();
	bool Read(const char* txt);
	void Move(int, int);
	double Dist(const Point&);
};

inline int Point::GetX() {
	return x_;
}
inline int Point::GetY() {
	return y_;
}

