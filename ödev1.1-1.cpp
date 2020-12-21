

#include <iostream>
#include <locale.h>
using namespace std;
int a,b;
int main() {
	setlocale(LC_ALL, "Turkish");

	cout << "Merhaba...\n";
	cout << "girdigin sayi kadar '*' cikacak\n";
	cout << "Hadi deneyelim ! : ";
	cin >> a;
	for (b = b; b <= a; b++)
	{
		cout << "*";

	}
	return 0;
}
