#pragma once
#include <iostream>
#include <string>

class DateTime {
private:
	int year_, month_, day_, hour_, minute_;
public:
	int GetYear();
	int GetMonth();
	int GetDay();
	int GetHour();
	int GetMinute();

	void SetYear(int);
	void SetMonth(int);
	void SetDay(int);
	void SetHour(int);
	void SetMinute(int);

	void PrintDate();
	bool Read(const char* txt = 0);
	void AddDays(int);
	void AddYears(int);
	void AddMonths(int);
	void IsLeapYear();
	void MonthOfYear();
	bool CheckValid(int, int, int, int, int);
};

inline int DateTime::GetYear() {
	return year_;
}
inline int DateTime::GetMonth() {
	return month_;
}
inline int DateTime::GetDay() {
	return day_;
}
inline int DateTime::GetHour() {
	return hour_;
}
inline int DateTime::GetMinute() {
	return minute_;
}




