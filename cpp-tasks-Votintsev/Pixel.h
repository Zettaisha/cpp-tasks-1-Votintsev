#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pixel {
private:
	int x_ = 0;
	int y_ = 0;
	string color_;
public:
	int GetX();
	int GetY();
	string GetColor();

	void SetX(int);
	void SetY(int);
	void SetColor(string);

	void Print();
	bool Read(const char* txt);
	void Move(int, int);
	double Dist(const Pixel&);
	void Draw();
	void Erase();
};

inline int Pixel::GetX() {
	return x_;
}
inline int Pixel::GetY() {
	return y_;
}
inline string Pixel::GetColor() {
	return color_;
}