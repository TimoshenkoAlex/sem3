#include <iostream>
#include <string>
using namespace std;


void space_delete(string& str)
{
	int i = 0;
	while (isspace(str[i]))
	{
		i++;
		if (!isspace(str[i])) {
			str.erase(0, i);
			i = 0;

		}
	}
	while (isspace(str[str.size() - 1]))
	{
		str.erase(str.size() - 1);
	}
}
int variant(int n)
{
	int variant = 0;
	variant = n % 2 + 1;
	return variant;
}
int main()
{
	setlocale(LC_ALL, "rus");
	string surname;
	getline(cin, surname);
	space_delete(surname);
	cout << variant(surname.size()) << endl;
	return 0;
}
