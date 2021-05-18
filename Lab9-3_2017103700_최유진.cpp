//using a static local variable
#include <iostream>
using namespace std;

const int ArSize = 10; //�Է¹��� char array size

void strcount(const char *str); //function prototype

int main() {

	char input[ArSize]; //�Է¹��� array
	char next;
	cout << "Enter a line:\n";
	cin.get(input, ArSize); //space�����Ͽ� �Է¹���. null ������ 9 char�� �޾Ƶ���.

	while (cin) //return�̸� 0, �׿ܴ� 1
	{
		cin.get(next); //���� char �޾Ƶ���
		while (next != '\n') cin.get(next); // ���� char�� return�� �ƴϸ� ����char �޾Ƶ���.
											//return�̸� while�� break.
		strcount(input); 
		cout << "Enter next line (empty line to quit):\n";
		cin.get(input, ArSize); //���� ���� �޾Ƶ���. �̰��� return�̸� while�� break.
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

// static int total = 0 �� int total = 0�� ���� ����� �ٸ���.
// static int tatal = 0 �� strcount()�� ó�� ����� ���� �ʱ�ȭ�ƴ�. ��, ó������ total�� 0�� �ƴ�. 
// �ݸ� int total = 0 �� strcount()�� ����� ������ total�� 0���� �ʱ�ȭ�ߴ�.