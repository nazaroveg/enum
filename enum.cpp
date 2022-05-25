// enum1.cpp 
//nazaroveg@yandex.ru

#include <iostream>

enum class month { January = 1, February, March, April, May, June, July, August, September, October, November, December };


int main()
{
	setlocale(LC_ALL, "RUS");
	std::cout << "что бы завершить программу нажмите: 0 \n";

	int numberMonth = 0;


	do
	{
		std::cout << "\nВвидите номер месяца:\n";
		std::cin >> numberMonth;
		if (numberMonth == 0)
		{
			std::cout << "До свидания";
			break;
		}

		if (numberMonth > 0 && numberMonth < 13)
		{

			switch (numberMonth)
			{
			case static_cast<int> (month::January):
			{
				std::cout << "Январь";
				break;
			}
			case static_cast<int> (month::February):
			{
				std::cout << "Февраль";
				break;
			}
			case static_cast<int> (month::March):
			{
				std::cout << "Март";
				break;
			}
			case static_cast<int> (month::April):
			{
				std::cout << "Апрель";
				break;
			}
			case static_cast<int> (month::May):
			{
				std::cout << "Май";
				break;
			}
			case static_cast<int> (month::June):
			{
				std::cout << "Июнь";
				break;
			}
			case static_cast<int> (month::July):
			{
				std::cout << "Июль";
				break;
			}
			case static_cast<int> (month::August):
			{
				std::cout << "Август";
				break;
			}
			case static_cast<int> (month::September):
			{
				std::cout << "Сентябрь";
				break;
			}
			case static_cast<int> (month::October):
			{
				std::cout << "Октябрь";
				break;
			}
			case static_cast<int> (month::November):
			{
				std::cout << "ноябрь";
				break;
			}
			case static_cast<int> (month::December):
			{
				std::cout << "Декабрь";
				break;
			}


			default:
				break;
			}


		}
		else
		{
			std::cout << "Непавильный номер!, ввидите от 1 до 12";
		}
	} while (numberMonth != 0);


}

