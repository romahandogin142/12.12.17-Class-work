#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

using namespace std;
enum palci
{
	Thum_bfinger = 1,
	Index_finger_pointer_finger,
	Middle_finger,
	Ring_finder_fourth_finger,
	Little_finger_pinky,

};
enum znak_zodiaka
{
	Capricorn_�������,
	Aquarius_�������,
	Pisces_����,
	Aries_����,
	Taurus_�����,
	Gemini_��������,


	Cancer_���,
	Leo_���,
	Virgo_����,
	Libra_����,
	Scorpio_��������,
	Sagittarius_�������,


};
int main()
{
	HANDLE Hconsole;
	Hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(Hconsole, 9);


	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "������ ����� ������� ";
	cin >> nz;

	switch (nz)
	{
		/*	1.	���� ����������� �����.����������:
		a.�������� �� ������������ ��� ���� ������ ����� b;
		b.������ �� ����� ��� ���� ����.*/

	case 1:
	{
		int a, b;
		cout << "������ ����������� ����� |�  ";
		cin >> a;
		cout << "������ ����������� ����� |B  ";
		cin >> b;
		a < 999 && a>10000;
		b < 999 && b>10000;
		if (a < b)
		{
			cout << " �����  a ������ ����� b " << (a < b) << endl;
		}
		if ((a + b) / 3)
		{
			cout << " ����� ������ ���� . �����" << (a + b / 3) << endl;
		}
		else if ((a < 0 && a>99) || (b < 0 && b>99))
		{
			cout << "������ ������� ������" << ((a < 0 && a>99) || (b < 0 && b>99)) << endl;
		}
		break;
	}

	//2.	������������ ������ ���������� ����� ������ ����.
	//	���������� �������� ��� �������� �� �����.
	case 2:
	{
		int a;
		cout << " ������ ����� ������ ������";
		cin >> a;

		enum palci s;
		s = (palci)a;
		switch (s)
		{
		case Thum_bfinger:
		{
			cout << "Thum_bfinger" << endl;
		}
		break;
		case Index_finger_pointer_finger:
		{
			cout << "Index_finger_pointer_finger" << endl;
		}
		break;
		case Middle_finger:
		{
			cout << "Middle_finger" << endl;
		}
		break;
		case Ring_finder_fourth_finger:
		{
			cout << "Ring_finder_fourth_finger" << endl;
		}
		break;
		case Little_finger_pinky:
		{
			cout << "Little_finger_pinky" << endl;
		}
		break;
		}
		break;
	}

	/*3.	���������� �������� ���������, ������� ��������� ������������ �� ������ ������� ���������.������������
	��� ������ ��� ����� ����������� �����.��������� ����� ������ : ��������� ��������� ������� ����� �� ������.
	������������ ������ ������ ����� � ������� �� ������ ��������� �� ������� ��� ���.���� ��� � ��������
	��� � ���������� ���������.*/
	case 3:
	{
		cout << "����������� ������ �� �������� ��� �� ������ ������� ��������� " << endl;

		int a, b, itog;

		cout << "������ �����";
		cin >> a;

		cout << "������ �����";
		cin >> b;

		cout << "������ ���������" << endl;
		cin >> itog;

		if (itog == (a*b))
		{
			cout << "�� �������� ���������";
		}
		else
		{
			cout << "��� �� ��������� >> " << a*b << endl;
		}
		break;
	}


	/*4.	�������� ���������, ������� �� ���� ��������(���� d ����� n) ���������� ���� ������� : � 22 ����� �� 21 ������ -
	����(4); � 22 ������ �� 21 ��� - �����(5); � 22 ��� �� 21 ���� - ��������(6); � 22 ���� �� 21 ���� - ���(7); � 22 ���� �� 21 ������� -
	���(8); � 22 ������� �� 21 �������� - ����(9); 22 �������� �� 21 ������� - ����(10); � 22 ������� �� 21 ������ - ��������(11); � 22 ������ �� 21
	������� - �������(12);
	� 22 ������� �� 21 ������ - �������(1); 22 ������ �� 21 ������� - �������(2); � 22 ������� �� 21 ����� - ����(3).*/

	case 4:
	{
		int d,n;
		cout << "������ ��� ���� �������� ";
		cin >> d;
		cout << "������ ��� ����� �������� ";
		cin >> n;

		 znak_zodiaka t;
	
		 if ((d >=22 && n == 12) || (d<=21 && n==1))
			 t = Capricorn_�������;
		 else if ((d >= 22 && n==1) || ( d <=21 && n==2))
			 t = Aquarius_�������;
		 else if ((d >= 22 && n==2) || (d <= 21 && n==3))
			 t = Pisces_����;
		 else if ((d >= 22 && n==3) || (d <= 21 && n==4))
			 t = Aries_����;
		 else   if ((d >= 22 && n==4) || (d<=21 && n==5))
			 t = Taurus_�����;
		 else if ((d >=22 && n==5) || (d<=21 && n==6))
			 t = Gemini_��������;
		 else  if ((d >=22 && n==6) || (d<=21 && n==7))
			 t = Cancer_���;
		 else  if ((d >=22 && n==7) || (d<= 21 && n==8))
			 t = Leo_���;
		 else  if ((d >= 22 && n==8) || (d <= 21 && n==9))
			 t = Virgo_����;
		 else  if ((d >= 22 && n==9) || (d <= 21 && n==10))
			 t = Libra_����;
		 else  if ((d >= 22 && n==10) || (d <= 21 && n==11))
			 t = Scorpio_��������;
		 else  if ((d >= 22 && n==11) || (d <= 21 && n==12))
			 t = Sagittarius_�������;

		 switch (t)
		 {
		 case Capricorn_�������:
			 cout << "Capricorn_�������" << endl;
			 break;
		 case Aquarius_�������:
			 break;
			 cout << "Aquarius_�������" << endl;
		 case Pisces_����:
			 cout << "Pisces_����" << endl;
			 break;
		 case Aries_����:
			 cout << "Aries_����" << endl;
			 break;
		 case Taurus_�����:
			 cout << "Taurus_�����" << endl;
			 break;
		 case Gemini_��������:
			 cout << "Gemini_��������" << endl;
			 break;
		 case Cancer_���:
			 cout << "Cancer_���" << endl;
			 break;
		 case Leo_���:
			 cout << "Leo_���" << endl;
			 break;
		 case Virgo_����:
			 cout << "Virgo_����" << endl;
			 break;
		 case Libra_����:
			 cout << "Libra_����" << endl;
			 break;
		 case Scorpio_��������:
			 cout << "Scorpio_��������" << endl;
			 break;
		 case Sagittarius_�������:
			 cout << "Sagittarius_�������" << endl;
			 break;
		 default:
			 break;
		 }
		 break;



		
	}


	/*5.	��������� ���� ��������� ������� ���� 1)�6�, �7�, �8� 2)�7�, �8�, �9� 3) �6�, �9�, �10� 4)�6�, �9�, �8� 5)�7�, �6�, �10�, 
	�������� � �����������.������� � ���������� ���� ������� � �������� � ��������� ����������, ������� ��������, ��������� ������� ���������� 
		��������� �����(��� ����� 
	�� 6 �� 10 ������������ ��� ���������� ����� � ��������).���� ����� ���� ������ �������� ������ ����� ���� ����������, �� ��������*/
	case 5:
	{




	}













	default:
	{
		cout << "������ ������� ���� ��������� ������" << endl;
	}
	break;
	}
	system("pause");
	//getch();
}