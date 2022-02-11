#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

float CircleArea(float radius) {
	float area = 3.1416*(radius*radius);
	return area;
}

int main() {
	cout << "\n------------------- PART 1 -------------------\n\n";

	float radius;
	cout << "Give the radius of a circle\n";
	cin >> radius;
	cout << "The area of that circle is: " << CircleArea(radius) << "\n\n";

	cout << "------------------- PART 2 -------------------\n\n";

	vector <int> inputs;
	int userInput = 1;
	while (userInput != 0) {
		cout << "Give an integer, 0 to continue\n";
		cin >> userInput;
		inputs.push_back(userInput);
	}
	cout << "\nYour vector is: ";
	sort(inputs.begin(), inputs.end());
	for (int i = 0; i < inputs.size(); i++) {
		cout << inputs[i] << " ";
	}
	for (int i = 0; i < inputs.size(); i++) {
		if (inputs[i] == 5) {
			cout << "\nThe number 5 is at position " << i;
		}
	}
	cout << "\n\n";
	inputs.erase(inputs.end()-1);
	inputs.erase(inputs.end()-1);
	inputs.erase(inputs.end()-1);
	cout << "Your vector without the top 3 is: ";
	for (int i = 0; i < inputs.size(); i++) {
		cout << inputs[i] << " ";
	}
}