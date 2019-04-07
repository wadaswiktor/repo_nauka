#include <vector>
#include <iostream>

using namespace std;

int main() {

	vector<int> vector1;
	vector<int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << vector1.at(0)<<endl;
	cout << vector1.at(1) << endl;
	cout << vector1.size() << endl;

	vector1.push_back(100);
	vector1.push_back(200);

	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << vector1.size() << endl << endl;

	vector<vector<int>>vector_2D;

	vector_2D.push_back(vector1);
	vector_2D.push_back(vector2);

	cout << vector_2D.at(0).at(0) << endl;
	cout << vector_2D.at(0).at(1) << endl;
	cout << vector_2D.at(1).at(0) << endl;
	cout << vector_2D.at(1).at(1) << endl << endl;
	
	vector1.at(0) = 1000;

	cout << vector_2D.at(0).at(0) << endl;
	cout << vector_2D.at(0).at(1) << endl;
	cout << vector_2D.at(1).at(0) << endl;
	cout << vector_2D.at(1).at(1) << endl << endl;

	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	


	system("pause");
	return 0;

}