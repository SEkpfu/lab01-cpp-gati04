////������ 1
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	int a;
//	double b;
//	cout << "������� ����� ������� �����: "; cin >> a;
//	cout << "������� ����� ���� � ���� ��������: "; cin >> b;
//	switch (a) {
//		case 1: b = b; break;
//		case 2: b /= 1000000; break;
//		case 3: b /= 1000; break;
//		case 4: b *= 1000; break;
//		case 5: b *= 100; break;
//	}
//	cout << "����� ���� ���������� " << b << "��";
//	return 0;
//}


////������ 2
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	double x, r;
//	cin >> x;
//	if (x <= 2.5 && x >= -2.5)
//		r = 2.5 * x * x * x * x;
//	else if (x > 2.5)
//		r = sqrt(2 * x + 1);
//	else if (x < -2.5)
//		r = (sin(M_PI * abs(x))) / (x - 3);
//	cout << "r = " << r;
//	return 0;
//}


////������ 3
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	double x, y;
//	cout << "������� ���������� �� x: "; cin >> x;
//	cout << "������� ���������� �� y: "; cin >> y;
//	if ((x * x + y * y < 8 * 8 && x <= 0 && y <= 0) || (x * x + y * y < 8 * 8 && y >= 0 && x <= 0 && x > -4))
//		cout << "����� ������ � �������������� �������";
//	else if ((y < (-1) * x + 8 && x > 0 && x < 8 && y >= 0 && y < 8) || (y > x - 8 && x >= 0 && x <8 && y <= 0 && y > -8))
//		cout << "����� ������ � �������������� �������";
//	else
//		cout << "����� �� ������ � �������������� �������";
//	return 0;
//}


////������ 4
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	int a;
//	cin >> a;
//	cout << "������ ������ " << a;
//	if (a % 10 == 1 && (a % 100) != 11)
//		cout << " ����";
//	else if ((a % 10 == 2 || a % 10 == 3 || a % 10 == 4) && (a % 100 != 12 || a % 100 != 13 || a % 100 != 14))
//		cout << " �����";
//	else
//		cout << " ������";
//	return 0;
//}