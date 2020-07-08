#pragma once
#include "Number.h"
class Menu: public Number
{
public:
	Menu();
	void m_MenuScreen();
	int m_PlayScreen();
	void m_Showinstruction();
	/*void m_Loadinstruction();
	void m_Start();*/
	int m_Quit();
	bool isRunning = true;
	~Menu();
	Number test;


private:
	
	int input;
	char input3;
};

