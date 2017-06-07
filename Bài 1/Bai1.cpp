//Nhap vao hai phan so. Tinh tong hieu tich thuong vaf xuat ra ket qua o dang rut gon???

#include <iostream>

using namespace std;

int main()
{
	int t1, t2, m1, m2, a, b, c, d;
	int tong, hieu, tich, tuthuong, mauthuong, mautong, mauhieu, mautich;

	do{
		cout << "\nNhap vao tu so cua phan so thu nhat: ";
		cin >> t1;
		cout << "\nNhap vao mau so cua phan so thu nhat: ";
		cin >> m1;
		cout << "\nNhap vao tu so cua phan so thu hai: ";
		cin >> t2 ;
		cout << "\nNhap vao mau so cua phan so thu hai: ";
		cin >> m2;
		if (m1 == 0 || m2 == 0)
		{
			cout << "\nMau so phai khac 0! Hay kiem tra lai!";
		}
	} while (m1 == 0 || m2 == 0);

	//Tong
	tong = t1*m2 + t2*m1;
	mautong = m1*m2;
	for (int i = 1;; ++i)
	{
		int t = tong % mautong;
		tong = mautong;
		mautong = t;
		if (t == 0)
		{
			a = fabs((double)tong);
			break;
		}
	}
	if (((m1*m2) / a))
	{
		cout << "\nTong cua hai phan so " << t1 << "/" << m1 << " va " << t2 << "/" << m2 << " la: " << ((t1*m2 + t2*m1) / a);
	}
	else
	{
		cout << "\nTong cua hai phan so " << t1 << "/" << m1 << " va " << t2 << "/" << m2 << " la: " << ((t1*m2 + t2*m1) / a) << "/" << ((m1*m2) / a);
	}

	//Hieu
	hieu = t1*m2 - t2*m1;
	mauhieu = m1*m2;
	for (int i = 1;; ++i)
	{
		int t = hieu % mauhieu;
		hieu = mauhieu;
		mauhieu = t;
		if (t == 0)
		{
			b = fabs((double)hieu);
			break;
		}
	}
	if (((m1*m2) / b) == 1)
	{
		cout << "\nHieu cua hai phan so " << t1 << "/" << m1 << " va " << t2 << "/" << m2 << " la: " << ((t1*m2 - t2*m1) / b);
	}
	else
	{
		cout << "\nHieu cua hai phan so " << t1 << "/" << m1 << " va " << t2 << "/" << m2 << " la: " << ((t1*m2 - t2*m1) / b) << "/" << ((m1*m2) / b);
	}

	//Tich
	tich = t1*t2;
	mautich = m1*m2;
	for (int i = 1;; ++i)
	{
		int t = tich % mautich;
		tich = mautich;
		mautich = t;
		if (t == 0)
		{
			c = fabs((double)tich);
			break;
		}
	}

	if (((m1*m2) / c) == 1)
	{
		cout << "\nTich cua hai phan so " << t1 << "/" << m1 << " va " << t2 << "/" << m2 << " la: " << ((t1*t2) / c);
	}
	else
	{
		cout << "\nTich cua hai phan so " << t1 << "/" << m1 << " va " << t2 << "/" << m2 << " la: " << ((t1*t2) / c) << "/" << ((m1*m2) / c);
	}
	

	//Thuong
	tuthuong = t1*m2;
	mauthuong = m1*t2;
	for (int i = 1;; ++i)
	{
		int t = tuthuong % mauthuong;
		tuthuong = mauthuong;
		mauthuong = t;
		if (t == 0)
		{
			d = fabs((double)tuthuong);
			break;
		}
	}
	if (((m1*t2) / d) == 1)
	{
		cout << "\nThuong cua hai phan so " << t1 << "/" << m1 << " va " << t2 << "/" << m2 << " la: " << ((t1*m2) / d);
	}
	else
	{
		cout << "\nThuong cua hai phan so " << t1 << "/" << m1 << " va " << t2 << "/" << m2 << " la: " << ((t1*m2) / d) << "/" << ((m1*t2) / d);
	}
	

	system("pause");
	return 0;
}