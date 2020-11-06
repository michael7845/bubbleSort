#include <iostream>
#include <vector>

bool simonSays(std::vector<int> arr1, std::vector<int> arr2) {
	/*
	https://edabit.com/challenge/GJT6RyivEHh3onNq4
		Simon Says
			Create a function that takes in two arrays and returns true if the second array follows the first array by one element, and false otherwise. In other words, determine if the second array is the first array shifted to the right by 1.

	Both input arrays will be of the same length, and will have a minimum length of 2.
	The values of the 0-indexed element in the second list and the n-1th indexed element in 
	the first list do not matter.
	*/

	//arr2 = arr1 shifted to the right by one.

	for (int i = 0; i < arr1.size() - 1; i++) {
		if (arr1[i] != arr2[i + 1]) {
//			std::cout << "a2: " << i + 1 << " " << arr2[i + 1] << " => ";
//			std::cout << arr1[i] << "!=" << arr2[i + 1] << std::endl;
			return false;
		}
	}

	return true;
}

int main() {
	std::cout << simonSays( { 1, 2, 3, 4, 5, 6 }, { 0, 2, 2, 3, 4, 5 } ) << std::endl;
	return 0;
}
