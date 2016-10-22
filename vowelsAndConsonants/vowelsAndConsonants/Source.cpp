//Dillon Driscoll
//October 22, 2016
// Vowels and Consonants


#include <iostream>
#include <iomanip>
int vowelCounter(char *ptr);
int consonantCounter(char *ptr);

using namespace std;

int main() {
	
	//Variables
	char choice;  //Menu choice
	const int size = 80;
	char userString[size];

	//Get user's string
	cout << "Enter a string less than or equal to " << (size - 1) << " characters: ";
	cin.getline(userString, size);
	//Make a pointer to the user's string
	char *strPtr = userString;

	

	do {
		//Display the Menu.
		cout << "\n\t\t Vowels and Consonants Menu\n"
			<< "\n\t\t Your string is \"" << userString << "\"" << "\n\n"
			<< "A. Count the number of vowels in the string.\n"
			<< "B. Count the number of consonants in the string.\n"
			<< "C. Count both the vowels and consonants in the string.\n"
			<< "D. Enter a new string.\n"
			<< "E. Exit the program. \n\n"
			<< "Enter your choice: ";
		cin >> choice;
		while (!isalpha(choice)) {    //Input validation for choice
			cout << "Please enter a valid input: ";
			cin >> choice;

		}

		
			//Respond to the user's menu selection
			switch (choice) {
			case 'A':
			case 'a':
				cout << "The number of vowels in this string is: " << vowelCounter(strPtr) << endl;
				system("pause");
				break;
			case 'B':
			case 'b':
				cout << "The number of consonants in this string is: " << consonantCounter(strPtr) << endl;
				system("pause");
				break;
			case 'C':
			case 'c':
				cout << "The number of consonants and vowels in this string are: " << consonantCounter(strPtr) + vowelCounter(strPtr) << endl;
				system("pause");
				break;
			case 'D':
			case 'd':
				char newstring[80];
				cout << "Enter your new string less than or equal to " << (size - 1) << " characters: ";
				cin.ignore(1000, '\n');
				cin.getline(userString, 80);
				system("pause");
				break;
			
			}
		
	} while (choice != 'e' && choice != 'E');

	system("pause");
	return 0;
}

int vowelCounter(char *ptr) {   //Function to count vowels in userString
	int vowelCounter = 0;
	char vowels[10] = { 'a','e','i','o','u',
		'A','E','I','O','U' };
	for (int i = 0; i < 80; i++)
	{
		if (*(ptr + i) == '\0') {
			i == 80;
		}
		else {
			for (int h = 0; h < 10; h++)
			{
				if (*(ptr + i) == vowels[h]) {
					vowelCounter++;
				}
			}
		}
		
	}




	return vowelCounter;
}



int consonantCounter(char *ptr) {  //Function to count consonants in userString
	char consonants[42] = { 'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z',
		'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z' };
	int consonantCount = 0;
	for (int i = 0; i < 80; i++)
	{
		if (*(ptr + i) == '\0') {
			i == 80;
		}
		else {
			for (int h = 0; h < 42; h++)
			{
				if (*(ptr + i) == consonants[h]) {
					consonantCount++;
				}
			}
		}
	}
	return consonantCount;
}