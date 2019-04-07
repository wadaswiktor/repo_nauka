#include <iostream>

using namespace std;

int main() {
	int scores[]{ 100,90,70 };
	for (int score : scores)
		cout << score << endl;
	system("pause");
	return 0;
}