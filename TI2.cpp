//задача 1
//#define _USE_MATH_DEFINES
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	double lenght, dmtr, a;
//	cin >> lenght;
//	cin >> dmtr;
//	a = sqrt(lenght * lenght + ((dmtr / 2) * (dmtr / 2)));
//	cout << "Объем конуса равен: " << M_PI * ((dmtr / 2) * (dmtr / 2)) * lenght << endl;
//	cout << "Площадь поверхности конуса равна: " << M_PI * ((dmtr / 2) * (dmtr / 2)) + M_PI * (dmtr / 2) * a;
//	return 0;
//}


//задача 2
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int a, b;
//	cin >> a;
//	b = (a / 10) % 10;
//	cout << a % 10 << b << a / 100;
//	return 0;
//}


//задача 3
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	double a, b, c;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	(a + b > 10) ? cout << "Сумма: " << a + b + c << endl << "Произведение: " << a * b * c : cout << max(a, b);
//	return 0;
//}

//задача 4
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	double x, y, a, b, c, d;
//	cin >> x;
//	a = x * x;
//	b = a * a;
//	c = b * a;
//	d = b * c;
//	y = d - c + 3 * a - 2;
//	cout << y;
//	return 0;
//}


////задача 5
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	double e, x, y;
//	cin >> e >> x >> y;
//	(pow(e, x) - (y * y + 12 * x * y - 3 * x * x) / (18 * y - 1) > 0) ? cout << "+" << e - (y * y + 12 * x * y - 3 * x * x) / (18 * y - 1) << endl: cout << "-" << e - (y * y + 12 * x * y - 3 * x * x) / (18 * y - 1) << endl;
//	((1 + sin(sqrt(x + 1))) / (cos(12 * y - 4)) > 0) ? cout << "+" << (1 + sin(sqrt(x + 1))) / (cos(12 * y - 4)) : cout << "-" << (1 + sin(sqrt(x + 1))) / (cos(12 * y - 4));
//	return 0;
//}