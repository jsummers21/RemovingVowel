/*
Name: Jared Summers
Program: Vowel Remover
Desc: Removes vowels from a word
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


	int main() {

		char *strWord;
		strWord = new char[1];

		cout << "Type out a word:" << endl;
		cin >> strWord;

		for (int i = 0; strWord[i] != '\0'; i++) {

			if (strWord[i] == 'a' || strWord[i] == 'e' || strWord[i] == 'i' 
				|| strWord[i] == 'o' || strWord[i] == 'u' || strWord[i] == 'A' 
				|| strWord[i] == 'E' || strWord[i] == 'I' || strWord[i] == 'O' 
				|| strWord[i] == 'U') {

				strWord[i] = ' ';
			}
		}

		cout << strWord;

		return 0;
	}
