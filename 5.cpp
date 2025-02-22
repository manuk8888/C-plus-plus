#include <iostream>
#include <algorithm>
#include <ctime>

// Задание 1. Полёт нормальный!
void task1() {
    int speed, altitude;

    std::cout << "Введите скорость самолета (км/ч): ";
    std::cin >> speed;

    std::cout << "Введите высоту самолета (метры): ";
    std::cin >> altitude;

    if (speed >= 750 && speed <= 850 && altitude >= 9000 && altitude <= 9500) {
        std::cout << "Полёт нормальный!" << std::endl;
    } else {
        std::cout << "Отклонение от нормы!" << std::endl;
    }
}

// Задание 2. Майские!
void task2() {
    int day;

    std::cout << "Введите номер дня мая: ";
    std::cin >> day;

    if (day < 1 || day > 31) {
        std::cout << "Некорректный день!" << std::endl;
        return;
    }

    if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10) || (day % 7 == 6) || (day % 7 == 0)) {
        std::cout << "Выходной" << std::endl;
    } else {
        std::cout << "Рабочий день" << std::endl;
    }
}

// Задание 3. Майские — усложнение
void task3() {
    int day, startDay;

    std::cout << "Введите номер дня недели, с которого начинается май (1-понедельник, 7-воскресенье): ";
    std::cin >> startDay;

    if (startDay < 1 || startDay > 7) {
        std::cout << "Некорректный день недели!" << std::endl;
        return;
    }

    std::cout << "Введите номер дня мая: ";
    std::cin >> day;

    if (day < 1 || day > 31) {
        std::cout << "Некорректный день!" << std::endl;
        return;
    }

    int dayOfWeek = (startDay + day - 1) % 7;

    if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10) || dayOfWeek == 0 || dayOfWeek == 6) {
        std::cout << "Выходной" << std::endl;
    } else {
        std::cout << "Рабочий день" << std::endl;
    }
}

// Задание 4. Банкомат — 2
void task4() {
    int N;
    std::cout << "Введите сумму для снятия: ";
    std::cin >> N;

    if (N % 100 != 0) {
        std::cout << "Невозможно выдать сумму, не кратную 100." << std::endl;
        return;
    }

    if (N > 150000) {
        std::cout << "Превышен лимит суммы за один раз." << std::endl;
        return;
    }

    int denominations[] = {5000, 2000, 1000, 500, 200, 100};
    int count[6] = {0};

    for (int i = 0; i < 6; ++i) {
        count[i] = N / denominations[i];
        N %= denominations[i];
    }

    std::cout << "Купюры для выдачи:" << std::endl;
    for (int i = 0; i < 6; ++i) {
        if (count[i] > 0) {
            std::cout << denominations[i] << " руб.: " << count[i] << " шт." << std::endl;
        }
    }
}

// Задание 5. Усложнение задачи про кирпич
void task5() {
    int A, B, C, M, N, K;

    std::cout << "Введите размеры первой коробки (A B C): ";
    std::cin >> A >> B >> C;

    std::cout << "Введите размеры второй коробки (M N K): ";
    std::cin >> M >> N >> K;

    int box1[] = {A, B, C};
    int box2[] = {M, N, K};

    std::sort(box1, box1 + 3);
    std::sort(box2, box2 + 3);

    if (box1[0] <= box2[0] && box1[1] <= box2[1] && box1[2] <= box2[2]) {
        std::cout << "Первая коробка помещается во вторую." << std::endl;
    } else {
        std::cout << "Первая коробка не помещается во вторую." << std::endl;
    }
}

// Задание 6. Грустное совершеннолетие
void task6() {
    int birthYear, birthMonth, birthDay;
    int currentYear, currentMonth, currentDay;

    std::cout << "Введите дату рождения (год месяц день): ";
    std::cin >> birthYear >> birthMonth >> birthDay;

    std::cout << "Введите текущую дату (год месяц день): ";
    std::cin >> currentYear >> currentMonth >> currentDay;

    int age = currentYear - birthYear;

    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    if (age > 18 || (age == 18 && currentMonth > birthMonth) || (age == 18 && currentMonth == birthMonth && currentDay > birthDay)) {
        std::cout << "Можно" << std::endl;
    } else {
        std::cout << "Нельзя" << std::endl;
    }
}

int main() {
    int choice;
    std::cout << "Выберите задание (1-6): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        case 6:
            task6();
            break;
        default:
            std::cout << "Некорректный выбор!" << std::endl;
            break;
    }

    return 0;
}
