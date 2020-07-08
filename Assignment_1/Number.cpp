#include "Number.h"
#include <iostream>
#include "stdio.h"
#include "Score.h"

using namespace std;
Number::Number()
{
	//initiallizing the numbers to 0
	randNum[19] = 0;
	//the game starts the numbers at 4 digit
	stageCounter = 4;
	Numbers = 0;
	life = 4; //initialize the life chanceto 4
}


Number::~Number()
{
}

void Number::m_rand()
{
	Score *Game;
	Number t; //initialize a new attribute t for time
	t.start(); //start the clock
	cout << "\t\t\t\t\t\t  You Got 60s to Finish!" << endl;
	cout << "\t\t\t\t\t\t   NO LETTERS ALLOWED!" << endl;
	cout << endl;
	while (isRunning) //if it is "True" then whatever condition it will always keep running, if it is just a random condition, it may be true of false
	{
		for (j = 1; j < 11; j++) 
		{
			printf("\t\t\t\t\t\t\tStage %d   \t\t\t\t\t\t", j);
			cout <<"Time:"<< t.elapsedTime() << "s\t" << endl;//prints out the current seconds ever since it is executed
			//if the current seconds passed the timer limit, then it will go to game over
			if (t.elapsedTime() >= seconds) {
				system("cls");
				Game = new Score();
				Game->m_lose(time1, score, life);//this is to call the m_lose function
				isRunning = false;
				break;
			}
			else {
			}
			// FOR iterate through the stageCounter
			for (int i = 0; i < stageCounter; i++) {
				//This is to set a random number to each digit
				randNum[i] = rand() % (9) + (1);

			}
			printf("\t\t\t\t\t\t\t");
			for (int k = 0; k < stageCounter; k++) {

				cout << randNum[k];
				// add the randnum to the numbers and assign it in numbers
				Numbers = Numbers + randNum[k];
			}
			printf("    \t\t\t\t\t\t\n");
			//std::cout << "\t\tAnswer: " << Numbers;
			//this is to access the number of ones from the additions
			ones = Numbers % 10;
			//std::cout << "  " << ones << std::endl;
			cout << "\t\tWhat is the answer: ";
			cin >> answer;
			
			//call function life
			m_life();
			//this will go to the lose screen
			if (life == 1) {
				system("cls");
				Game = new Score();
				Game->m_lose(time1, score,life);//this is to call the m_lose function
				isRunning = false;
				break;
			}
			else {
				cout << "\t\tCorrect" << std::endl;
				cout << "      \t\t\t\t\t\t\t\t\t\t" << std::endl;
				//Set Everything back to 0 to start fresh
				Numbers = 0;
				ones = 0;
				
				time1 = t.elapsedTime();//this is to assign time1 to the t.elapsed time
				score = j;//this is to assign the stage number to the score
				// increment stage counter by 1
				stageCounter = stageCounter + 1;
			}
			//if the stage has reach level 10 then break the for loop
			if (j == 10) {
				break;
			}
		}
		//if j=10 then it goes to a win screen
		if (j == 10) {
			system("cls");
			Game = new Score();
			Game->m_win(time1,score,life);//this is to call the m_win function
			isRunning = false;
			break;
		}
		
	}
}

void Number::m_life()
{
	//while loop if the answer is true, you can go to other stage, if false then stay
	while (answer != ones) {
		
		if (life != 1) { //if the life is not equal to 0 keep on going
				life = life - 1; 
				cout << "Life: " << life << endl;
			}
		else {
			cout << "YOU LOSE!!!" << endl;
			break;
			}
		cout << "\t\tTry again" << endl;
		cout << "\t\tWhat is the answer: ";
		cin >> answer;
	
		
	}
}

void Number::start()
{
	begTime = clock();//this is to bbegin the clock
}

unsigned long Number::elapsedTime()
{
	return ((unsigned long)clock() - begTime) / CLOCKS_PER_SEC; //return the clock minus the beginning time
}

bool Number::isTimeout(unsigned long seconds)
{
	return seconds >= elapsedTime(); //return the time when it is out
}

//void Number::m_time()
//{
//	int input;
//	unsigned long seconds = 10;
//	Number t;
//	t.start();
//	cout << "timer started . . ." << endl;
//	cout << t.elapsedTime() << endl;
//	while (true) {
//		cout << t.elapsedTime();
//		cout << endl;
//		cin >> input;
//		system("cls");
//		if (t.elapsedTime() >= seconds) {
//			break;
//		}
//		else {
//		}
//	}
//	cout << seconds << " seconds elapsed" << endl;
//
//}
