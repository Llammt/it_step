#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string answ{};

	std::cout << "Вы идете по лесу и видите древнего старца."
		"Он приветствует вас и спрашивает:"
		"- Ты идешь в Синегорье?" << std::endl;
	std::cout << std::endl << "да/нет" << std::endl << std::endl;
	std::cin >> answ;

	if (answ == "да"){
		std::cout << "Будь добр, отнеси подарок моей дочери"
		<< std::endl;
	std::cout << "hahaha";
}
	else if (answ == "нет") {
		std::cout << "Как жаль! Я так давно не видел свою дочь!" 
			<< std::endl;
	}
	else {
		std::cout << "Оооо, кажется на тебе проклятие! Ты потерял дар речи!"
			<< std::endl;
	}
}
