// ConsoleApplication33.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>
#include <math.h>


int main()
{
	//1.	Программа подсчета идеального веса к росту. Ввести рост и вес, вывести сообщение о том,
	//сколько  нужно кг набрать или сбросить (идеальный вес = рост – 110 для девушек, и -100 для парней).
	
	std::string sex;
	float hight, mass, imass;
	int m = 100;
	int w = 110;
	
	
	std::cout << "BAsh TIOL (m, w) \n";
	std::getline(std::cin, sex);
	
	if (sex == "m" || sex == "w") {
		std::cout << "BAsh POCT (m) \n";
		std::cin >> hight;
		std::cout << "BAsh BEC (kg) \n";
		std::cin >> mass;
		if (sex == "m") {
			imass = mass - (hight * 100 - m);
			if (imass < 0) {
				std::cout << "BAM HADO HAbPATb - " << abs(imass) << "kg\n";
			}
			else if (imass > 0) {
				std::cout << "BAM HADO TIOXYDETb HA - " << imass << "kg\n";
			}
			else {
				std::cout << "Y BAC UDEALbHblU BEC!! \n";
			}
		}
		else {
			imass = mass - (hight * 100 - w);
			if (imass < 0) {
				std::cout << "BAM HADO HAbPATb - " << abs(imass) << "kg\n";
			}
			else if (imass > 0) {
				std::cout << "BAM HADO TIOXYDETb HA - " << imass << "kg\n";
			}
			else {
				std::cout << "Y BAC UDEALbHblU BEC!! \n";
			}
		}
	}
	else {
		while (sex != "m" || sex != "w") {
			std::cout << "BAsh TIOL (m, w) \n";
			std::getline(std::cin, sex);
		}
	}
	
	
	//2.	Ввести любую дату (день, месяц и год вводятся по отдельности). Проверить корректность введённых значений. Вывести дату следующего дня.
	
	int d, m, y;
	int Mon[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	std::cout << "DEHb, MECYAZ, GOD: \n";
	std::cin >> d >> m >> y;
	
	if (d > Mon[m - 1] || m > 12)
	{
		std::cout << "???" << "\n";
	}
	if (d < Mon[m - 1] || (m == 2 && y % 4 == 0))
		d++;
	else if (m == 12 && d == 31)
	{
		y++;
		d = 1;
		m = 1;
	}
	else
	{
		m++;
		d = 1;
	}
	
	std::cout << "CLEDYYUshUU DEHb: " << d << " ,MECYAZ: " << m << " ,GOD: " << y << "\n";
	
	//3.	Пользователь вводит с клавиатуры количество градусов по Цельсию, которое соответствует предполагаемой температуре за окном.
	//Программа сообщает, тепло сейчас или холодно, жарко или мороз, а также генерирует прогноз погоды на завтра, 
	//с указанием скорости ветра, возможных осадков и температуры воды в Чёрном море.
	
	int gr;
	std::cout << "GRADYSbl: \n";
	std::cin >> gr;
	
	if (gr >= 12 && gr < 27) {
		std::cout << "TETILO \n";
	}
	else if (gr < 12 && gr > 2) {
		std::cout << "XOLODNO \n";
	}
	else if (gr >= 27 && gr < 60) {
		std::cout << "JkCAPKO \n";
	}
	else if (gr <= 2 && gr > -25) {
		std::cout << "MOPO3 \n";
	}
	else {
		std::cout << "COchYBCTBYYU(( \n";
	}
	
	std::cout << "TIOGODA HA 3ABTPA: \n TEMTIEPATYPA: " << gr + 2 << "°C, CKOPOCTb BETPA: " << g % 2 << "km/h, TEMTIEPATYPA BODbl: " << gr - 10 << "°C \n";

	4.	Валера купил N куриц по M гривен за одну курицу. Каждая курица несёт по X яиц в неделю.
	Валера решил открыть свой бизнес и стал продавать яйца, которые несут курицы. За сколько дней окупятся куры,
	если продавать яйца по Z гривен за десяток (с учётом НДС, но без учёта сбора в ПФ)?
	Сроком жизни куриц, влажностью воздуха в курятнике, а также скоростью ветра и фазами луны можно пренебречь.



	int n, m, x, z, plan, zara, days;

	std::cout << "KOLBO KYP: \n";
	std::cin >> n;
	std::cout << "CTOUMOCTb 1 KYPUZbl (grn): \n";
	std::cin >> m;
	std::cout << "KOLBO YAUZ C ODHOU KYPUZbl 3A HEDELYU: \n";
	std::cin >> x;
	std::cout << "ZEHA 3A DECYATOK: \n";
	std::cin >> z;

	plan = n * m;
	zara = 0;
	days = 0;

	srand(m - n);
	while (zara < plan) {
		zara += n * x - (rand() % 10) * (z / 10.0);
		days++;
	}
	std::cout << "BALEPA OKYTIUL KYP 3A: " << days << " DHEU \n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
