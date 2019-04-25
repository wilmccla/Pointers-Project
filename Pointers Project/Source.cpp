#include<iostream>
#include<string>
#include<Windows.h>
#include<thread>
#include<string>
using namespace std;

//Declaring Functions
void Welcome(); // Welcomes the player
void TriviaProtocol(); // Trivia for the player
void ShowLocation(string* hex); // Reveal location for treasure
void Type(const std::string& text); // Types letters one by one for flavor

//Global handle for changing text colors
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


int main()
{
	string Treasure = "Boat Loads Of Money!";
	string* Location = &Treasure;
	Welcome(); // Calling Welcome
	ShowLocation(Location); // Calling ShowLocation with the pointer Location as the parameter
	system("pause");
}

void Welcome() // Welcoming the player
{
	Type("Booting DataPad"); cout << "."; Sleep(800); cout << "."; Sleep(800); cout << ".\n"; Sleep(800);
	Type("Congratulations explorer, you have found the DataPad of the famous explorer John Smith.\n");
	Type("As a safety protocol, John installed a small trivia test to inhibit unintellectual individuals from getting his lost lost treasure.\n");
	Type("But don't worry, I'm sure you're very intellectual!\n");
	Type("Booting Trivia Protocol"); cout << "."; Sleep(800); cout << "."; Sleep(800); cout << ".\n\n"; Sleep(800);
	TriviaProtocol(); // Calling TriviaProtocol
	return;
}

void TriviaProtocol()
{
	//Variables
	int UserChoice;
	// Bunch of typing to the console
	Type("Welcome to the Trivia Protocol! "); Type("I'm your host,"); SetConsoleTextAttribute(hConsole, 14); Type(" Jerry!\n"); SetConsoleTextAttribute(hConsole, 15);
	Type("Please give a huge round of applause for our guest,"); SetConsoleTextAttribute(hConsole, 12); Type(" DataPad ERROR :name not found!\n"); SetConsoleTextAttribute(hConsole, 15);
	Type("Okay."); SetConsoleTextAttribute(hConsole, 12); Type(" ERROR"); SetConsoleTextAttribute(hConsole, 15); Type(", are you ready for your first question?"); Type(" Well, here it is!!!\n");
	Type("What year was the Earth completely obliterated?\n");
	cout << "1- 3054\n"; cout << "2- 3066\n"; cout << "3- REDACTED\n";
	cin >> UserChoice;
	Type("Wowza!!! "); SetConsoleTextAttribute(hConsole, 12); Type("ERROR"); SetConsoleTextAttribute(hConsole, 15); Type(", really knows their stuff!!!\n");
	Type("Now, for your next question...\n");
	Type("Who did President Sarah kill that resulted in the Last World War?\n");
	cout << "1- Sir Rodrick of Castle Nook\n" << "2- Supreme Leader Trump\n" << "3- Chancellor Goodwig\n";
	cin >> UserChoice;
	Type("A M A Z I N G! "); Type("You are on a roll!!"); Type(" You are unstoppable!!!"); Type(" You are a star!!!!\n");
	Type("This is your final question!\n");
	Type("How many moons orbit around Eibos?\n");
	cout << "1- 2\n" << "2- 3\n" << "3- Eibos has moons???\n";
	cin >> UserChoice;
	Type("U N B E L I E V E A B L E!"); SetConsoleTextAttribute(hConsole, 12); Type(" ERROR"); SetConsoleTextAttribute(hConsole, 15); Type(", has gotten ALL THREE QUESTIONS CORRECT\n");
	Type("This has been a WONDERFUL show everybody. I'm your host,"); SetConsoleTextAttribute(hConsole, 14); Type(" Jerry!"); SetConsoleTextAttribute(hConsole, 15); Type(" and this is me signing off!\n");
	Type("Ending Trivia Protocol"); cout << "."; Sleep(800); cout << "."; Sleep(800); cout << ".\n"; Sleep(800);
	return;
}

void ShowLocation(string* hex)
{
	//More typing to the console
	Type("Congratulations explorer. "); Type("You managed to pass the Trivia that blocked you from accessing the location of John's treasure.\n");
	Type("We will uphold our word and reveal the location of the treasure for you.\n");
	Type("John's famous treasure is located in sector "); cout << hex << endl;
	Type("Beware of the Booby Traps!");
	return;
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
