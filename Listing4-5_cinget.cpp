#include <iostream>
using namespace std;

int main() {

	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name.\n";
	cin.get(name, ArSize).get();

	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, ArSize).get();

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	system("pause");
	return 0;
}