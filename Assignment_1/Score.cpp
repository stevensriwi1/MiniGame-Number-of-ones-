#include "Score.h"
#include "stdio.h"
#include <iostream>


using namespace std;
Score::Score()
{
}


Score::~Score()
{
}

void Score::m_win(unsigned long time1, int score, int life)
{
	Menu Game;
	while (Game.isRunning) //if it is "True" then whatever condition it will always keep running, if it is just a random condition, it may be true of false
	{
		totalScore = score + life-1;// this is to add the number of stage passed and life chances left anf minus it to 1, because the intial life is 4 because of the for loop
		printf("\t##########################################################################################################\n");
		printf("\t##########################################################################################################\n");
		printf("\t##\t\t     _____           _                  ___    _____ _____ _____ _____     \t\t##\n");
		printf("\t##\t\t    |   | |_ _ _____| |_ ___ ___    ___|  _|  |     |   | |   __|   __|    \t\t##\n");
		printf("\t##\t\t    | | | | | |     | . | -_|  _|  | . |  _|  |  |  | | | |   __|__   |    \t\t##\n");
		printf("\t##\t\t    |_|___|___|_|_|_|___|___|_|    |___|_|    |_____|_|___|_____|_____|    \t\t##\n");
		printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t   \t##\n");
		printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t   \t##\n");
		printf("\t##\t\t######  ##     ##    ###    ##     ## ########  ####  #######  ##    ##    \t\t##\n");
		printf("\t##\t\t##   ## ##     ##   ## ##   ###   ### ##     ##  ##  ##     ## ###   ##    \t\t##\n");
		printf("\t##\t\t##      ##     ##  ##   ##  #### #### ##     ##  ##  ##     ## ####  ##    \t\t##\n");
		printf("\t##\t\t##      ######### ##     ## ## ### ## ########   ##  ##     ## ## ## ##    \t\t##\n");
		printf("\t##\t\t##      ##     ## ######### ##     ## ##         ##  ##     ## ##  ####    \t\t##\n");
		printf("\t##\t\t##   ## ##     ## ##     ## ##     ## ##         ##  ##     ## ##   ###    \t\t##\n");
		printf("\t##\t\t######  ##     ## ##     ## ##     ## ##        ####  #######  ##    ##    \t\t##\n");
		printf("\t##\t\t\t\t\t\t\t\t\t\t\t   \t\t##\n");
		printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t   \t##\n");
		printf("\t##\t\t\t\t\tYour Score is %d out of 13\t\t\t\t\t##\n", totalScore); //calling the stages numbers
		printf("\t##\t\t\t\t\t\t\t\t\t\t\t   \t\t##\n");
		printf("\t##########################################################################################################\n");
		printf("\t##########################################################################################################\n");
		cout <<"Time was: " << time1 << "s" << endl; //calling and printing the time we have played
		Game.isRunning = false;
		break;
	}
}

void Score::m_lose(unsigned long time1, int score, int life)
{
	Menu Game;
	while (Game.isRunning) //if it is "True" then whatever condition it will always keep running, if it is just a random condition, it may be true of false
	{
		totalScore = score + life - 1;
		//Number t;
		printf("\t##########################################################################################################\n");
		printf("\t##########################################################################################################\n");
		printf("\t##\t\t     _____           _                  ___    _____ _____ _____ _____  \t\t##\n");
		printf("\t##\t\t    |   | |_ _ _____| |_ ___ ___    ___|  _|  |     |   | |   __|   __| \t\t##\n");
		printf("\t##\t\t    | | | | | |     | . | -_|  _|  | . |  _|  |  |  | | | |   __|__   | \t\t##\n");
		printf("\t##\t\t    |_|___|___|_|_|_|___|___|_|    |___|_|    |_____|_|___|_____|_____| \t\t##\n");
		printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
		printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
		printf("\t##\t\t######      ###    ##     ## ########     #######  ##     ## ######## ######## \t\t##\n");
		printf("\t##\t\t##   ##    ## ##   ###   ### ##          ##     ## ##     ## ##       ##     ##\t\t##\n");
		printf("\t##\t\t##        ##   ##  #### #### ##          ##     ## ##     ## ##       ##     ##\t\t##\n");
		printf("\t##\t\t##  #### ##     ## ## ### ## ######      ##     ## ##     ## ######   ######## \t\t##\n");
		printf("\t##\t\t##   ##  ######### ##     ## ##          ##     ##  ##   ##  ##       ##   ##  \t\t##\n");
		printf("\t##\t\t##   ##  ##     ## ##     ## ##          ##     ##   ## ##   ##       ##    ## \t\t##\n");
		printf("\t##\t\t######   ##     ## ##     ## ########     #######     ###    ######## ##     ##\t\t##\n");
		printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
		printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
		printf("\t##\t\t\t\t\tYour Score is %d out of 13\t\t\t\t\t##\n", totalScore); //calling the stages numbers
		printf("\t##\t\t\t\t\t\t\t\t\t\t\t\t\t##\n");
		printf("\t##########################################################################################################\n");
		printf("\t##########################################################################################################\n");
		cout << "Time was: " << time1 << "s" << endl; //calling and printing the time we have played
		Game.isRunning = false;
		break;
	}	
}
