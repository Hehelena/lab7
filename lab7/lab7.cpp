﻿/*Задание к теме 7.
1. Дано значение угла α в градусах(0 < α < 360).Определить значение этого же угла в радианах, учитывая, что 180◦ = π радианов.
	2. Дано значение угла α в радианах(0 < α < 2·π).Определить значение этого же угла в градусах, учитывая, что 180◦ = π радианов
	3. Известно, что X кг конфет стоит A рублей.Определить, сколько стоит 1 кг и Y кг этих же конфет.
	4. Скорость первого автомобиля V1 км / ч, второго — V2 км / ч, расстояние между ними S км.Определить расстояние между ними через T часов, если автомобили удаляются друг от друга.
	5. Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B(коэффициент A не равен 0).
	6. Найти решение системы линейных уравнений вида
	A1·x + B1·y = C1,
	A2·x + B2·y = C2,
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a,b,y;
	float pi = 3.14;
	cout << "1)Введите значиние угла в градусах" << endl;
	cin >> a;
	b = a*pi/180;
	cout << b << endl;
	cout << "2)Введите значиние угла в радианах" << endl;
	cin >> a;
	b = 180 * a / pi;
	cout << b << endl;
	cout << "Введите массу конфет в кг" << endl;
	cin >> a;
	cout << "3)Введите стоимость  конфет" << endl;
	cin >> b;
	b = b / a;
	cout << "цена за 1кг конфет" << b << endl;
	cout << "Введите массу Y конфет" << endl;
	cin >> y;
	b = b * y;
	cout << "цена за Y кг конфет" << b << endl;
	float v1, v2, s, t;
	cout << "4)Введите V1,V2,S и T"<<endl;
	cin >> v1 >> v2 >> s >> t;
	s= s + t * (v1 + v2);
	cout << "расстояние между машинами через T часов: " << s << endl;
	cout << "5)Введите A и B" << endl;
	cin >> a >> b;
	cout << "x= " << -(b / a) << endl;
	float a1,b1,c1,a2,b2,c2;
	cout << "6)Введите A1,B1 и C1" << endl;
	cin >> a1 >> b1>>c1;
	cout << "Введите A2,B2 и C2" << endl;
	cin >> a2 >> b2>>c2;
	b = a1 * b2 - a2 * b1;
	cout << "x =" << ((c1*b2 - c2 * b1) / b) << endl;
	cout << "y =" << ((a1*c2 - a2 * c1) / b) << endl;
}


