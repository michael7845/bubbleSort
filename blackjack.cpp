#include <iostream>
#include <vector>
/*
48: 0
49: 1
50: 2
51: 3
52: 4
53: 5
54: 6
55: 7
56: 8
57: 9

https://edabit.com/challenge/98tt3RfDYBPCzpJi2
    Blackjack
        Create a function that takes an array of card numbers and checks if the sum of their value exceeds 21. If the sum exceeds 21, return true and if the sum is under or equal to 21, return false. Values o>

            2-10 are their value.
                J-K (face cards) count as 10.
                    Aces count either as 1 or 11 - play conservatively, so that if giving an ace a value of 11 causes you to lose and 1 allows you to win, then go with 1.
*/
bool overTwentyOne( std::vector<char> cards ) {
    int totalSum = 0;
    bool ace = false;
    for (char curCard : cards) {
        const int iCurCard = int(curCard);
        const bool isNumber = iCurCard <= 57 && 48 <= iCurCard;
        if (isNumber)
            totalSum += iCurCard - 48; //character offset for '0'.
        else {
            if (curCard == 'A')
                ace = true;
            else {
                totalSum += 10;
            }
        }
    }
    if ( ace ) {
        totalSum += totalSum <= 10 ? 11 : 1;
    }
}
