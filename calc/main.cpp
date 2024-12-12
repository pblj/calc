#include <iostream>
#include <string>
using namespace std;
#define task1
//#define task2_calc
//#define task3_palindrom


void main()
{
	
	setlocale(LC_ALL, "");

#ifdef task1

	/*1. ��������� ������ ����� ������ ��� �����������
	(� ����������� ����� ������ ��������� �������)
	1.1.	int i = 3;
	i = ++i + ++i;
	cout << i << endl;
	 ���������� i = 3
	������ �������� ����������  ����������� �������� �� 4
	������ �������� ����������� �������� �� 5
	� ����� ���������� 5 + 5 = 10
	-------------------------- -
		1.2.	int i = 3;
	i = i++ + ++i;
	cout << i << endl;

	������ �������� ��� ����������� ��������� ������ � ������� ��������� �������� ������ �������� �.�. 3
	������ �������� ���������� ��������� ����������� �������� �� 4 ���������� (4+4) + 1(����������� ���������) = 9

	-------------------------- -
		1.3.	int i = 3;
	i = i++ + 1 + ++i * 2;
	cout << i << endl;

	������ �������� ��� ����������� ��������� ������ � ������� ��������� �������� ������ �������� �.�. 3
	������ �������� ���������� ��������� ����������� �������� �� 4
	������ �������� 4 * 2
	� ����� ���������� (4 + 1 + 8) + 1 (����������� ���������) = 14
	-------------------------- -
		1.4.	int i = 3;
	i = i++ + 1 + ++i *= 2;
	cout << i << endl;

	������ �������� ��� ����������� ��������� ������ � ������� ��������� �������� ������ �������� �.�. 3
	������ �������� ���������� ��������� ����������� �������� �� 4
	���������� (4 + 1 + 4) + 1 = 10 - ��� ������ ����� ��������� ����� �� �� ���������� *= 2 �������� �� 2 � ���������� = 20
	���� ������ ��������� �������� ���������� �� ������� ����� �� ����� = ��� ����������� �������� � �������� ����� ������� (i = i++ + 1 + ++i) *= 2; ��� ����� ��������� �� ��� �����

	-------------------------- -
		1.5.	int i = 3;
	i += i++ + 1 + ++i *= 2;
	cout << i << endl;
	
	������ �������� ��� ����������� ��������� ������ � ������� ��������� �������� ������ �������� �.�. 3
	������ �������� ���������� ��������� ����������� �������� �� 4
	
	4+1+4 = 9  + ����������� ��������� = 10 ��������� i+= �� ���������� ��� 4 | 4 + (4+1+4) + 1 = 14 � ��������� ��������� *= 2 �������� ��������� �� 2 ���������� 28

	*/

#endif // task1


#ifdef task2_calc

	//string entered_expression;

	//cout << "������� ���������: "; cin >> entered_expression;
	//������ ������� �������, ����� ��� �� ������ ����� ������� ��������� ��������� ����� ������� ������� ������

	int first_operand, second_operand;
	char sign;

	cout << "������� ����������� ���� 2 + 3 = 5" << endl;
	cout << "������� ������ �������: "; cin >> first_operand; cout << endl;
	cout << "������� ���� ��������� (+-/*): "; cin >> sign; cout << endl;
	cout << "������� ������ �������: "; cin >> second_operand; cout << endl;

	switch (sign)
	{
	case '+':cout << to_string(first_operand) + " + " + to_string(second_operand) + " = " << first_operand + second_operand; break;
	case '-':cout << to_string(first_operand) + " - " + to_string(second_operand) + " = " << first_operand - second_operand; break;
	case '/':cout << to_string(first_operand) + " / " + to_string(second_operand) + " = " << first_operand / second_operand; break;
	case '*':cout << to_string(first_operand) + " * " + to_string(second_operand) + " = " << first_operand * second_operand; break;
	default:
		cout << "���������������� �������������� ������: " << sign << endl;
		break;
	}

#endif // task2_calc

#ifdef task3_palindrom
	int i, length, inputNumber;
	string inputNumber_str, reverseNumber_str;
	char digit;

	cout << "����� ���������� � ��������� ������������ �������� �� ��������� ����� �����������. \n��� ������ �� ��������� ������� exit." << endl;
	do {

		cout << "������� �����:"; cin >> inputNumber_str;

		if (!inputNumber_str.compare("exit")) { break; }

		try
		{
			inputNumber = stoi(inputNumber_str);
		}
		catch (...)
		{
			cout << "��������� �� ����� �������� �� ��������, ��������� ���� �����!" << endl;
			continue;
		}


		reverseNumber_str = "";
		length = inputNumber_str.size();
		for (i = length - 1; i >= 0; i--)
		{
			digit = inputNumber_str[i];
			reverseNumber_str = reverseNumber_str + digit;
		}

		if (!inputNumber_str.compare(reverseNumber_str)) {
			cout << "����� �������� �����������." << endl;
		}
		else {
			cout << "����� �� �������� �����������." << endl;
		}

	} while (true);
#endif // task3_palindrom

}