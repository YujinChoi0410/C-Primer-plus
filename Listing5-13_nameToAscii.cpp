#include <iostream>
using namespace std;
const int ArSize = 20;

int main() {

	char name[ArSize];

	cout << "Your first name, please:  ";
	cin >> name;
	cout << "Here is your name, verticalized and ASCIIized:\n";

	int i = 0; //while은 위에서 i 초기화
	while (name[i] != '\0') {
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
	system("pause");
	return 0;
}
