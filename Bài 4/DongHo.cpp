//Tao dong ho dien tu

#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
	int m, s, dem;
	int x;
	char c;

Menu:

	cout << "\n*********************************DONG HO DIEN TU*********************************" << endl;
	cout << "\t\t1. Bat dau";
	cout << "\t\t\t2. Thoat" << endl;
	cout << "\n                                                                   CHU Y:";
	cout << "\n                                                           - Tam dung: phim SPACE";
	cout << "\n                                                           - Dung han: phim ESC" << endl;

	do{
		cin >> x;
		if (x != 1 && x != 2)
		{
			cout << "\nGia tri nhap khong hop le! Hay nhap lai!";
		}
	} while (x != 1 && x != 2);
	
	m = 0;
	s = 0;
	dem = 0;
	if (x == 1)
	{
		system("cls");
		
		while (true)
		{
			cout << "\n";
			cout << "\n";
			cout << "\n";
			cout << "\n";
			cout << "\n                                    DONG HO DIEN TU" << endl;
			cout << "\n\t\t\t|------------------------------------|";
			cout << "\n\t\t\t|              " << setfill('0') << setw(2) << m << " : " << setfill('0') << setw(2) << s << "               |";
			cout << "\n\t\t\t|------------------------------------|";
			Sleep(1000);
			s++;

			if (GetAsyncKeyState(VK_SPACE) == true)
			{
				dem++;
				if (dem % 2 != 0)
				{
					s--;
				}
			}
			if (GetAsyncKeyState(VK_ESCAPE) == true)
			{
				//system("pause");
				system("cls");
				goto Menu;
			}
			if (s == 59)
			{
				m += 1;
				s = 0;
			}
			system("cls");
		}
	}
	else
	{
		exit(0);
	}

	system("pause");
	return 0;
}