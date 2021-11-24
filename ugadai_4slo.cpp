#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a; // secret number
	int b; // user number
	int attempts = 3;


	srand(time(0));
	a = rand() % 10 + 1;
	cout << a << "\n";

	cout << "Угадай число от 1 до 10" << "\n";
	cout << "\n";
	cout << "Введи число от 1 до 10" << "\n";
	

	do {
		cin >> b;
		if (a < b) {
			cout << "Секретное число меньше" << "\n";
		} else if (a > b) {
			cout << "Секретное число больше" << "\n";
		} else {/*(a == b) {*/
			cout << "БИНГО!!!" << "\n";
			//break;
		}
		attempts = attempts - 1;
		std::cout << attempts << std::endl;
	} while (attempts != 0);

	return 0;
}
