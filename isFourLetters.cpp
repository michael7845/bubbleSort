#include <cstdint>
#include <string.h>
#include <iostream>
#include <vector>
#include <stdio.h>

//isFourLetters -> https://edabit.com/challenge/3HEY2ZfqMXyZsA87i
/*
    Return the Four Letter Strings
    Create a function that takes a vector (array) of strings. Return all words in the vector (array) that are exactly four letters.

    Examples:
        isFourLetters(["Tomato", "Potato", "Pair"]) ➞ ["Pair"]
        isFourLetters(["Kangaroo", "Bear", "Fox"]) ➞ ["Bear"]
        isFourLetters(["Ryan", "Kieran", "Jason", "Matt"]) ➞ ["Ryan", "Matt"]
    Notes:
        You can expect valid strings for all test cases.
*/

std::vector<std::string> isFourLetters(std::vector<std::string> inputArray) {
	std::vector<std::string> toReturn = {};
    for (std::string item : inputArray) {
        if (item.size() == 4) {
            toReturn.push_back(item);
        }
    }
    return toReturn;
}

int main() {
    std::cout << isFourLetters( {"whom", "who", "fuck", "fuckyou", "fyew"} )[1] << std::endl;
    ////std::cout << isFourLetters( {} ) << std::endl;
   // std::cout << isFourLetters( {} ) << std::endl;
   /// std::cout << isFourLetters( {} ) << std::endl;
    //std::cout << isFourLetters( {} ) << std::endl;
}
