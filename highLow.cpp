#include <cstdint>
#include <string.h>
#include <iostream>
#include <vector>
#include <stdio.h>

//Return the Highest and Lowest Numbers -> https://edabit.com/challenge/NGD8wv2rKoFDKzmEu
/*
    Create a function that accepts a string of space separated numbers and returns the highest and lowest number (as a string).

    Examples:
        highLow("1 2 3 4 5") ➞ "5 1"
        highLow("1 2 -3 4 5") ➞ "5 -3"
        highLow("1 9 3 4 -5") ➞ "9 -5"
        highLow("13") ➞ "13 13"

    Notes:
        All numbers are valid Int32, no need to validate them.
        There will always be at least one number in the input string.
        Output string must be two numbers separated by a single space, and highest number is first.
*/

std::vector<std::string> splitString(std::string string, const char splitter) {
    std::vector<std::string> split = { "" };
    for (int i = 0; i < string.size(); i++) {
        if (string[i] == splitter) {
            split.push_back("");
            continue;
        }
        split[split.size() - 1] += string[i];
    }
    return split;
}

std::string highLow(std::string str) {
	std::vector<std::string> integerStrings = splitString(str, ' ');
    int highestInteger = -INT16_MAX;
    int lowestInteger = INT16_MAX;
    for (int i = 0; i < integerStrings.size(); i++) {
        const int integer = std::stoi(integerStrings[i]);
        if (integer > highestInteger) {
            highestInteger = integer;
        }
        //else if wouldn't pass test cases.
        if (integer < lowestInteger) {
            lowestInteger = integer;
        }
    }
    //format string
    std::string output = std::to_string(highestInteger) + " " + std::to_string(lowestInteger);
    return output;
}

int main() {
    std::cout << highLow("1 2 3 4 5 6 7 8 9 10 -40") << std::endl;
}
