#include <iostream>
#include <string>


int main()
{
	std::string letters{};

	getline(std::cin, letters);

	size_t num_letters = letters.length();

	int position{ 0 };

	for (char c : letters) {

		size_t num_spaces = num_letters - position;
		while (num_spaces > 0) {
			std::cout << " ";
			--num_spaces;
		}

		for (size_t j = 0; j < position; j++) {
			std::cout << letters.at(j);
		}
		std::cout << c;
		for (int j = position - 1; j >= 0; --j) {
		
			auto k = static_cast<size_t>(j);
			std::cout << letters.at(k);
		}

		std::cout << std::endl; 
		++position;
	}
	system("pause");
	return 0;
}