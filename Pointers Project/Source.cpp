#include<iostream>
#include<string>
#include<Windows.h>
#include<thread>
using namespace std;

//Declaring Functions
void Welcome(); // Welcomes the player
void TriviaProtocol(); // Trivia for the player
void Type(const std::string& text); // Types letters one by one for flavor

//Global handle for changing text colors
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


int main()
{
	Welcome(); // Calling Welcome
}

void Welcome() // Welcoming the player
{
	Type("Booting DataPad"); cout << "."; Sleep(800); cout << "."; Sleep(800); cout << ".\n"; Sleep(800);
	Type("Congratulations explorer, you have found the DataPad of the famous explorer John Smith.\n");
	Type("As a safety protocol, John installed a small trivia test to inhibit unintellectual individuals from getting his lost lost treasure.\n");
	Type("But don't worry, I'm sure you're very intellectual!\n");
	Type("Booting Trivia Protocol"); cout << "."; Sleep(800); cout << "."; Sleep(800); cout << ".\n\n"; Sleep(800);
	TriviaProtocol(); // Calling TriviaProtocol
	system("pause");
	return;
}

void TriviaProtocol()
{
	//Variables
	int UserChoice;

	SetConsoleTextAttribute(hConsole, 10);
	Type("Welcome to the Trivia Protocol! "); Type("I'm your host,"); SetConsoleTextAttribute(hConsole, 14); Type("Jerry!");
	Type("Please give a huge round of applause for our guest,"); SetConsoleTextAttribute(hConsole, 12); Type(" ERROR !\n"); SetConsoleTextAttribute(hConsole, 11);
	Type("Okay."); Type("ERROR , are you ready for your first question?"); Type("Well, here it is!!!\n");
	Type("What year was the Earth completely obliterated?\n");
	cout << "1- 3054\n"; cout << "2- 3066\n"; cout << "3- REDACTED";
	cin >> UserChoice;
	Type("Wowza!!!"); Type("ERROR really knows their stuff!!!");
	system("pause");
}

void Type(const std::string& text) // Type Text function, renamed to Type for easier/faster coding
{
	// loop through each character in the text
	for (std::size_t i = 0; i < text.size(); ++i)
	{
		// output one character
		// flush to make sure the output is not delayed
		std::cout << text[i] << std::flush;

		// sleep 60 milliseconds
		std::this_thread::sleep_for(std::chrono::milliseconds(30));
	}
	Sleep(800);
}
