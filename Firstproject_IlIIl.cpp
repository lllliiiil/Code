﻿#include <iostream>
#include <string>

int main()

{


	int result, randomNum2, enteredValue, randomNum1, score = 0;

	do
	{
		std::cout << "[----------------------------------------------------------------------]\n";
		std::cout << "This is a program that will challenge your multiplication knowledge\n";
		std::cout << "There 3 different levels of difficulty:\n";
		std::cout << " + Level 1: Easy one-digit multiplications     | 1SP  [ 5   *   5 ]\n";
		std::cout << " + Level 2: Two-digits on one-digit mult-ation | 2SP  [ 15  *   5 ]\n";
		std::cout << " + Level 3: Two-digigt multiplications         | 3SP  [ 15  *  55 ]\n";
		std::cout << "Harder the level is more score point you get\n";
		std::cout << "\nMake your level choice: ";
		std::cin >> enteredValue;

		switch (enteredValue)
		{
		case 1:
		{
			do {
				srand(time(NULL));
				int randomNum1 = rand() % 10, randomNum2 = rand() % 10;

				std::cout << "Find result of multiplication of this two numbers:\n";
				std::cout << "\n  [ " << randomNum1 << " * " << randomNum2 << " ]\n\n Your Value is: ";
				std::cin >> enteredValue;

				result = randomNum1 * randomNum2;
				score += 1;
			} while (enteredValue == result); std::cout << "\n Score is " << score << "\n[----------------------------------------------------------------------]\n"; break;
		}
		case 2:
		{
			do {
				srand(time(NULL));
				int randomNum1 = rand() % 90, randomNum2 = rand() % 10;

				std::cout << "Find result of multiplication of this two numbers:\n";
				std::cout << "\n  [ " << randomNum1 << " * " << randomNum2 << " ]\n\n Your Value is: ";
				std::cin >> enteredValue;

				result = randomNum1 * randomNum2;
				score += 1;
			} while (enteredValue == result); std::cout << "\n Score is " << score << "\n[----------------------------------------------------------------------]\n"; break;
		}
		case 3:
		{
			do {
				srand(time(NULL));
				int randomNum1 = rand() % 90, randomNum2 = rand() % 90;

				std::cout << "Find result of multiplication of this two numbers:\n";
				std::cout << "\n  [ " << randomNum1 << " * " << randomNum2 << " ]\n\n Your Value is: ";
				std::cin >> enteredValue;

				result = randomNum1 * randomNum2;
				score += 1;
			} while (enteredValue == result); std::cout << "\n Score is " << score << "\n[----------------------------------------------------------------------]\n"; break;
		}
		default:
			break;
		}

		return 0;

	} while (enteredValue != -1);
	return 0;
	
		unsigned int password, guessedNum = 0, symbolsAmount, symbol;

	std::cin >> password;

	std::string everyNuminPswd = std::to_string(password);

	symbolsAmount = everyNuminPswd.size();

	for (size_t i = 0; i < symbolsAmount; i++)
	{
		symbol = password % (int)pow(10, i+1); std::cout << symbol << " ";
	}

	while (guessedNum != password)
	{
		guessedNum++;
	}

	std::cout << "  " << guessedNum;
} 


#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>

int main()

{
	_setmode(_fileno(stdout), _O_U16TEXT);

	std::wcout << L"¶ ¶ ¶ ¶ ¶ ¶ ¶";
} 
