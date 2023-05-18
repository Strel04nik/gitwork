#include <iostream>
#include <ctime>
using namespace std;

void checkout(int a, int b) {
	if (a == 1) {
		srand(1);
		while (a == 1) {
			b = b + 100 % 10 + rand() * 13 - 1000;
			cout << b << " ";
		}
	}
	else {
		cout << "Answer incorrect!" << endl;
	}
}

int main()
{
	int a;
	int b = 1;
	cin >> a;
	checkout(a, b);
	system("pause");
}