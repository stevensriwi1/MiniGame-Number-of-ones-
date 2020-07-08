#include <iostream>
#include <stdio.h>
#include <fstream>
#include <ctime>
#include <string>
#include "Menu.h"
#include "Number.h"
#include "Score.h"

using namespace std;
//void Save(Score& Game)
//{
//	fstream file;
//	file.open("save.txt", ios::out | ios::app);//ios::app keeps adding text to your txt file
//	file.write((char*)&Game, sizeof(Game)); // this writes into the txt file
//	file.close();
//}
//
//void Load()
//{
//	fstream file;
//	string s;//ios::app keeps adding text to your txt file
//	file.open("save.txt", ios::in | ios::binary);
//	Score Game;
//	file.read((char*)&Game, sizeof(Game));//this command will let you read from the file
//	file.close();
//}


int main() {
	/*
	int i = 0;
	int randomNumber;
	srand(time(0));


	for (i = 0; i < 100; i++)
	{
		randomNumber = rand() % 10 + 1;
		cout << randomNumber << "\t";
	}
	cout << endl << endl;
*/

	
	Menu Game;
	Game.m_MenuScreen();

	int input = 0;
	int input1 = 0;
	char input2;
	char input3;
	while (Game.isRunning) //if it is "True" then whatever condition it will always keep running, if it is just a random condition, it may be true of false
	{
		cin >> input;

		switch (input)
		{
		case 1: //if case 1, go to play screen
			Game.m_PlayScreen();
			Game.isRunning = false;
			break;
		case 2: //if case 2, go to instruction screen
			Game.m_Showinstruction();
			cin >> input1;
			if (input1 == 0) {

				Game.m_MenuScreen();
			}
			else
			{
				std::cout << "Error please try again" << std::endl;
			}
			break;
		case 3: //if case 3, go to quit program
			Game.m_Quit();
			break;
		default:
			cout << "Error" << endl;
			break;
		}

		
	}
	/*cout << "Hello" << endl;
	system("pause");*/ //just in case we need to check whether the program is closing properly
	return 0;
}