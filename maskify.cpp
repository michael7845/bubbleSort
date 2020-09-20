#include <string>
#include <iostream>

std::string maskify(std::string str) {
    if (str.size() <= 3) {
        return str;
    }
    std::string output(str.size() - 4, '#');
    for (int i = str.size() - 4; i < str.size(); i++) {
        output += str[i];
    }
    return output;
}

int main() {
    /*

    Usually when you sign up for an account to buy something, your credit card number, phone number or answer to a secret question is partially obscured in some way. Since someone could look over your shoulder, you don't want that shown on your screen. Hence, the website masks these strings.
    Your task is to create a function that takes a string, transforms all but the last four characters into "#" and returns the new masked string.
    https://edabit.com/challenge/2MAr9P4TTGooXS8Xa
    .
    */
    std::cout << maskify("mwuhaha") << std::endl;
    std::cin.ignore();
}
