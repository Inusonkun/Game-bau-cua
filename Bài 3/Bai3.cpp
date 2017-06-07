//Nhap cac ky tu password, --> doi sang dang "*"??

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	//char c;
	//int dem = 0;
/*
    cout << "\nNhap vao cac ky tu cua password: ";
	do{		
		cin >> c;
		dem++;
		if (c == 13)
		{
			break;
		}

	} while (c == 13);*/

	//cout << "\nNhap vao cac ky tu cua password: ";
	//while (true)
	//{	
	//	cin >> c;
	//	
	//	cout << "*";
	//	//dem++;

	//	if (c == GetAsyncKeyState(VK_SPACE) || c == GetAsyncKeyState(VK_RETURN))
	//	{
	//		break;
	//	}
	//}

	int scs, x;

	do{
		cout << "\nNhap vao password (dang so): ";
		cin >> x;
		if (x < 0)
		{
			cout << "\nPassword ban nhap vao khong hop le! Hay kiem tra lai!";
		}
	} while (x < 0);

	scs = log10(x) + 1;

	char c;
	cout << "\nBan muon an password? (y/n)";
	cin >> c;

	if (c == 'y')
	{
		for (int i = 1; i <= scs; ++i)
		{
			cout << "*";
		}
	}
	else if (c == 'n')
	{
		for (int i = 1; i <= scs; ++i)
		{
			cout << x;
		}
	}

	system("pause");
	return 0;
}