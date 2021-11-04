﻿#include <iostream>; // стандартная библиотека, которая объявляет объекты, 
						//управляющие чтением из стандартных потоков и записью в них

using namespace std; // пространство имен

int main() // главная функция программы
{
	const int x = 10; // резервирование памяти компьютера для переменной, 
					  // которая является целой константой со значением 10
	int b = 20; // резервирование памяти компьютера для переменной целочисленного типа 
				// и присваивание ей значения 20
	cout << x << "\n" << b-- << "\n" << b << "\n"; // вывод на экран переменных, в одной из которых 
												   // используется постфиксный декремент
	return 0; // останавливает функцию
}