#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
#include <cmath>
#include <iomanip>



int main() {
	using namespace std;
	setlocale(LC_ALL, "RUS");

	float x;
	float y;
	float z;

	cout << "Введите высоту брусса: "; cin >> x;
	cout << "Введите ширину брусса: "; cin >> y;
	cout << "Введите длинну брусса: "; cin >> z;
	
	if (x < 0 || y < 0 || z < 0) {
		std::cout << "Вы ввели неверное значение! Пожалуйста, введите положительные числа." << "\n";
		return 0;
	}

	float cubeResult = ((int)y * (int)z * (int)x) / pow(x, 3);
	cout << "Из этого бруска можно изготовить кубиков: " << cubeResult << "\n";
	
	if (cubeResult < 8) {
		cout << "Из такого колличества кубиков нельзя составить набор!";
	}
	for (float counter = 1; counter < cubeResult; counter++) {
		float result = pow(counter, 3);
		if (result > cubeResult) {
			counter--;
			float result = pow(counter, 3);
			cout << "Из них можно составить набор из " << result << "\n";
			break;
		}
	}
}
