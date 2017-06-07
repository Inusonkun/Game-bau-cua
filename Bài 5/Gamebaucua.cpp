//Game bau cua

#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main()
{
	int chon, x, y, z;

	cout << "\n                                CHAO";
	Sleep(500);
	cout << " MUNG";
	Sleep(500);
	cout << " BAN";
	Sleep(500);
	cout << " DEN";
	Sleep(500);
	cout << " GAME";
	Sleep(500);
	cout << " BAU";
	Sleep(500);
	cout << " CUA" << endl;

	Menu:
	cout << "\n               |------------Menu------------|" << endl;
	cout << "\t       |\t 1. Dat cuoc        |" << endl;
	cout << "\t       |\t 2. Choi            |" << endl;
	cout << "\t       |\t 3. Thoat           |" << endl;
	cout << "               |----------------------------|" << endl;

	do{
		cout << "\nBan chon: ";
		cin >> chon;

		if (chon != 1 && chon != 2 && chon != 3)
		{
			cout << "\nGia tri nhap vao khong hop le! Hay nhap lai!";
		}

	} while (chon != 1 && chon != 2 && chon != 3);

	srand(time(0));
	x = 1 + rand() % 6;
	y = 1 + rand() % 6;
	z = 1 + rand() % 6;

	if (chon == 1)
	{
		int a, b, c, d, e, f, thuong;

		//von = 100000;
		thuong = 0;

		do{
			cout << "\nCuoc cho ca: ";
			cin >> a;
			cout << "\nCuoc cho tom: ";
			cin >> b;
			cout << "\nCuoc cho cua: ";
			cin >> c;
			cout << "\nCuoc cho ngao: ";
			cin >> d;
			cout << "\nCuoc cho so: ";
			cin >> e;
			cout << "\nCuoc cho oc: ";
			cin >> f;
			if (a % 1000 != 0 || b % 1000 != 0 || c % 1000 != 0 || d % 1000 != 0 || e % 1000 != 0 || f % 1000 != 0 || a < 0 || b < 0 || c < 0 || d < 0 || e < 0 || f < 0)
			{
				cout << "\nSo tien nhap vao khong hop le! Hay nhap lai!";
				system("pause");
				system("cls");
			}

		} while (a % 1000 != 0 || b % 1000 != 0 || c % 1000 != 0 || d % 1000 != 0 || e % 1000 != 0 || f % 1000 != 0 || a < 0 || b < 0 || c < 0 || d < 0 || e < 0 || f < 0);

		cout << "                  QUAY" << endl;
		Sleep(1000);
		cout << "\n              *";
		Sleep(1000);
		cout << "  *";
		Sleep(1000);
		cout << "  *";

		cout << "\nXuc xac thu nhat: ";
		if (x == 1)
		{
			cout << "CA";
			thuong += a;
		}
		if (x == 2)
		{
			cout << "TOM";
			thuong += b;
		}
		if (x == 3)
		{
			cout << "CUA";
			thuong += c;
		}
		if (x == 4)
		{
			cout << "NGAO";
			thuong += d;
		}
		if (x == 5)
		{
			cout << "SO";
			thuong += e;
		}
		if (x == 6)
		{
			cout << "OC";
			thuong += f;
		}

		cout << "\nXuc xac thu hai: ";
		if (y == 1)
		{
			cout << "CA";
			thuong += a;
		}
		if (y == 2)
		{
			cout << "TOM";
			thuong += b;
		}
		if (y == 3)
		{
			cout << "CUA";
			thuong += c;
		}
		if (y == 4)
		{
			cout << "NGAO";
			thuong += d;
		}
		if (y == 5)
		{
			cout << "SO";
			thuong += e;
		}
		if (y == 6)
		{
			cout << "OC";
			thuong += f;
		}
		cout << "\nXuc xac thu ba: ";
		if (z == 1)
		{
			cout << "CA";
			thuong += a;
		}
		if (z == 2)
		{
			cout << "TOM";
			thuong += b;
		}
		if (z == 3)
		{
			cout << "CUA";
			thuong += c;
		}
		if (z == 4)
		{
			cout << "NGAO";
			thuong += d;
		}
		if (z == 5)
		{
			cout << "SO";
			thuong += e;
		}
		if (z == 6)
		{
			cout << "OC";
			thuong += f;
		}

		cout << "\nTien thuong ban nhan duoc la: " << thuong;

		system("pause");
		system("cls");
		goto Menu;

	}
	else if (chon == 2)
	{
		cout << "\nXuc xac thu nhat: ";
		if (x == 1)
		{
			cout << "CA";
		}
		if (x == 2)
		{
			cout << "TOM";
		}
		if (x == 3)
		{
			cout << "CUA";
		}
		if (x == 4)
		{
			cout << "NGAO";
		}
		if (x == 5)
		{
			cout << "SO";
		}
		if (x == 6)
		{
			cout << "OC";
		}

		cout << "\nXuc xac thu hai: ";
		if (y == 1)
		{
			cout << "CA";
		}
		if (y == 2)
		{
			cout << "TOM";
		}
		if (y == 3)
		{
			cout << "CUA";
		}
		if (y == 4)
		{
			cout << "NGAO";
		}
		if (y == 5)
		{
			cout << "SO";
		}
		if (y == 6)
		{
			cout << "OC";
		}
		cout << "\nXuc xac thu ba: ";
		if (z == 1)
		{
			cout << "CA";
		}
		if (z == 2)
		{
			cout << "TOM";
		}
		if (z == 3)
		{
			cout << "CUA";
		}
		if (z == 4)
		{
			cout << "NGAO";
		}
		if (z == 5)
		{
			cout << "SO";
		}
		if (z == 6)
		{
			cout << "OC";
		}

		system("pause");
		system("cls");
		goto Menu;
	}
	else
	{
		exit(0);
	}

	system("pause");
	return 0;
}