//задача 1
#include <iostream>
#include <cmath>
using namespace std;   //b

int main() {
	setlocale(0, "");
	double a1, b1;
	double a2, b2;
	cout << "Введите стороны 1-го прямоугольника: \n";
	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "Введите стороны 2-го прямоугольника: \n";
	cout << "a2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;
	cout << "Площадь 1-го прямоугольника равна " << a1 * b1 << endl;
	cout << "Площадь 2-го прямоугольника равна " << a2 * b2 << endl;
	if (a1 * b1 > a2 * b2)
		cout << "Ответ: " << a1 * b1;
	else if (a1 * b1 == a2 * b2)
		cout << "Площади равны";
	else
		cout << "Ответ: " << a2 * b2;
	return 0;
}


int main() {
	setlocale(0, "");
	double a1, b1, s1;
	double a2, b2, s2;
	double a3, b3, s3;
	cout << "Введите стороны 1-го прямоугольника: \n";
	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "Введите стороны 2-го прямоугольника: \n";
	cout << "a2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;
	cout << "Введите стороны 3-го прямоугольника: \n";
	cout << "a3 = "; cin >> a3;
	cout << "b3 = "; cin >> b3;
	if (a1 * b1 > a2 * b2 && a1 * b1 > a3 * b3)         //1-ый способ
		cout << "Ответ: " << a1 * b1;
	else if (a2 * b2 > a1 * b1 && a2 * b2 > a3 * b3)
		cout << "Ответ: " << a2 * b2;
	else
		cout << "Ответ: " << a3 * b3;

	cout << "Ответ: " << max(a1 * b1, max(a2 * b2, a3 * b3));   //2-ой способ

	s1 = a1 * b1; s2 = a2 * b2; s3 = a3 * b3;     //3-ий способ
	(s1 > s2 && s1 > s3) ? cout << "Ответ: " << s1 : (s2 > s1 && s2 > s3) ? cout << "Ответ: " << s2 : cout << "Ответ: " << s3;
	return 0;
}


//задача 2
#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int a;
	cout << "Введите число: "; cin >> a;
	if (a > 0 && a % 2 == 0)
		cout << "Число положительное и четное";
	else if (a > 0 && a % 2 != 0)
		cout << "Число положительное и нечетное";
	else if (a == 0)
		cout << "Число равно нулю и оно четное";
	else if (a < 0 && (a * (-1)) % 2 == 0)
		cout << "Число отрицательное и четное";
	else if (a < 0 && (a * (-1)) % 2 != 0)
		cout << "Число отрицательное и нечетное";
	return 0;
}


//задача 3
#include <iostream>
using namespace std;

int main() {   //а
	setlocale(0, "");
	double x;
	cout << "Введите число: "; cin >> x;
	if (x <= -2)
		cout << 0;
	else if (x > 10)
		cout << 1 / (x * x + 4 * x - 5);
	else
		cout << x * x + 4 * x + 5;
	return 0;
}

int main() {      //б
	setlocale(0, "");
	double x;
	cout << "Введите число: "; cin >> x;
	if (x <= -2)
		cout << 0;
	else if (x > 0)
		(x * x + 4 * x - 5 != 0) ? cout << 1 / (x * x + 4 * x - 5) : cout << "На ноль делить нельзя";
	else
		cout << x * x + 4 * x + 5;
	return 0;
}


//задача 4
#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int dm, dw;
	cout << "Введите число месяца: "; cin >> dm;
	cout << "Введите номер дня в неделе: "; cin >> dw;
	if ((dm == 13 && (dw == 2 || dw == 5)) || (dm == 17 && dw == 5))
		cout << "Неудачный день";
	return 0;
}


//задача 5
#include <iostream>

using namespace std;
//a
int main() {
	setlocale(0, "");
	double a, b, c;
	double r, z;
	cout << "Введите первую сторону коробки: "; cin >> a;
	cout << "Введите вторую сторону коробки: "; cin >> b;
	cout << "Введите высоту коробки: "; cin >> c;
	cout << "Введите радиус торта: "; cin >> r;
	cout << "Введите высоту торта: "; cin >> z;
	if (2 * r <= a && 2 * r <= b && z <= c)
		cout << "Торт уместится в коробку";
	else
		cout << "Торт не уместится в коробку";
	return 0;
}

//b
int main() {
	setlocale(0, "");
	double a, b, c;
	double x, y, z;
	cout << "Введите первую сторону отверстия: "; cin >> a;
	cout << "Введите вторую сторону отверстия: "; cin >> b;
	cout << "Введите глубину отверстия: "; cin >> c;
	cout << "Введите первую сторону кирпича: "; cin >> x;
	cout << "Введите вторую сторону кирпича: "; cin >> y;
	cout << "Введите высоту кирпича: "; cin >> z;
	if (((x <= a && y <= b) || (x <= b && y <= a)) && z <= c)
		cout << "Кирпич пройдет";
	else
		cout << "Кирпич не пройдет";
	return 0;
}


//задача 6
#include <iostream>

using namespace std;        //при вводе 4, выводит хорошо и далее идущее удовлетворительно 

int main() {
	setlocale(0, "");
	int x; //переменная для хранения оценки
	cout << "введите свою оценку: ";
	cin >> x;
	//оператор множественного выбора
	switch (x) {
	case 5: cout << "отлично"; break;
	case 4: cout << "хорошо";
	case 3: cout << "удовлетворительно"; break;
	case 2:
	case 1: cout << "плохо "; break;
	default: cout << "неверныe данные";
	}

	return 0;
}


//задача 7
#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	double a, b;
	cout << "Введите 1-ое число: "; cin >> a;
	cout << "Введите 2-ое число: "; cin >> b;

	char znak;
	cout << "Введите знак: "; cin >> znak;
	switch (znak) {
		case '+': cout << a + b; break;
		case '-': cout << a - b; break;
		case '*': cout << a * b; break;
		default: cout << "Неверные данные";
	}
	return 0;
}


//задание 8
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(0, "");
	double x, y;
	cout << "Координаты выстрела по x: "; cin >> x;
	cout << "Координаты выстрела по y: "; cin >> y;
	if (sqrt(x * x + y * y) > 4)
		cout << "Выбито 0 очков";
	else if (sqrt(x * x + y * y) > 2 && sqrt(x * x + y * y) <= 4)
		cout << "Выбито 5 очков";
	else
		cout << "Выбито 10 очков";
	return 0;
}


//задача 9
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(0, "");
	double x, y;
	cout << "Введите координату точки по x: "; cin >> x;
	cout << "Введите координату точки по y: "; cin >> y;
	if (x > -2 && x < 0 && y < 1 && y > 0)
		cout << "a) Точка принадлежит заштрихованной области";
	else
		cout << "a) Точка не принадлежит заштрихованной области";

	if (x * x + y * y < 5*5 && y >= 0)
		cout << "b) Точка принадлежит заштрихованной области";
	else
		cout << "b) Точка не принадлежит заштрихованной области";

	if (x * x + y * y > 3 * 3 && x * x + y * y < 6 * 6 && x >= 0)
		cout << "c) Точка принадлежит заштрихованной области";
	else
		cout << "c) Точка не принадлежит заштрихованной области";
	return 0;
}



//задача 10
#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	double x, y, z;
	cout << "Введите первую сторону треугольника: "; cin >> x;
	cout << "Введите вторую сторону треугольника: "; cin >> y;
	cout << "Введите третью сторону треугольника: "; cin >> z;
	if ((x + y > z) && (y + z > x) && (z + x > y) && (x == y && x == z && y == z))
		 cout << "Треугольник существует и он равносторонний";
	else if ((x + y > z) && (y + z > x) && (z + x > y) && (x * x == y * y + z * z) || (y * y == x * x + z * z) || (z * z == y * y + x * x))
		 cout << "Треугольник существует и он прямоугольный";
	else if ((x + y > z) && (y + z > x) && (z + x > y) && ((x == y && x != z) || (x == z && x != y) || (z == y && z != x)))
		 cout << "Треугольник существует и он равнобедренный";
	else if ((x + y <= z) || (y + z <= x) || (z + x <= y))
		cout << "Треугольник не существует";
	return 0;
}


//задача 11
#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int a1, b1, c1;
	int a2, b2, c2;
	cout << "Введите дату вашего рождения: ";
	cout << "Число: "; cin >> a1;
	cout << "Номер месяца: "; cin >> b1;
	cout << "Год: "; cin >> c1;
	cout << "Введите сегодняшнюю дату: ";
	cout << "Число: "; cin >> a2;
	cout << "Номер месяца: "; cin >> b2;
	cout << "Год: "; cin >> c2;
	if (b2 > b1)
		if ((c2 - c1) % 10 == 2 || (c2 - c1) % 10 == 3 || (c2 - c1) % 10 == 4)
			cout << "Ваш возраст: " << c2 - c1 << " года";
		else if ((c2 - c1) % 10 == 1)
			cout << "Ваш возраст: " << c2 - c1 << " год";
		else
			cout << "Ваш возраст: " << c2 - c1 << " лет";
	else if (b2 < b1)
		if (((c2 - c1 - 1) % 10 == 2) || ((c2 - c1 - 1) % 10 == 3) || ((c2 - c1 - 1) % 10 == 4))
			cout << "Ваш возраст: " << c2 - c1 - 1 << " года";
		else if ((c2 - c1 - 1) % 10 == 1)
			cout << "Ваш возраст: " << c2 - c1 - 1 << " год";
		else
			cout << "Ваш возраст: " << c2 - c1 - 1 << " лет";
	else if (b2 == b1 && a2 > a1)
		if ((c2 - c1) % 10 == 2 || (c2 - c1) % 10 == 3 || (c2 - c1) % 10 == 4)
			cout << "Ваш возраст: " << c2 - c1 << " года";
		else if ((c2 - c1) % 10 == 1)
			cout << "Ваш возраст: " << c2 - c1 << " год";
		else
			cout << "Ваш возраст: " << c2 - c1 << " лет";
	else if (b2 == b1 && a2 < a1)
		if (((c2 - c1 - 1) % 10 == 2) || ((c2 - c1 - 1) % 10 == 3) || ((c2 - c1 - 1) % 10 == 4))
			cout << "Ваш возраст: " << c2 - c1 - 1 << " года";
		else if ((c2 - c1 - 1) % 10 == 1)
			cout << "Ваш возраст: " << c2 - c1 - 1 << " год";
		else
			cout << "Ваш возраст: " << c2 - c1 - 1 << " лет";
	return 0;
}


//задача 12
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(0, "");
	int a, b, c;
	int s1 = 0;
	cout << "Введите 1-ое число: "; cin >> a;
	cout << "Введите 2-ое число: "; cin >> b;
	cout << "Введите 3-е число: "; cin >> c;
	if (a > 10)
		s1 += a;
	if (b > 10)
		s1 += b;
	if (c > 10)
		s1 += c;
	cout << "a) " << s1 << endl;
	int k1 = 0;
	if (a % 2 == 0)
		k1 += 1;
	if (b % 2 == 0)
		k1 += 1;
	if (c % 2 == 0)
		k1 += 1;
	cout << "b) " << k1 << endl;
	cout << "c) " << (a + b + c) - max(a, max(b, c)) - min(a, min(b, c)) << endl;
	if (min(a, min(b, c)) == a)
		cout << "d) " << 1 << endl;
	else if (min(a, min(b, c)) == b)
		cout << "d) " << 2 << endl;
	else
		cout << "d) " << 3 << endl;
	return 0;
}