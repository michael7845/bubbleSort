#include <cstdint>
#include <string.h>
#include <iostream>
#include <vector>
#include <stdio.h>

//isSafeBridge -> https://edabit.com/challenge/udrQ2ckXP9cXNXiSk
/*
    Broken Bridge
        Create a function which validates whether a bridge is safe to walk on (i.e. has no gaps in it to fall through).

    Examples:
        isSafeBridge("####") ➞ true
        isSafeBridge("## ####") ➞ false
        isSafeBridge("#") ➞ true

    Notes:
        You can expect the bridge's ends connecting it to its surrounding.
*/

bool isSafeBridge(std::string s) {
	for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            return false;
        }
    }
    return true;
}
