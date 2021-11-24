#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string pc_name, hometown;
	std::string npc_name = "Чудак";
	int distance;
	int days;

	std::string intro = "Однажды я шел по темному лесу и встретил "
		"какого-то странного человека";
	std::string question_1 = "Привет, как тебя зовут?";
	std::string question_2 = "Из какого ты города?";
	std::string question_3 = "А сколько миль до него?";
	std::string question_4 = "Далековато... И долго ты уже идешь?";

	std::cout << intro << std::endl;
	std::cout << npc_name << ": - " << question_1 << "	";
	std::cin >> pc_name;
	std::cout << npc_name << ": - " << "Рад познакомиться, " 
								<< pc_name << "!" << std::endl;
	std::cout << npc_name << ": - " << question_2 << std::endl;
	std::cin >> hometown;
	std::cout << npc_name << ": - " << question_3 << std::endl;
	std::cin >> distance;
	std::cout << npc_name << ": - " << question_4 << std::endl;
	std::cin >> days;
}
