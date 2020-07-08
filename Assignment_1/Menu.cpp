#include "Menu.h"
#include <iostream>
#include "stdio.h"
#include <stdlib.h>
#include <ctime>
using namespace std;



Menu::Menu()
{
}

void Menu::m_MenuScreen()
{
	printf("\n");
	printf("\t##########################################################################################################\n");
	printf("\t##########################################################################################################\n");

	printf("\t##\t\t     _____           _                  ___    _____ _____ _____ _____  \t\t\t##\n");
	printf("\t##\t\t    |   | |_ _ _____| |_ ___ ___    ___|  _|  |     |   | |   __|   __| \t\t\t##\n");
	printf("\t##\t\t    | | | | | |     | . | -_|  _|  | . |  _|  |  |  | | | |   __|__   | \t\t\t##\n");
	printf("\t##\t\t    |_|___|___|_|_|_|___|___|_|    |___|_|    |_____|_|___|_____|_____| \t\t\t##\n");
	printf("\t##\t|\t\t5\t\t0\t\t\t1\t\t\t\t3\t|\t##\n");
	printf("\t##\t|3\t\t\t\t\t8\t\t\t6\t\t\t5\t|\t##\n");
	printf("\t##\t|\t\t\t\t8\t\t\t\t\t\t\t3\t|\t##\n");
	printf("\t##\t|\t\t7\t\t\t0\t\t\t9\t\t5\t\t|\t##\n");
	printf("\t##\t|\t\t\t9\t\t\t7\t\t\t\t\t1\t|\t##\n");
	printf("\t##\t|\t\t4\t\t\t3\t\t\t\t1\t\t\t|\t##\n");
	printf("\t##\t|5\t\t\t\t\t\t\t\t0\t\t\t\t|\t##\n");
	printf("\t##\t|\t\t\t\t0\t\t\t\t\t\t\t4\t|\t##\n");
	printf("\t##\t|\t\t\t\t ------------------------\t\t\t\t\t|\t##\n");
	printf("\t##\t\t\t\t\t |  Play Game(Press 1)  |\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t ------------------------\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t     -------------------------------\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t     |    Instructions(Press 2)    |\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t     -------------------------------\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t--------------------------\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t| Quit Program(Press 3)  |\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t--------------------------\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##########################################################################################################\n");
	printf("\t##########################################################################################################\n");
	printf("\n\n");
}

int Menu::m_PlayScreen()
{
	int randNum;
	srand(time(0)); //Seed Random Number, if this is not included, console will give you random number, but that random number will always be the same every time you run it
	system("cls");
	//printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t##########################################################################################################\n");
	printf("\t##########################################################################################################\n");
	printf("\t##\t\t     _____           _                  ___    _____ _____ _____ _____      \t\t##\n");
	printf("\t##\t\t    |   | |_ _ _____| |_ ___ ___    ___|  _|  |     |   | |   __|   __|     \t\t##\n");
	printf("\t##\t\t    | | | | | |     | . | -_|  _|  | . |  _|  |  |  | | | |   __|__   |     \t\t##\n");
	printf("\t##\t\t    |_|___|___|_|_|_|___|___|_|    |___|_|    |_____|_|___|_____|_____|     \t\t##\n");
	printf("\t##\t\t                                                                            \t\t##\n");
	printf("\t##########################################################################################################\n");
	printf("\t##########################################################################################################\n");
	Number *Game;
	Game = new Number();
	Game->m_rand();
	cout << "Replay? (Y/N)" << endl;
	cin >> input3;
	this->test = *Game;
	if (input3 == 'y' || input3 == 'Y')
	{
		system("cls");
		m_PlayScreen();
	}
	else if (input3 == 'n' || input3 == 'N')
	{
		return 0;
	}
	/*printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t\t03 Chances\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t\t58 Seconds\t##\n");
	printf("\t##########################################################################################################\n");
	printf("\t##########################################################################################################\n");*/
}


void Menu::m_Showinstruction()
{
	printf("\n\n\n\n\n\n");
	printf("\t##########################################################################################################\n");
	printf("\t##########################################################################################################\n");
	printf("\t##\t\t     _____           _                  ___    _____ _____ _____ _____  \t\t\t##\n");
	printf("\t##\t\t    |   | |_ _ _____| |_ ___ ___    ___|  _|  |     |   | |   __|   __| \t\t\t##\n");
	printf("\t##\t\t    | | | | | |     | . | -_|  _|  | . |  _|  |  |  | | | |   __|__   | \t\t\t##\n");
	printf("\t##\t\t    |_|___|___|_|_|_|___|___|_|    |___|_|    |_____|_|___|_____|_____| \t\t\t##\n");
	printf("\t##\t**************************************Instructions**************************************\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t1. To Start the game, Press '1' to the console.\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t2. You will be given random numbers from the console and also a limit time of 60s.\t\t\t##\n");
	printf("\t##\t3. Users will also be given 3 chances to finish the game.\t\t\t\t\t\t##\n");
	printf("\t##\t4. If you made a mistake on deciding what is the answer, you will lose 1 chance.\t\t\t##\n");
	printf("\t##\t5. If users lose all the chances or did not finish before 60s then it's game over.\t\t\t##\n");
	printf("\t##\t6. At the start of the game, there will only be 4 digits on the first stage\t\t\t\t##\n");
	printf("\t##\t7. As users completed the first stage, users will be taken to the next stage which the digits\t##\n");
	printf("\t##\t   will be incremented by 1.\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t8. There will be 20 stages to be completed, If users completed everything within 60s and not \t##\n");
	printf("\t##\t   did not lose all the chances given, Users will be given a title of Champion.\t\t\t\t##\n");
	printf("\t##\t9. Enjoy the Game!!\t\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t**************************************____________**************************************\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
	printf("\t##\t\t\t\t\t\t\t\t\t\t(Press 0 to go back)\t##\n");
	printf("\t##########################################################################################################\n");
	printf("\t##########################################################################################################\n");

		

}

//void Menu::m_Loadinstruction()
//{
//}

//void Menu::m_Start()
//{
//}

int Menu::m_Quit()
{
	char input2;
	std::cout << "Are you Sure?(Y/N)";
	cin >> input2;
	if (input2 == 'y' || input2 == 'Y') {
		isRunning=false;
		return 0;
	}
	else if (input2 == 'n' || input2 == 'N') {
		m_MenuScreen();
	}
}


Menu::~Menu()
{
}

