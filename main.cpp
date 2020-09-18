#include <iostream>
#include <vector>
#include <stdio.h>

std::vector<int> sortArray(std::vector<int> unsortedArray) {
        std::vector<int> sortedArray = unsortedArray;
        bool arraySorted = false;
        while (!arraySorted) {
                arraySorted = true;
                for (int i = 0; i < sortedArray.size() - 1 /* -1 because we will get OutOfB>
                        if (sortedArray[i] > sortedArray[i+1]) {
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
        std::vector<int> unsorted = { 0, 40, 120, 15, 30, 20, 50, 49, 50, 20, 10, 410, 410,>        std::vector<int> sorted = sortArray(unsorted);
        std::cout << "{ ";
        for (int i = 0; i < sorted.size(); i++) {
                std::cout << sorted[i] << (i != sorted.size() - 1 ? ", " : "");
        }
        std::cout << " };" << std::endl;
}
