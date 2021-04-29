#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Enter a word: ";
	string word;
	cin >> word;
	cout << endl << word.size() << endl;

	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; i--, j++) //i--, --i 결과 같음.
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}

	cout << word << "\nDone\n";

	system("pause");
	return 0;
}
