//Viet chuong trinh dung dau "," de ngan cach ra menh gia tien??

#include <iostream>
using namespace std;

int main()
{
	int x, t, scs;

	do{
		cout << "\nNhap so x = ";
		cin >> x;
		if (x < 1000)
		{
			cout << "\nCac gia tri x < 1000 khong can ngan cach! Hay nhap lai!";
		}
	} while (x < 1000);

	scs = log10(x) + 1;

	int i = 1;
	while (i < scs)
	{
		t = x / (int)pow(10, scs - i);
		x %= (int)pow(10, scs - i);

		cout << t << ".";
		if (i == scs - 3)
		{
			cout << x;
		}

		i += 3;
	}

	system("pause");
	return 0;
}