#include <iostream>
#include <vector>
#include <stdio.h>

std::vector<int> sortArray(std::vector<int> unsortedArray, const bool direction = false) {
        std::vector<int> sortedArray = unsortedArray;
        bool arraySorted = false;
        while (!arraySorted) {
                arraySorted = true;
                for (int i = 0; i < sortedArray.size() - 1 /* -1 because we will get OutOfBounds if we don't (I use i+1 to seek next item). */; i++) {
                        if (direction ? sortedArray[i] > sortedArray[i+1] : sortedArray[i] < sortedArray[i+1]) {
                                //swap the items
                                int cache = sortedArray[i];
                                sortedArray[i] = sortedArray[i+1];
                                sortedArray[i+1] = cache;
                                //if I had to change anything then it wasn't sorted!
                                arraySorted = false;
                        }
                }
        }
        return sortedArray;
}

int main() {
        std::vector<int> unsorted = { 0, 40, 120, 15, 30, 20, 50, 49, 50, 20, 10, 410, 410, 50, 125, 26, 6, 36, 36, 6 };
        std::vector<int> sorted = sortArray(unsorted);
        std::cout << "{ ";
        for (int i = 0; i < sorted.size(); i++) {
                std::cout << sorted[i] << (i != sorted.size() - 1 ? ", " : "");
        }
        std::cout << " };" << std::endl;
}
