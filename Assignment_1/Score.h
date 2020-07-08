#include "Number.h"
#include "Menu.h"
#pragma once

class Score:public Number
{
public:
	Score();
	~Score();
	void m_win(unsigned long time1, int score, int life);//this is to pass the t.ElapsedTime()
	void m_lose(unsigned long time1, int score, int life);
	int totalScore;
};

