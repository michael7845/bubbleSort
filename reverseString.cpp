/*
https://edabit.com/challenge/HXGx9oXukEgsFK6PH
  Recursion: Reverse a String
    Write a function that reverses a string. Make your function recursive.
*/

#include <iostream>

std::string reverse(std::string str) {
        std::string output = str;
        const int stringLength = str.length();
        for (int i = 0; i < stringLength; i++)
                output[i] = str[stringLength - i - 1];

        return output;
}

int main ( ) {
        std::cout << reverse("world") << std::endl;
}
