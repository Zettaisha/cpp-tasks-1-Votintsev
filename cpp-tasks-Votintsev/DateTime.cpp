#include <iostream>
#include <string>
#include "DateTime.h"
using namespace std;

void DateTime::PrintDate() {
	cout << day_ << '.' << month_ << '.' << year_ << ' ' << hour_ << ':' << minute_ << endl;
};

bool DateTime::Read(const char* txt) {
	if (txt) cout << txt << endl;
	int day, month, year, hour, minute;
	cout << "Day: " && cin >> day;
	cout << "Month: " && cin >> month;
	cout << "Year: " && cin >> year;
	cout << "Hours: " && cin >> hour;
	cout << "Minutes: " && cin >> minute;

	if (CheckValid(day, month, year, hour, minute)) {
		SetDay(day);
		SetMonth(month);
		SetYear(year);
		SetHour(hour);
		SetMinute(minute);
		return true;
	}
	else {
		cin.clear();
		return false;
	}
};

void DateTime::AddDays(int value) {
	this->SetDay(this->day_ + value);
}

void DateTime::AddYears(int value) {
	this->SetYear(this->year_ + value);
}

void DateTime::AddMonths(int value) {
	this->SetMonth(this->month_ + value);
}

bool DateTime::CheckValid(int day, int month, int year, int hour, int minute) {
	if (day > 31 || day == 0 || month > 12 || month == 0 || hour > 23 || hour == 0 || minute > 60 || minute == 0) {
		cout << "DateTime value isn't correct." << endl;
		return false;
	}
	else {
		cout << "DateTime value is correct." << endl;
		return true;
	}
}

void DateTime::IsLeapYear() {
	if (this->year_ % 4 == 0) {
		cout << this->year_ << " year is leap" << endl;
	}
	else {
		cout << this->year_ << " year isn't leap" << endl;
	}
}

void DateTime::MonthOfYear() {
	if (this->month_ == 1)
		cout << "January" << endl;
	if (this->month_ == 2)
		cout << "February" << endl;
	if (this->month_ == 3)
		cout << "March" << endl;
	if (this->month_ == 4)
		cout << "April" << endl;
	if (this->month_ == 5)
		cout << "May" << endl;
	if (this->month_ == 6)
		cout << "June" << endl;
	if (this->month_ == 7)
		cout << "Jule" << endl;
	if (this->month_ == 8)
		cout << "August" << endl;
	if (this->month_ == 9)
		cout << "September" << endl;
	if (this->month_ == 10)
		cout << "October" << endl;
	if (this->month_ == 11)
		cout << "November" << endl;
	if (this->month_ == 12)
		cout << "December" << endl;
}


void DateTime::SetYear(int value) {
	year_ = value;
}
void DateTime::SetMonth(int value) {
	month_ = value;
}
void DateTime::SetDay(int value) {
	day_ = value;
}
void DateTime::SetHour(int value) {
	hour_ = value;
}
void DateTime::SetMinute(int value) {
	minute_ = value;
}