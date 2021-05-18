//using a static local variable
#include <iostream>
using namespace std;

const int ArSize = 10; //입력받을 char array size

void strcount(const char *str); //function prototype

int main() {

	char input[ArSize]; //입력받을 array
	char next;
	cout << "Enter a line:\n";
	cin.get(input, ArSize); //space포함하여 입력받음. null 제외한 9 char를 받아들임.

	while (cin) //return이면 0, 그외는 1
	{
		cin.get(next); //다음 char 받아들임
		while (next != '\n') cin.get(next); // 받은 char가 return이 아니면 다음char 받아들임.
											//return이면 while문 break.
		strcount(input); 
		cout << "Enter next line (empty line to quit):\n";
		cin.get(input, ArSize); //다음 문장 받아들임. 이것이 return이면 while문 break.
	}

	cout << "Bye\n";
	system("pause");
	return 0;
}

void strcount(const char *str) {

	static int total = 0; // static local variable, no likage
	int count = 0;		// automatic local variable

	cout << "\"" << str << "\" contains ";
	while (*str++) count++;		// go to end of string
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}

// static int total = 0 과 int total = 0의 실행 결과는 다르다.
// static int tatal = 0 은 strcount()가 처음 실행될 때만 초기화됐다. 즉, 처음에만 total이 0이 됐다. 
// 반면 int total = 0 은 strcount()가 실행될 때마다 total을 0으로 초기화했다.