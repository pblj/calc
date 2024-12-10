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

	/*1. Следующие задачи нужно решить без компилятора
	(в компиляторе можно только проверить решение)
	1.1.	int i = 3;
	i = ++i + ++i;
	cout << i << endl;
	 изначально i = 3
	первая операция инкремента  увеличивает значение до 4
	вторая операция увеличивает значение до 5
	в итоге получается 5 + 5 = 10
	-------------------------- -
		1.2.	int i = 3;
	i = i++ + ++i;
	cout << i << endl;

	первая операция это постфиксный инкремент значит в текущем выражении остается старое значение т.е. 3
	вторая операция префиксный инкремент увеличивает значение до 4 получается (4+4) + 1(постфиксный инкремент) = 9

	-------------------------- -
		1.3.	int i = 3;
	i = i++ + 1 + ++i * 2;
	cout << i << endl;

	первая операция это постфиксный инкремент значит в текущем выражении остается старое значение т.е. 3
	вторая операция префиксный инкремент увеличивает значение до 4
	третья операция 4 * 2
	в итоге получается (4 + 1 + 8) + 1 (постфиксный инкремент) = 14
	-------------------------- -
		1.4.	int i = 3;
	i = i++ + 1 + ++i *= 2;
	cout << i << endl;

	первая операция это постфиксный инкремент значит в текущем выражении остается старое значение т.е. 3
	вторая операция префиксный инкремент увеличивает значение до 4
	получается (4 + 1 + 4) + 1 = 10 - это первая часть выражение потом мы ее оператором *= 2 умножаем на 2 и получается = 20
	ввод такого выражение напрямую невозможен он требует слева от знака = уже вычисленное значение я проверял такой записью (i = i++ + 1 + ++i) *= 2; или можно разделить на две части

	-------------------------- -
		1.5.	int i = 3;
	i += i++ + 1 + ++i *= 2;
	cout << i << endl;
	
	первая операция это постфиксный инкремент значит в текущем выражении остается старое значение т.е. 3
	вторая операция префиксный инкремент увеличивает значение до 4
	
	4+1+4 = 9  + постфиксный инкремент = 10 операцией i+= мы прибавляем еще 4 | 4 + (4+1+4) + 1 = 14 и последней операцией *= 2 умножаем результат на 2 получается 28

	*/

#endif // task1


#ifdef task2_calc

	//string entered_expression;

	//cout << "Введите выражение: "; cin >> entered_expression;
	//сделал простой вариант, решил что на данном этапе парсить выражение введенное одной строкой слишком сложно

	int first_operand, second_operand;
	char sign;

	cout << "Простой калькулятор вида 2 + 3 = 5" << endl;
	cout << "Введите первый операнд: "; cin >> first_operand; cout << endl;
	cout << "Введите знак оператора (+-/*): "; cin >> sign; cout << endl;
	cout << "Введите второй операнд: "; cin >> second_operand; cout << endl;

	switch (sign)
	{
	case '+':cout << to_string(first_operand) + " + " + to_string(second_operand) + " = " << first_operand + second_operand; break;
	case '-':cout << to_string(first_operand) + " - " + to_string(second_operand) + " = " << first_operand - second_operand; break;
	case '/':cout << to_string(first_operand) + " / " + to_string(second_operand) + " = " << first_operand / second_operand; break;
	case '*':cout << to_string(first_operand) + " * " + to_string(second_operand) + " = " << first_operand * second_operand; break;
	default:
		cout << "Неподдерживаемый математический символ: " << sign << endl;
		break;
	}

#endif // task2_calc

#ifdef task3_palindrom
	int i, length, inputNumber;
	string inputNumber_str, reverseNumber_str;
	char digit;

	cout << "Добро пожаловать в программу определяющую является ли введенное число палиндромом. \nДля выхода из программы введите exit." << endl;
	do {

		cout << "Введите число:"; cin >> inputNumber_str;

		if (!inputNumber_str.compare("exit")) { break; }

		try
		{
			inputNumber = stoi(inputNumber_str);
		}
		catch (...)
		{
			cout << "Программа не может работать со строками, повторите ввод числа!" << endl;
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
			cout << "Число является палиндромом." << endl;
		}
		else {
			cout << "Число не является палиндромом." << endl;
		}

	} while (true);
#endif // task3_palindrom

}