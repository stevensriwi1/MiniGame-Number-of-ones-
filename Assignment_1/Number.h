#pragma once
#include "stdio.h"
#include <stdlib.h>
#include <ctime>
#include "time.h"


class Number
{
public:
	Number();
	~Number();
	void m_rand();
	void m_time();
	void m_life();
	void start();
	unsigned long elapsedTime();
	bool isTimeout(unsigned long seconds);
	int j;
	bool isRunning = true;
	unsigned long seconds = 60; //this is to set the timer to how many seconds
	unsigned long time1;
	int score;
	int life;

private:
	int randNum[19];
	int stageCounter;
	int Numbers;
	unsigned long begTime;
	int ones;
	int answer = 0;
};

