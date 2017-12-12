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
	Capricorn_Козерог,
	Aquarius_Водолей,
	Pisces_Рыбы,
	Aries_Овен,
	Taurus_Телец,
	Gemini_Близнецы,


	Cancer_Рак,
	Leo_Лев,
	Virgo_Дева,
	Libra_Весы,
	Scorpio_Скорпион,
	Sagittarius_Стрелец,


};
int main()
{
	HANDLE Hconsole;
	Hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(Hconsole, 9);


	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "Ведиет номер задания ";
	cin >> nz;

	switch (nz)
	{
		/*	1.	Дано трехзначное число.Определить:
		a.является ли произведение его цифр больше числа b;
		b.кратна ли сумма его цифр трем.*/

	case 1:
	{
		int a, b;
		cout << "Ведите трехзначное число |А  ";
		cin >> a;
		cout << "Ведите трехзначное число |B  ";
		cin >> b;
		a < 999 && a>10000;
		b < 999 && b>10000;
		if (a < b)
		{
			cout << " число  a больше числа b " << (a < b) << endl;
		}
		if ((a + b) / 3)
		{
			cout << " Число кратно трем . Ответ" << (a + b / 3) << endl;
		}
		else if ((a < 0 && a>99) || (b < 0 && b>99))
		{
			cout << "Ведите задание заново" << ((a < 0 && a>99) || (b < 0 && b>99)) << endl;
		}
		break;
	}

	//2.	Пользователь вводит порядковый номер пальца руки.
	//	Необходимо показать его название на экран.
	case 2:
	{
		int a;
		cout << " Ведите номер вашего пальца";
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

	/*3.	Необходимо написать программу, которая проверяет пользователя на знание таблицы умножения.Пользователь
	сам вводит два целых однозначных числа.Программа задаёт вопрос : результат умножения первого числа на второе.
	Пользователь должен ввести ответ и увидеть на экране правильно он ответил или нет.Если нет – показать
	еще и правильный результат.*/
	case 3:
	{
		cout << "Здраствуйте сейчас мы проверим вас на знание таблицы умножения " << endl;

		int a, b, itog;

		cout << "Ведите число";
		cin >> a;

		cout << "Ведите число";
		cin >> b;

		cout << "Теперь результат" << endl;
		cin >> itog;

		if (itog == (a*b))
		{
			cout << "Вы ответили правильно";
		}
		else
		{
			cout << "Нет не правильно >> " << a*b << endl;
		}
		break;
	}


	/*4.	Написать программу, которая по дате рождения(день d месяц n) определяет знак Зодиака : с 22 марта по 21 апреля -
	Овен(4); с 22 апреля по 21 мая - Телец(5); с 22 мая по 21 июня - Близнецы(6); с 22 июня по 21 июля - Рак(7); с 22 июля по 21 августа -
	Лев(8); с 22 августа по 21 сентября - Дева(9); 22 сентября по 21 октября - Весы(10); с 22 октября по 21 ноября - Скорпион(11); с 22 ноября по 21
	декабря - Стрелец(12);
	с 22 декабря по 21 января - Козерог(1); 22 января по 21 февраля - Водолей(2); с 22 февраля по 21 марта - Рыбы(3).*/

	case 4:
	{
		int d,n;
		cout << "Ведите ваш день рождения ";
		cin >> d;
		cout << "Ведите ваш месяц рождения ";
		cin >> n;

		 znak_zodiaka t;
	
		 if ((d >=22 && n == 12) || (d<=21 && n==1))
			 t = Capricorn_Козерог;
		 else if ((d >= 22 && n==1) || ( d <=21 && n==2))
			 t = Aquarius_Водолей;
		 else if ((d >= 22 && n==2) || (d <= 21 && n==3))
			 t = Pisces_Рыбы;
		 else if ((d >= 22 && n==3) || (d <= 21 && n==4))
			 t = Aries_Овен;
		 else   if ((d >= 22 && n==4) || (d<=21 && n==5))
			 t = Taurus_Телец;
		 else if ((d >=22 && n==5) || (d<=21 && n==6))
			 t = Gemini_Близнецы;
		 else  if ((d >=22 && n==6) || (d<=21 && n==7))
			 t = Cancer_Рак;
		 else  if ((d >=22 && n==7) || (d<= 21 && n==8))
			 t = Leo_Лев;
		 else  if ((d >= 22 && n==8) || (d <= 21 && n==9))
			 t = Virgo_Дева;
		 else  if ((d >= 22 && n==9) || (d <= 21 && n==10))
			 t = Libra_Весы;
		 else  if ((d >= 22 && n==10) || (d <= 21 && n==11))
			 t = Scorpio_Скорпион;
		 else  if ((d >= 22 && n==11) || (d <= 21 && n==12))
			 t = Sagittarius_Стрелец;

		 switch (t)
		 {
		 case Capricorn_Козерог:
			 cout << "Capricorn_Козерог" << endl;
			 break;
		 case Aquarius_Водолей:
			 break;
			 cout << "Aquarius_Водолей" << endl;
		 case Pisces_Рыбы:
			 cout << "Pisces_Рыбы" << endl;
			 break;
		 case Aries_Овен:
			 cout << "Aries_Овен" << endl;
			 break;
		 case Taurus_Телец:
			 cout << "Taurus_Телец" << endl;
			 break;
		 case Gemini_Близнецы:
			 cout << "Gemini_Близнецы" << endl;
			 break;
		 case Cancer_Рак:
			 cout << "Cancer_Рак" << endl;
			 break;
		 case Leo_Лев:
			 cout << "Leo_Лев" << endl;
			 break;
		 case Virgo_Дева:
			 cout << "Virgo_Дева" << endl;
			 break;
		 case Libra_Весы:
			 cout << "Libra_Весы" << endl;
			 break;
		 case Scorpio_Скорпион:
			 cout << "Scorpio_Скорпион" << endl;
			 break;
		 case Sagittarius_Стрелец:
			 cout << "Sagittarius_Стрелец" << endl;
			 break;
		 default:
			 break;
		 }
		 break;



		
	}


	/*5.	Используя пять вариантов наборов карт 1)«6», «7», «8» 2)«7», «8», «9» 3) «6», «9», «10» 4)«6», «9», «8» 5)«7», «6», «10», 
	сыграйте с компьютером.Введите с клавиатуры свой вариант и сравните с вариантом компьютера, который создайте, используя функцию генератора 
		случайных чисел(три цифры 
	от 6 до 10 включительно без повторения цифры в варианте).Если сумма цифр вашего варианта больше суммы цифр компьютера, вы выиграли*/
	case 5:
	{




	}













	default:
	{
		cout << "Такого задания нету повторите запрос" << endl;
	}
	break;
	}
	system("pause");
	//getch();
}