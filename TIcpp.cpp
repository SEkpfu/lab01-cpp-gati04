//// ������ 1
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	float a, b; // ������� ��������������
//	cout << "������� �: ";
//	cin >> a;
//
//	cout << "������� b: ";
//	cin >> b;
//	cout << "������� �������������� �����: " << a * b;
//	return 0;
//}


//// ������ 2
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	float a, b;   // ��� �������������� �����
//	cout << "������� ������ �����: ";
//	cin >> a;
//
//	cout << "������� ������ �����: ";
//	cin >> b;
//
//	cout << "����� ����� �����: " << a + b << endl;
//	cout << "������������ ����� �����: " << a * b << endl;
//	if (a >= b)
//		cout << "�������� ����� �����: " << a - b;
//	else if (b >= a)
//		cout << "�������� ����� �����: " << b - a;
//	return 0;
//}


//// ������ 3
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	float c;
//	cout << "����������� � �������� �������: ";
//	cin >> c;  // ������ ����������� �� �������
//
//	cout << "����������� �� ����� ����������: " << 9 / 5 * c + 32 << endl;
//	cout << "����������� �� ����� ��������: " << c + 273;
//	return 0;
//}


//// ������ 4
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	double r;
//	cout << "������ �����: ";
//	cin >> r;  // ������ �������� �������
//
//	const double PI = 3.14159;
//	cout << "����� ���� �����: " << 4 / 3 * r * r * r * PI;
//	return 0;
//}


//// ������ 5
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	double radius, length, area;    // ������, ����� ����������, �������
//	cout << "������� ������� S = ";     
//	cin >> area; // ���� �������� � ���������� S
//	radius = sqrt(area / M_PI);    // ���������� �������
//	length = 2.0 * M_PI * radius;    // ���������� ����� ����������
//	cout << "������ = " << radius << endl;   //����� �������� �������
//
//	cout << "����� ���������� = " << length; //����� �������� ����� ����������
//	return 0;
//}


//// ������ 6
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	double radius, lenght;
//	cout << "������� �������� �������: ";
//	cin >> radius;
//
//	cout << "������� �������� ������: ";
//	cin >> lenght;
//	cout << "����� �������� �����: " << M_PI * radius * radius * lenght << endl;
//	cout << "������� ����������� ��������: " << (2 * M_PI * radius * lenght) + (2 * M_PI * radius * radius);
//	return 0;
//}


//// ������ 7
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a, b;
//	cout << "������� ������ �����: ";
//	cin >> a;
//
//	cout << "������� ������ �����: ";
//	cin >> b;
//	if (a < 0)
//		a *= -1;
//	if (b < 0)
//		b *= -1;
//	cout << "����� ��������� ���� �������� ����� �����: " << (a % 10) + (b % 10);
//	return 0;
//}


//// ������ 8
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a;
//	cout << "������� �����: ";
//	cin >> a;
//	if (a < 0)
//		a *= -1;
//	cout << "������ ����� �����: " << a / 1000 << endl;
//	cout << "��������� ����� �����: " << a % 10;
//	return 0;
//}


//// ������ 9
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	cin >> n;
//	cout << "� ������ ����� ������ " << n << " ������" << endl;
//	cout << "�������������� � ������ ����� ������: " << endl;
//	cout << n / 3600 << " �����" << endl;
//	cout << (n - ((n / 3600)*3600)) / 60 << " �����" << endl;
//	cout << n - ((n / 3600) * 3600) - (((n - ((n / 3600) * 3600)) / 60) * 60) << " ������";
//	return 0;
//}


//// ������ 10
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	double a, b, c;
//	cout << "������� �������� �����: ";
//	cin >> a;
//
//	cout << "������� �������� ������: ";
//	cin >> b;
//
//	cout << "������� �������� ������: ";
//	cin >> c;
//	cout << "����� ��������������� �����: " << a * b * c << endl;
//	cout << "������� ����������� ��������������� �����: " << 2 * (a * b + b * c + a * c);
//	return 0;
//}