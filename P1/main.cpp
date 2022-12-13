#include<iostream>
#include <vector>
using namespace std;

bool proverka(char stroka[], int dlina) {
	vector <int> skobki_chisla(dlina);
	int a = 0;
	int b = 0;
	for (int i = 0; i < dlina; i++) {
		if (stroka[i] == '(') {
			a = a + 1;
            skobki_chisla.at(i) = 1;
		}
		if (stroka[i] == ')') {
			a = a - 1;
            skobki_chisla.at(i) = -1;
		}
		if (stroka[i] == '[') {
			b = b + 1;
            skobki_chisla.at(i) = 2;
		}
		if (stroka[i] == ']') {
			b = b - 1;
            skobki_chisla.at(i) = -2;
		}
	}
	bool check;
	if ((a == 0) && (b == 0)) {
		check = true; // проверка на равенство числа открытых и закрытых [(
	}
	else {
		check = false; //  ложь если кол-ва не равны
	}
	if (check) {

		for (int i = 1; i < dlina; i++) {
			if ( ( (skobki_chisla.at(i) == -1)&&(skobki_chisla.at(i - 1)==2) ) ||
				((skobki_chisla.at(i) == 1) && (skobki_chisla.at(i - 1) == -2)) ) { // проверка на неподходящие сочетания ( )], ([ ...) если число откр и закр совпадает
				check = false;
				break;
			}
		}
	}
	return check;
}
int main()
{
	char strk[] = "([])";
	cout << proverka(strk , sizeof(strk)) << endl;

}