#include <iostream>
#include <cstdlib>
#include <cstring>
#include "CulcLibrary.h"
using std::cout;
using std::cin;

void run() {
	char buffer[500];

	cout << "Напишите 'exit' для выхода из программы.\n";

	while (true) {
		cout << "Введите выражение: ";
		cin.getline(buffer, sizeof(buffer));
		if (strncmp("exit", buffer, 4) == 0) {
			break;
		}
		cout << "Результат: " << calculate(buffer) << "\n";
	}
}

int main()
{
	setlocale(LC_ALL, "russian");
	run();

}