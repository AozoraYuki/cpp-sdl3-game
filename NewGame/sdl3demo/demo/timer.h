#pragma once

class Timer
{
	float length, time;
	bool timeOut;

public:
	Timer(float length) : length(length), time(0)
	{

	}

	void step (float deltaTime)
	{
		time += deltaTime;
		if (time >= length)
		{
			time -= length;
			timeOut = true;
		}
	}

	bool isTimeOut() const { return timeOut; }
	float getTime() const { return time; }
	float getLength() const { return length; }
	void reset() { time = 0; }
};