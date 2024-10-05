#include <iostream>
#include <Windows.h>

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//������� 1
    double distance, time;

    std::cout << "������� ���������� �� ��������� (� ����������): ";
    std::cin >> distance;

    std::cout << "������� �����, �� ������� ����� ������� (� �����): ";
    std::cin >> time;

    if (time <= 0) {
        std::cout << "������: ����� ������ ���� ������ ����\n";
    }
    else {
        std::cout << "��� ����� ����� �� ���������: " << distance / time << " ��/�\n\n";
    }

	//������� 2
    int startHours, startMinutes, startSeconds;
    int endHours, endMinutes, endSeconds;

    std::cout << "������� ����� ������ (����, ������, �������): ";
    std::cin >> startHours >> startMinutes >> startSeconds;

    std::cout << "������� ����� ���������� (����, ������, �������): ";
    std::cin >> endHours >> endMinutes >> endSeconds;

    int startInSeconds = startHours * 3600 + startMinutes * 60 + startSeconds;
    int endInSeconds = endHours * 3600 + endMinutes * 60 + endSeconds;

    if (endInSeconds < startInSeconds) 
    {
        endInSeconds += 24 * 3600;
    }

    int durationInMinutes = (endInSeconds - startInSeconds) / 60;

    int cost = durationInMinutes * 2;

    std::cout << "��������� �������: " << cost << " ������.\n\n";

    //������� 3
    double fuelConsumption;
    double fuelPrice1, fuelPrice2, fuelPrice3;

    std::cout << "������� ���������� �� ������ ���������� (� ��): ";
    std::cin >> distance; //���������� �������������� �� ���������� ��� � ������ �������

    std::cout << "������� ������ ������� �� 100 �� (� ������): ";
    std::cin >> fuelConsumption;

    std::cout << "������� ��������� ������� ���� �������: ";
    std::cin >> fuelPrice1;

    std::cout << "������� ��������� ������� ���� �������: ";
    std::cin >> fuelPrice2;

    std::cout << "������� ��������� �������� ���� �������: ";
    std::cin >> fuelPrice3;

    double totalFuel = (fuelConsumption / 100) * distance;

    double cost1 = totalFuel * fuelPrice1;
    double cost2 = totalFuel * fuelPrice2;
    double cost3 = totalFuel * fuelPrice3;

    std::cout << "\n������������� ������� ��������� �������:\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "| ��� ������� | ��������� �������\t\t|\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "| 1 \t\t| " << cost1 << " \t\t\t|\n";
    std::cout << "| 2 \t\t| " << cost2 << " \t\t\t|\n";
    std::cout << "| 3 \t\t| " << cost3 << " \t\t\t|\n";
    std::cout << "-------------------------------------------------\n";

	return 0;
}