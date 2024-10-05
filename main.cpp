#include <iostream>
#include <Windows.h>

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Задание 1
    double distance, time;

    std::cout << "Введите расстояние до аэропорта (в километрах): ";
    std::cin >> distance;

    std::cout << "Введите время, за которое нужно доехать (в часах): ";
    std::cin >> time;

    if (time <= 0) {
        std::cout << "Ошибка: Время должно быть больше нуля\n";
    }
    else {
        std::cout << "Вам нужно ехать со скоростью: " << distance / time << " км/ч\n\n";
    }

	//Задание 2
    int startHours, startMinutes, startSeconds;
    int endHours, endMinutes, endSeconds;

    std::cout << "Введите время начала (часы, минуты, секунды): ";
    std::cin >> startHours >> startMinutes >> startSeconds;

    std::cout << "Введите время завершения (часы, минуты, секунды): ";
    std::cin >> endHours >> endMinutes >> endSeconds;

    int startInSeconds = startHours * 3600 + startMinutes * 60 + startSeconds;
    int endInSeconds = endHours * 3600 + endMinutes * 60 + endSeconds;

    if (endInSeconds < startInSeconds) 
    {
        endInSeconds += 24 * 3600;
    }

    int durationInMinutes = (endInSeconds - startInSeconds) / 60;

    int cost = durationInMinutes * 2;

    std::cout << "Стоимость поездки: " << cost << " гривен.\n\n";

    //Задание 3
    double fuelConsumption;
    double fuelPrice1, fuelPrice2, fuelPrice3;

    std::cout << "Введите расстояние до пункта назначения (в км): ";
    std::cin >> distance; //Переменная перезаписалась но объявилась ещё в первом задании

    std::cout << "Введите расход бензина на 100 км (в литрах): ";
    std::cin >> fuelConsumption;

    std::cout << "Введите стоимость первого вида бензина: ";
    std::cin >> fuelPrice1;

    std::cout << "Введите стоимость второго вида бензина: ";
    std::cin >> fuelPrice2;

    std::cout << "Введите стоимость третьего вида бензина: ";
    std::cin >> fuelPrice3;

    double totalFuel = (fuelConsumption / 100) * distance;

    double cost1 = totalFuel * fuelPrice1;
    double cost2 = totalFuel * fuelPrice2;
    double cost3 = totalFuel * fuelPrice3;

    std::cout << "\nСравнительная таблица стоимости поездки:\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "| Вид бензина | Стоимость поездки\t\t|\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "| 1 \t\t| " << cost1 << " \t\t\t|\n";
    std::cout << "| 2 \t\t| " << cost2 << " \t\t\t|\n";
    std::cout << "| 3 \t\t| " << cost3 << " \t\t\t|\n";
    std::cout << "-------------------------------------------------\n";

	return 0;
}