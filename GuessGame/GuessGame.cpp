//	************************************ PROGRAMM FOR A GUESS GAME ************************************

#include <iostream>
#include <time.h>
#include <random>
#include < stdlib.h >

using namespace std;
//CREATING GUESSGAME CLASS FOR MENU AND PLAY FUNCTIONALITY.
class GuessGame {
public:
	void menu();
	void play();
};
void GuessGame::menu()
{	//MENU DISPLAY
	cout << "\t\t\t--------------------------------------------------------------\n";
	cout << "\t\t\t\t\tA GUESS GAME BY MOHAMED ABDIKAFI\n";
	cout << "\t\t\t--------------------------------------------------------------\n";
	cout << "\t\t\t1) PLAY THE GAME\n";
	cout << "\t\t\t2) EXIT\n";
	cout << "\t\t\t--------------------------------------------------------------\n";
	//CHOOSE OPTION
	int choice;
	cout << "Please choose a number: ";
	cin >> choice;
	switch (choice) {
	case 1:
		system("CLS");
		play();
		break;
	case 2:
		exit(0);
	}
	
}

void GuessGame::play()
{
//GAME DISPLAY
	srand(time(0));
	int secretNum = rand() % 10;//CREATING RANDOM NUMBER
	
	int guessNum;
	//bool outOfChances = false;
	cout << "\t\t\t--------------------------------------------------------------\n";
	cout << "\t\t\t\t\tA GUESS GAME BY MOHAMED ABDIKAFI\n";
	cout << "\t\t\t--------------------------------------------------------------\n";
	cout << "\t\t\t--------------------------------------------------------------\n";
	//cout << "\n\n\t\t\t\t\t\tSECRET NUMBER is: " << secretNum << endl;
	cout << "\t\t\t\t\t\tGuess a Number: ";
	cin >> guessNum;
	//CHECKING IF GUESSNUM IS EQUAL TO SECRETNUM
	if (guessNum == secretNum)
	{
		cout << "\n\n\t\t\t\t\t\t*** YOU WIN! ***" << endl;
	} 
	else 
	{
		int k = 0;

		while (secretNum != guessNum && k <= 1) {
			cout << "\t\t\t\t\t\tGuess again : ";
			cin >> guessNum;

			k++;
		}
		// CHECKING IF OUT OF CHANCES
		if (k > 1 && secretNum!=guessNum) 
		{
			cout << "\n\n\t\t\t\t\t\t*** OUT OF CHANCES ***" << endl;
		}
		else if(k<=1 || k>1 && secretNum==guessNum)
		{
			cout << "\n\n\t\t\t\t\t\t*** YOU WIN! ***" << endl;
		}
		
	}
		//DISPLAYING THE SECRET NUMBER
	cout << "\n\n\t\t\t\t\t\tSECRET NUMBER WAS: " << secretNum << endl;

	//system("CLS");
	//menu();
	
}



int main() {

	GuessGame myGuessGame;
	myGuessGame.menu();
	system("pause");
}

