//������ 1
#include <iostream>
#include <cmath>
using namespace std;   //b

int main() {
	setlocale(0, "");
	double a1, b1;
	double a2, b2;
	cout << "������� ������� 1-�� ��������������: \n";
	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "������� ������� 2-�� ��������������: \n";
	cout << "a2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;
	cout << "������� 1-�� �������������� ����� " << a1 * b1 << endl;
	cout << "������� 2-�� �������������� ����� " << a2 * b2 << endl;
	if (a1 * b1 > a2 * b2)
		cout << "�����: " << a1 * b1;
	else if (a1 * b1 == a2 * b2)
		cout << "������� �����";
	else
		cout << "�����: " << a2 * b2;
	return 0;
}


int main() {
	setlocale(0, "");
	double a1, b1, s1;
	double a2, b2, s2;
	double a3, b3, s3;
	cout << "������� ������� 1-�� ��������������: \n";
	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "������� ������� 2-�� ��������������: \n";
	cout << "a2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;
	cout << "������� ������� 3-�� ��������������: \n";
	cout << "a3 = "; cin >> a3;
	cout << "b3 = "; cin >> b3;
	if (a1 * b1 > a2 * b2 && a1 * b1 > a3 * b3)         //1-�� ������
		cout << "�����: " << a1 * b1;
	else if (a2 * b2 > a1 * b1 && a2 * b2 > a3 * b3)
		cout << "�����: " << a2 * b2;
	else
		cout << "�����: " << a3 * b3;

	cout << "�����: " << max(a1 * b1, max(a2 * b2, a3 * b3));   //2-�� ������

	s1 = a1 * b1; s2 = a2 * b2; s3 = a3 * b3;     //3-�� ������
	(s1 > s2 && s1 > s3) ? cout << "�����: " << s1 : (s2 > s1 && s2 > s3) ? cout << "�����: " << s2 : cout << "�����: " << s3;
	return 0;
}


//������ 2
#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int a;
	cout << "������� �����: "; cin >> a;
	if (a > 0 && a % 2 == 0)
		cout << "����� ������������� � ������";
	else if (a > 0 && a % 2 != 0)
		cout << "����� ������������� � ��������";
	else if (a == 0)
		cout << "����� ����� ���� � ��� ������";
	else if (a < 0 && (a * (-1)) % 2 == 0)
		cout << "����� ������������� � ������";
	else if (a < 0 && (a * (-1)) % 2 != 0)
		cout << "����� ������������� � ��������";
	return 0;
}


//������ 3
#include <iostream>
using namespace std;

int main() {   //�
	setlocale(0, "");
	double x;
	cout << "������� �����: "; cin >> x;
	if (x <= -2)
		cout << 0;
	else if (x > 10)
		cout << 1 / (x * x + 4 * x - 5);
	else
		cout << x * x + 4 * x + 5;
	return 0;
}

int main() {      //�
	setlocale(0, "");
	double x;
	cout << "������� �����: "; cin >> x;
	if (x <= -2)
		cout << 0;
	else if (x > 0)
		(x * x + 4 * x - 5 != 0) ? cout << 1 / (x * x + 4 * x - 5) : cout << "�� ���� ������ ������";
	else
		cout << x * x + 4 * x + 5;
	return 0;
}


//������ 4
#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int dm, dw;
	cout << "������� ����� ������: "; cin >> dm;
	cout << "������� ����� ��� � ������: "; cin >> dw;
	if ((dm == 13 && (dw == 2 || dw == 5)) || (dm == 17 && dw == 5))
		cout << "��������� ����";
	return 0;
}


//������ 5
#include <iostream>

using namespace std;
//a
int main() {
	setlocale(0, "");
	double a, b, c;
	double r, z;
	cout << "������� ������ ������� �������: "; cin >> a;
	cout << "������� ������ ������� �������: "; cin >> b;
	cout << "������� ������ �������: "; cin >> c;
	cout << "������� ������ �����: "; cin >> r;
	cout << "������� ������ �����: "; cin >> z;
	if (2 * r <= a && 2 * r <= b && z <= c)
		cout << "���� ��������� � �������";
	else
		cout << "���� �� ��������� � �������";
	return 0;
}

//b
int main() {
	setlocale(0, "");
	double a, b, c;
	double x, y, z;
	cout << "������� ������ ������� ���������: "; cin >> a;
	cout << "������� ������ ������� ���������: "; cin >> b;
	cout << "������� ������� ���������: "; cin >> c;
	cout << "������� ������ ������� �������: "; cin >> x;
	cout << "������� ������ ������� �������: "; cin >> y;
	cout << "������� ������ �������: "; cin >> z;
	if (((x <= a && y <= b) || (x <= b && y <= a)) && z <= c)
		cout << "������ �������";
	else
		cout << "������ �� �������";
	return 0;
}


//������ 6
#include <iostream>

using namespace std;        //��� ����� 4, ������� ������ � ����� ������ ����������������� 

int main() {
	setlocale(0, "");
	int x; //���������� ��� �������� ������
	cout << "������� ���� ������: ";
	cin >> x;
	//�������� �������������� ������
	switch (x) {
	case 5: cout << "�������"; break;
	case 4: cout << "������";
	case 3: cout << "�����������������"; break;
	case 2:
	case 1: cout << "����� "; break;
	default: cout << "�������e ������";
	}

	return 0;
}


//������ 7
#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	double a, b;
	cout << "������� 1-�� �����: "; cin >> a;
	cout << "������� 2-�� �����: "; cin >> b;

	char znak;
	cout << "������� ����: "; cin >> znak;
	switch (znak) {
		case '+': cout << a + b; break;
		case '-': cout << a - b; break;
		case '*': cout << a * b; break;
		default: cout << "�������� ������";
	}
	return 0;
}


//������� 8
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(0, "");
	double x, y;
	cout << "���������� �������� �� x: "; cin >> x;
	cout << "���������� �������� �� y: "; cin >> y;
	if (sqrt(x * x + y * y) > 4)
		cout << "������ 0 �����";
	else if (sqrt(x * x + y * y) > 2 && sqrt(x * x + y * y) <= 4)
		cout << "������ 5 �����";
	else
		cout << "������ 10 �����";
	return 0;
}


//������ 9
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(0, "");
	double x, y;
	cout << "������� ���������� ����� �� x: "; cin >> x;
	cout << "������� ���������� ����� �� y: "; cin >> y;
	if (x > -2 && x < 0 && y < 1 && y > 0)
		cout << "a) ����� ����������� �������������� �������";
	else
		cout << "a) ����� �� ����������� �������������� �������";

	if (x * x + y * y < 5*5 && y >= 0)
		cout << "b) ����� ����������� �������������� �������";
	else
		cout << "b) ����� �� ����������� �������������� �������";

	if (x * x + y * y > 3 * 3 && x * x + y * y < 6 * 6 && x >= 0)
		cout << "c) ����� ����������� �������������� �������";
	else
		cout << "c) ����� �� ����������� �������������� �������";
	return 0;
}



//������ 10
#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	double x, y, z;
	cout << "������� ������ ������� ������������: "; cin >> x;
	cout << "������� ������ ������� ������������: "; cin >> y;
	cout << "������� ������ ������� ������������: "; cin >> z;
	if ((x + y > z) && (y + z > x) && (z + x > y) && (x == y && x == z && y == z))
		 cout << "����������� ���������� � �� ��������������";
	else if ((x + y > z) && (y + z > x) && (z + x > y) && (x * x == y * y + z * z) || (y * y == x * x + z * z) || (z * z == y * y + x * x))
		 cout << "����������� ���������� � �� �������������";
	else if ((x + y > z) && (y + z > x) && (z + x > y) && ((x == y && x != z) || (x == z && x != y) || (z == y && z != x)))
		 cout << "����������� ���������� � �� ��������������";
	else if ((x + y <= z) || (y + z <= x) || (z + x <= y))
		cout << "����������� �� ����������";
	return 0;
}


//������ 11
#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int a1, b1, c1;
	int a2, b2, c2;
	cout << "������� ���� ������ ��������: ";
	cout << "�����: "; cin >> a1;
	cout << "����� ������: "; cin >> b1;
	cout << "���: "; cin >> c1;
	cout << "������� ����������� ����: ";
	cout << "�����: "; cin >> a2;
	cout << "����� ������: "; cin >> b2;
	cout << "���: "; cin >> c2;
	if (b2 > b1)
		if ((c2 - c1) % 10 == 2 || (c2 - c1) % 10 == 3 || (c2 - c1) % 10 == 4)
			cout << "��� �������: " << c2 - c1 << " ����";
		else if ((c2 - c1) % 10 == 1)
			cout << "��� �������: " << c2 - c1 << " ���";
		else
			cout << "��� �������: " << c2 - c1 << " ���";
	else if (b2 < b1)
		if (((c2 - c1 - 1) % 10 == 2) || ((c2 - c1 - 1) % 10 == 3) || ((c2 - c1 - 1) % 10 == 4))
			cout << "��� �������: " << c2 - c1 - 1 << " ����";
		else if ((c2 - c1 - 1) % 10 == 1)
			cout << "��� �������: " << c2 - c1 - 1 << " ���";
		else
			cout << "��� �������: " << c2 - c1 - 1 << " ���";
	else if (b2 == b1 && a2 > a1)
		if ((c2 - c1) % 10 == 2 || (c2 - c1) % 10 == 3 || (c2 - c1) % 10 == 4)
			cout << "��� �������: " << c2 - c1 << " ����";
		else if ((c2 - c1) % 10 == 1)
			cout << "��� �������: " << c2 - c1 << " ���";
		else
			cout << "��� �������: " << c2 - c1 << " ���";
	else if (b2 == b1 && a2 < a1)
		if (((c2 - c1 - 1) % 10 == 2) || ((c2 - c1 - 1) % 10 == 3) || ((c2 - c1 - 1) % 10 == 4))
			cout << "��� �������: " << c2 - c1 - 1 << " ����";
		else if ((c2 - c1 - 1) % 10 == 1)
			cout << "��� �������: " << c2 - c1 - 1 << " ���";
		else
			cout << "��� �������: " << c2 - c1 - 1 << " ���";
	return 0;
}


//������ 12
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(0, "");
	int a, b, c;
	int s1 = 0;
	cout << "������� 1-�� �����: "; cin >> a;
	cout << "������� 2-�� �����: "; cin >> b;
	cout << "������� 3-� �����: "; cin >> c;
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