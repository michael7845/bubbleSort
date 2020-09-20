#include <string.h>
#include <iostream>
#include <stdio.h>

std::string uncensor(std::string inputString, std::string missingVowels) {
    int vowelIndex = 0;
    for (int i = 0; i < inputString.size(); i++) {
        if (!(inputString[i] == '*')) {
            continue;
        }
        //outOfBounds would be very easy to find but for now just leave it.
        inputString[i] = missingVowels[vowelIndex];
        vowelIndex++;
    }
    return inputString;
}

int main() {
    /*
    Someone has attempted to censor my strings by replacing every vowel with a *, l*k* th*s. Luckily, I've been able to find the vowels that were removed.
    Given a censored string and a string of the censored vowels, return the original uncensored string.

    Example:
        uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo") ➞ "Where did my vowels go?"
        uncensor("abcd", "") ➞ "abcd"
        uncensor("*PP*RC*S*", "UEAE") ➞ "UPPERCASE"
    https://edabit.com/challenge/Wv9ZeXyC32EMfRWGB
    */
    std::cout << uncensor("P*ppyc*ck", "oo") << std::endl;
    std::cout << uncensor("g**d d*y!", "ooa") << std::endl;
}
