#include <iostream>
#include <vector>

int main() {

	//Part 1

	int arr[5] = { 1,2,3,4,5 };

	std::cout << "Original Array: ";
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	arr[1] = 25; //modify elements
	arr[3] = 45;

	std::cout << "Modified Array: ";
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	//Part 2

	std::vector<int> vec = { 10, 20, 30 };

	std::cout << "Original Vector: ";
	for (int val : vec) {
		std::cout << val << " ";
	}
	std::cout << std::endl;

	vec.push_back(40);							//modify vector
	std::cout << "After push_back(40): ";
	for (int val : vec) {
		std::cout << val << " ";
	}
	std::cout << std::endl;

	vec.pop_back();
	std::cout << "After pop_back(): ";
	for (int val : vec) {
		std::cout << val << " ";
	}
	std::cout << std::endl;

	std::cout << "Vector Size: " << vec.size() << std::endl;

	return 0;
}