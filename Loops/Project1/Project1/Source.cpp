#include <iostream>
#include <vector>
using namespace std;

void menu() {

	cout << "1 - Print numbers" << endl;
	cout << "2 - Add a number" << endl;
	cout << "3 - Display mean of the numbers" << endl;
	cout << "4 - Display the smallest number" << endl;
	cout << "5 - Display the largest number" << endl;
	cout << "6 - Quit" << endl;
}
void print(vector<int>&vec) {
	cout << "LIST: ";
	for (auto val : vec)
		cout << val << " ";
	cout << endl;
}
void add_number(int number, vector<int>&vec) 
{
	vec.push_back(number);
}
void display_average(vector<int>&vec) 
{
	if (vec.size() == 0) {
		cout << "WEKTOR PUSTY!";
	}
	else 
	{
		int total{};
		double average{};
		for (auto val : vec) 
		{
			total = total + val;
		}
		average = (static_cast<double>(total) / vec.size());
		cout << "AVERAGE: " << average;
	}
	cout << endl;
}
void display_smallest(vector<int>&vec) 
{
	
	if (vec.size() == 0) {
		cout << "WEKTOR PUSTY!";
	}
	else 
	{
		int min{};
		 min=vec.at(0);
		for (auto val : vec) 
		{
			if (val < min) 
			{
				min = val;
			}
		}
		cout << "SMALLEST NUMBER: " << min << endl;
	}
	

}
void display_largest(vector<int>&vec) 
{
	int max{};
	if (vec.size() == 0) {
		cout << "WEKTOR PUSTY!";
	}
	else
	{
		max = vec.at(0);
		for (auto val : vec)
		{
			if (val > max)
			{
				max = val;
			}
		}
	}
	cout << "LARGEST NUMBER: " << max << endl;

}
int main() {
	vector<int>vec{};
	int option{};
	int number{};
	bool logic{ true };
	while (logic) {
		menu();
		cin >> option;
		switch (option)
		{
		case 1:
			print(vec);
			break;
		case 2:
			cout << "Give number to add: ";
			cin >> number;
			cout << endl;
			add_number(number, vec);
			break;
		case 3:
			display_average(vec);
			break;
		case 4:
			display_smallest(vec);
			break;
		case 5:
			display_largest(vec);
			break;
		case 6:
			logic = false;
			break;
		default:
			cout << "Unknown selection, please try again" << endl;
			break;
		}
		
	}
	
	return 0;
}