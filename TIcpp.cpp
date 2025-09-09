//// задача 1
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	float a, b; // стороны прямоугольника
//	cout << "Сторона а: ";
//	cin >> a;
//
//	cout << "Сторона b: ";
//	cin >> b;
//	cout << "Площадь прямоугольника равна: " << a * b;
//	return 0;
//}


//// задача 2
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	float a, b;   // два действительных числа
//	cout << "Введите первое число: ";
//	cin >> a;
//
//	cout << "Введите второе число: ";
//	cin >> b;
//
//	cout << "Сумма чисел равна: " << a + b << endl;
//	cout << "Произведение чисел равно: " << a * b << endl;
//	if (a >= b)
//		cout << "Разность чисел равна: " << a - b;
//	else if (b >= a)
//		cout << "Разность чмсел равна: " << b - a;
//	return 0;
//}


//// задача 3
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	float c;
//	cout << "Температура в градусах Цельсия: ";
//	cin >> c;  // вводим температуру по цельсия
//
//	cout << "Температура по шкале Фаренгейта: " << 9 / 5 * c + 32 << endl;
//	cout << "Температура по шкале Кельвина: " << c + 273;
//	return 0;
//}


//// задача 4
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	double r;
//	cout << "Радиус равен: ";
//	cin >> r;  // вводим значение радиуса
//
//	const double PI = 3.14159;
//	cout << "Объем шара равен: " << 4 / 3 * r * r * r * PI;
//	return 0;
//}


//// задача 5
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	double radius, length, area;    // радиус, длина окружности, площадь
//	cout << "Введите площадь S = ";     
//	cin >> area; // ввод значения в переменную S
//	radius = sqrt(area / M_PI);    // вычисление радиуса
//	length = 2.0 * M_PI * radius;    // вычисление длины окружности
//	cout << "радиус = " << radius << endl;   //вывод значения радиуса
//
//	cout << "длина окружности = " << length; //вывод значения длины окружности
//	return 0;
//}


//// задача 6
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	double radius, lenght;
//	cout << "Введите значение радиуса: ";
//	cin >> radius;
//
//	cout << "Введите значение высоты: ";
//	cin >> lenght;
//	cout << "Объем цилиндра равен: " << M_PI * radius * radius * lenght << endl;
//	cout << "Площадь поверхности цилиндра: " << (2 * M_PI * radius * lenght) + (2 * M_PI * radius * radius);
//	return 0;
//}


//// задача 7
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a, b;
//	cout << "Введите первое число: ";
//	cin >> a;
//
//	cout << "Введите второе число: ";
//	cin >> b;
//	if (a < 0)
//		a *= -1;
//	if (b < 0)
//		b *= -1;
//	cout << "Сумма последних цифр заданных чисел равна: " << (a % 10) + (b % 10);
//	return 0;
//}


//// задача 8
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a;
//	cout << "Введите число: ";
//	cin >> a;
//	if (a < 0)
//		a *= -1;
//	cout << "Первая цифра числа: " << a / 1000 << endl;
//	cout << "Последняя цифра числа: " << a % 10;
//	return 0;
//}


//// задача 9
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	cin >> n;
//	cout << "С начала суток прошло " << n << " секунд" << endl;
//	cout << "Соответственно с начала суток прошло: " << endl;
//	cout << n / 3600 << " часов" << endl;
//	cout << (n - ((n / 3600)*3600)) / 60 << " минут" << endl;
//	cout << n - ((n / 3600) * 3600) - (((n - ((n / 3600) * 3600)) / 60) * 60) << " секунд";
//	return 0;
//}


//// задача 10
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	double a, b, c;
//	cout << "Введите значение длины: ";
//	cin >> a;
//
//	cout << "Введите значение ширины: ";
//	cin >> b;
//
//	cout << "Введите значение высоты: ";
//	cin >> c;
//	cout << "Объем параллелепипеда равен: " << a * b * c << endl;
//	cout << "Площадь поверхности параллелепипеда равна: " << 2 * (a * b + b * c + a * c);
//	return 0;
//}