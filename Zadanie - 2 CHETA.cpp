#include <iostream>

using namespace std;

struct accounts
{
	int Number_Acc;
	string Name;
	double Balance;
};

void Update_Balance(accounts& a, double New_Balance)
{
	a.Balance = New_Balance;
}

int main()
{
	accounts a;
	double New_Balance;

	cout << "Введите номер счёта: ";
	cin >> a.Number_Acc;

	cout << "Введите имя владельца: ";
	cin >> a.Name;

	cout << "Введите баланс: ";
	cin >> a.Balance;

	cout << "Введите новый баланс: ";
	cin >> New_Balance;

	Update_Balance(a, New_Balance);

	cout << "Ваш счёт: " << a.Name << ", " << a.Number_Acc << ", " << a.Balance;

	return 0;
}