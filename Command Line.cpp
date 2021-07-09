#include <iostream>

int main() {
	/* UI */
	std::cout << "NXR Command Line" << std::endl;
	std::cout << "Copyright (c) Luke Chemeriov 2021" << std::endl;

	/* Variables and stuff */
	std::string prompt = "$";
	while (true) {
		std::cout << prompt;
		std::string command;
		std::cin >> command;
		if (command == "hello") {
			std::cout << "The command completed successfully." << std::endl;
		}
		else if (command == "exit") {
			exit(0);
		}
		else if (command == "clear") {
			system("cls");
		}
		else if (command == "echo") {
			std::cout << "Enter text to echo: >>>";
			std::string text = "";
			std::strin
			std::string command = echo + text;
			const char* c = command;g echo = "echo";
			std::cin >> text;
			system(command);
		}
		else {
			std::cout << "'" << command << "' is not recognised as a \ncommand, nor as a program." << std::endl;
		}
	}
}


	

