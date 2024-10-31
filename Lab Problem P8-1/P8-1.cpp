// File Name:     Lab Problem 8.1
// Author:        William Inkrott
// Date:          10/31/24
// Description:   Determine the number of vowels in an inputted character. 

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int countCharacter(string str);

int main(void)
{
	
}

int countCharacter(string input)
{
	int numOfVowels = 0;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'a' or input[i] == 'e' or input[i] == 'i' or input[i] == 'o' or input[i] == 'u' or input[i] == 'A' or input[i] == 'E' or input[i] == 'I' or input[i] == 'O' or input[i] == 'U')
		{
			numOfVowels++;
		}
	}
	return numOfVowels;
}