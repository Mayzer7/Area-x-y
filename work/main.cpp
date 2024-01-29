#include <iostream>
using namespace std;

int main()
{
	float x;
	float y;

	cout << "Введите чему равен x - ";
	cin >> x;
	cout << "Введите чему равен y - ";
	cin >> y;

	if (x * x + y * y < 100)
	{
		cout << "Да" << endl;
	}
	else if (x * x + y * y > 100)
	{
		cout << "Нет" << endl;
	}
	else
	{
		cout << "На границе" << endl;
	}
}