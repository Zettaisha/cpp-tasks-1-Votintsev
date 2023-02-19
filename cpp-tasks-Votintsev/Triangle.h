#pragma once
#include <iostream>
#include <string>

class Triangle {
private:
	int x1_ = 0, x2_ = 0, x3_ = 0;
	int y1_ = 0, y2_ = 0, y3_ = 0;

public:
	int GetX1();
	int GetX2();
	int GetX3();

	int GetY1();
	int GetY2();
	int GetY3();

	void SetX1(int);
	void SetX2(int);
	void SetX3(int);

	void SetY1(int);
	void SetY2(int);
	void SetY3(int);

	void Print();
	bool Read(const char* txt);
	void Move(int, int, int, int, int, int);
	double Perimeter();
	double Area();
	void Center();
};

inline int Triangle::GetX1() {
	return x1_;
}
inline int Triangle::GetX2() {
	return x2_;
}
inline int Triangle::GetX3() {
	return x3_;
}
inline int Triangle::GetY1() {
	return y1_;
}
inline int Triangle::GetY2() {
	return y2_;
}
inline int Triangle::GetY3() {
	return y3_;
}
