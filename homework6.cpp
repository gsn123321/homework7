#include <iostream>

int main()
{
	//int arr[4] = { 123456 , 789012 , 345678 , 901234 };
	//int arr2[4] = { 246802 , 135791 , 975319 , 864208 };

	////menu
	//while (true) {
	//	int action;

	//	std::cout << "1 - Show array" << '\n';
	//	std::cout << "2 - Show array2" << '\n';
	//	std::cout << "3 - Sort array" << '\n';
	//	std::cout << "4 - Sort array2" << '\n';
	//	std::cout << "5 - Exit" << '\n';

	//	std::cout << "Enter action: ";
	//	std::cin >> action;

	//	switch (action) {
	//	case 1:
	//		for (int i = 0; i < 4; ++i) {
	//			std::cout << arr[i] << " ";
	//		}
	//		std::cout << '\n';
	//	case 2:
	//		for (int i = 0; i < 4; ++i) {
	//			std::cout << arr2[i] << " ";
	//		}
	//		std::cout << '\n';
	//	case 3:
	//		for (int i = 0; i < 4; ++i) {
	//			for (int j = i + 1; j < 4; ++j) {
	//				if (arr[i] > arr[j]) {
	//					int temp = arr[i];
	//					arr[i] = arr[j];
	//					arr[j] = temp;
	//				}
	//			}
	//		}
	//	case 4:
	//		for (int i = 0; i < 4; ++i) {
	//			for (int j = i + 1; j < 4; ++j) {
	//				if (arr2[i] > arr2[j]) {
	//					int temp = arr2[i];
	//					arr2[i] = arr2[j];
	//					arr2[j] = temp;
	//				}
	//			}
	//		}
	//	case 5:
	//		return 0;
	//	}
	//	
	//}

	// 2

	//const int SIZE = 5;
	//int arr[SIZE] = { 5, 3, 8, 1, 4 };

	//for (int i = 0; i < SIZE; ++i) {
	//	int count = 0;
	//	for (int j = SIZE - 1; j > i; --j) {
	//		if (arr[j - 1] > arr[j]) {
	//			int temp = arr[j - 1];
	//			arr[j - 1] = arr[j];
	//			arr[j] = temp;

	//			++count;
	//		}
	//	}

	//	if (count == 0) {
	//		break;
	//	}
	//}

	//for (int i = 0; i < SIZE; ++i) {
	//	std::cout << arr[i] << " ";
	//}


	//3

	const int SIZE = 5;
	int arr[SIZE] = {8, 3, 1, 5, 2};

	for (int i = SIZE - 1; i > 0; --i) {
		int max = 0;

		for (int j = 1; j <= i; ++j) {
			if (arr[j] > arr[max]) {
				max = j;
			}
		}

		if (max != i) {
			for (int j = 0; j < (max + 1) / 2; ++j) {
				int temp = arr[j];
				arr[j] = arr[max - j];
				arr[max - j] = temp;
			}

			for (int j = 0; j < (i + 1) / 2; ++j) {
				int temp = arr[j];
				arr[j] = arr[i - j];
				arr[i - j] = temp;
			}
		}
	}
	
	for (int i = 0; i < SIZE; ++i) {
		std::cout << arr[i] << " ";
	}
}

