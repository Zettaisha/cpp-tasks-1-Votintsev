#pragma once
class Timer
{
private:
	int seconds_ = 0;
	int interval_ = 0;
public:
	void PrintTimer();
	void SetInterval(int);
	void Start();
	void Elapsed();
};

