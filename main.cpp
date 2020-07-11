#include <iostream> // Standartowa biblioteka C++
#include <cstdlib> // Dodatek

#include <math.h> // Funkcje matematyczne
#include <Windows.h> // Funkcje systemowe Windows

using namespace std;

int op; // Zmienna do typu operacji

char title[64] = "Simpl3 CalculatoR 2.0 by Stavski78"; // Nazwa konsoli

int main() {
	system("cls");

	SetConsoleTitle(title);

	setlocale(LC_ALL, "pl_PL"); // Polskie znaki w konsoli Windows

	cout << "Wybierz operacjê:" << endl;
	cout << "" << endl;
	cout << "1 - SUMA +" << endl;
	cout << "2 - RÓ¯NICA -" << endl;
	cout << "3 - ILOCZYN *" << endl;
	cout << "4 - ILORAZ /" << endl;
	cout << "" << endl;
	cout << "5 - POTÊGOWANIE" << endl;
	cout << "6 - PROCENTY" << endl;
	cout << "7 - ODLICZANIE (BEZ DWIÊKU)" << endl;
	cout << "8 - ODLICZANIE (Z DWIÊKIEM)" << endl;
	cout << "9 - PIERWIASTKOWANIE" << endl;
	cout << "" << endl;
	cout << "> "; cin >> op;

	switch (op) { // Sprawdzanie typu operacji podanej przez u¿ytkownika

	case 1: {
		system("cls");

		float num, num2; // Zmienne liczb

		cout << "Podaj pierwsz¹ liczbê, a po spacji podaj drug¹ liczbê: "; cin >> num >> num2;

		system("cls");

		cout << "Wynik: " << num + num2 << endl;
		cout << "" << endl;
		cout << "Naciœnij byle jaki klawisz, aby kontynuowaæ!" << endl;

		system("pause > NULL");

		main();

		break;
	}
	case 2: {
		system("cls");

		float num, num2;

		cout << "Podaj pierwsz¹ liczbê, a po spacji podaj drug¹ liczbê: "; cin >> num >> num2;

		system("cls");

		cout << "Wynik: " << num - num2 << endl;
		cout << "" << endl;
		cout << "Naciœnij byle jaki klawisz, aby kontynuowaæ!" << endl;

		system("pause > NULL");

		main();

		break;
	}
	case 3: {
		system("cls");

		float num, num2;

		cout << "Podaj pierwsz¹ liczbê, a po spacji podaj drug¹ liczbê: "; cin >> num >> num2;

		system("cls");

		cout << "Wynik: " << num * num2 << endl;
		cout << "" << endl;
		cout << "Naciœnij byle jaki klawisz, aby kontynuowaæ!" << endl;

		system("pause > NULL");

		main();

		break;
	}
	case 4: {
		system("cls");

		float num, num2;

		cout << "Podaj pierwsz¹ liczbê, a po spacji podaj drug¹ liczbê: "; cin >> num >> num2;

		system("cls");

		cout << "Wynik: " << num / num2 << endl;
		cout << "" << endl;
		cout << "Naciœnij byle jaki klawisz, aby kontynuowaæ!" << endl;

		system("pause > NULL");

		main();

		break;
	}
	case 5: {
		system("cls");

		float num, power;

		cout << "Podaj liczbê, a po spacji podaj ile do potêgi: "; cin >> num >> power;

		system("cls");

		cout << "Wynik: " << pow(num, power) << endl;
		cout << "" << endl;

		cout << "Naciœnij byle jaki klawisz, aby kontynuowaæ!" << endl;

		system("pause > NULL");

		main();

		break;
	}
	case 6: {
		system("cls");

		float num, percent;

		cout << "Podaj liczbê, a po spacji podaj procenty: "; cin >> num >> percent;

		system("cls");

		cout << "Wynik: " << num * percent * 0.01 << endl;
		cout << "" << endl;

		cout << "Naciœnij byle jaki klawisz, aby kontynuowaæ!" << endl;

		system("pause > NULL");

		main();

		break;
	}
	case 7: {
		system("cls");

		int s;

		cout << "Podaj ile sekund ma trwaæ odliczanie: "; cin >> s;

		system("cls");

		for (int i = 0; i < s; i++) {
			Sleep(1000);
			system("cls");
			cout << i;
		}

		system("cls");

		MessageBox(NULL, "Odliczanie zakoñczono!", "Info.", MB_ICONINFORMATION | MB_OK);

		main();

		break;
	}
	case 8: {
		system("cls");

		int s;

		cout << "Podaj ile sekund ma trwaæ odliczanie: "; cin >> s;

		system("cls");

		for (int i = 0; i < s; i++) {
			Sleep(1000);
			system("cls");
			Beep(512, 500);
			cout << i;
		}

		system("cls");

		MessageBox(NULL, "Odliczanie zakoñczono!", "Info.", MB_ICONINFORMATION | MB_OK);

		main();

		break;
	}
	case 9: {
		system("cls");

		float num, step;

		cout << "Podaj liczbê, a po spacji podaj stopieñ: "; cin >> num >> step;

		system("cls");

		cout << "Wynik: " << pow(num, 1 / step);
		cout << "" << endl;

		cout << "Naciœnij byle jaki klawisz, aby kontynuowaæ!" << endl;

		system("pause > NULL");

		main();

		break;
	}
	default: {
		system("cls");

		MessageBox(NULL, "B³¹d: Nieistnieje taka operacja!", "B³¹d", MB_ICONINFORMATION | MB_OK);

		main();

		break;
	}

	}
	return 0;
}