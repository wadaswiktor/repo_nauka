#include <iostream>
using namespace std;

int main() {
	const double price_per_small_room{ 25 };
	const double price_per_large_room{ 35 };
	const float tax_rate{ 0.06 };
	const double valid_for{ 30 };
	int number_of_small_rooms;
	int number_of_large_rooms;
	int {100 };
	cout << "Give number of small rooms to be cleaned: " << endl;
	cin >> number_of_small_rooms;
	cout << "Give number of large rooms to be cleaned: " << endl;
	cin >> number_of_large_rooms;
	cout << "Estimate for carpet cleaning service:" << endl;
	cout << "Number of small rooms: " << number_of_small_rooms << endl;
	cout << "Number of large rooms: " << number_of_large_rooms << endl;
	cout << "Price per small room: $" << price_per_small_room << endl;
	cout << "Price per large room: $" << price_per_large_room << endl;
	cout << "Cost: $" << (price_per_large_room*number_of_large_rooms) + (price_per_small_room*number_of_small_rooms) << endl;
	cout << "Tax: $" << ((price_per_large_room*number_of_large_rooms) + (price_per_small_room*number_of_small_rooms))*tax_rate << endl;
	cout << "==============================================" << endl;
	cout << "Total estimate: $" << ((price_per_large_room*number_of_large_rooms) + (price_per_small_room*number_of_small_rooms)) + (((price_per_large_room*number_of_large_rooms) + (price_per_small_room*number_of_small_rooms))*tax_rate) << endl;
	cout << "This estimate is valid for: " << valid_for << " days";
	system("pause");
	return 0;
}