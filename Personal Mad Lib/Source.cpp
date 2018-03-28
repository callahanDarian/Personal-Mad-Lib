/*
MadLibs
Date : 3.27.18
Author : Darian Callahan
*/

#include <iostream>
#include <string>

int main()
{
	/*
	Strings
	*/
	std::string color;
	std::string wordEst;
	std::string bodyPartPlural;
	std::string animal;
	std::string noun;
	std::string pluralNoun;
	std::string mainAnimal;
	std::string bodyPartPluralAgain;
	std::string secondNoun;

	/*
	Numbers
	*/
	int firstNumber;
	int secondNumber;
	int firstModSecond;
	int firstTimesSecond;

	/*
	User Input
	*/
	std::cout << "Mad Libs \n\n";
	std::cout << "Enter a color \n > ";
	std::cin >> color;
	std::cout << std::endl;
	std::cout << " Enter a word ending in 'est' \n > ";
	std::cin >> wordEst;
	std::cout << std::endl;
	std::cout << "Enter a plural body part \n > ";
	std::cin >> bodyPartPlural;
	std::cout << std::endl;
	std::cout << "Enter an animal \n > ";
	std::cin >> animal;
	std::cout << std::endl;
	std::cout << "Enter a noun \n > ";
	std::cin >> noun;
	std::cout << std::endl;
	std::cout << "Enter a plural noun \n > ";
	std::cin >> pluralNoun;
	std::cout << std::endl;
	std::cout << "Enter a number \n > ";
	std::cin >> firstNumber;
	std::cout << std::endl;
	std::cout << "Enter another number \n > ";
	std::cin >> secondNumber;
	std::cout << std::endl;
	std::cout << "Enter another animal \n > ";
	std::cin >> mainAnimal;
	std::cout << std::endl;
	std::cout << "Enter another plural body part \n > ";
	std::cin >> bodyPartPluralAgain;
	std::cout << std::endl;
	std::cout << "Enter another noun \n > ";
	std::cin >> secondNoun;
	std::cout << std::endl;
	std::cout << "\n - Creating Mad Lib - \n \n . \n . \n" << std::endl;

	/*
	Math
	*/
	firstModSecond = firstNumber % secondNumber;
	firstTimesSecond = firstNumber * secondNumber;

	/*
	Mad Lib
	*/
	std::cout << "The " << color << " " << mainAnimal << " is the " << wordEst << " " << mainAnimal << " of all existing " << mainAnimal << ". It has " << firstModSecond;
	std::cout << bodyPartPlural << ", " << firstTimesSecond << " " << bodyPartPluralAgain << ", and a pet " << animal << " shaped like a  " << noun << " mixed with a " << secondNoun << ",";
	std::cout  << "and it loves to eat " << pluralNoun << ", although it will feast on anything. \n \n    The End." << std::endl;
	std::cout << std::endl;

	system("pause");
	return 0;
}