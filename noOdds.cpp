#include <cstdint>
#include <string.h>
#include <iostream>
#include <vector>
#include <stdio.h>

//https://edabit.com/challenge/7iT6DbY3GsHnLBPq4
//https://s1.gifyu.com/images/imaged56cc7e1b03c6e0d.png

std::vector<int> noOdds(std::vector<int> inputArray) {
    std::vector<int> toReturn;
    for (int x : inputArray) {
        if (x % 2 == 1) {
            continue;
        }
        toReturn.push_back(x);
    }
    return toReturn;
}

int main() {

}
