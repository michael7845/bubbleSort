#include <cstdint>
#include <string.h>
#include <iostream>
#include <vector>
#include <stdio.h>

//Repeating Letters -> https://edabit.com/challenge/WmCeqpu5miZAtLk2z

/*
    Create a function that takes a string and returns a string in which each character is repeated once.

    Examples:
        doubleChar("String") ➞ "SSttrriinngg"
        doubleChar("Hello World!") ➞ "HHeelllloo  WWoorrlldd!!"
        doubleChar("1234!_ ") ➞ "11223344!!__  "

    Notes:
        All test cases contain valid strings. Don't worry about spaces, special characters or numbers. They're all considered valid characters.
*/

std::string doubleChar(std::string str) {
	std::string toReturn = "";
    for (int i = 0; i < str.size(); i++) {
        toReturn.push_back(str[i]);
        toReturn.push_back(str[i]);
    }
    return toReturn;
}

int main() {
    std::cout << doubleChar("String") << std::endl;
}
