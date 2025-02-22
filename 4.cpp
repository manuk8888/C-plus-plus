#include <iostream>
using namespace std;

// Задание 1. Минимум из двух чисел
void task1() {
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    cout << "-----Проверяем-----" << endl;
    if (a < b) {
        cout << "Наименьшее число: " << a << endl;
    } else if (b < a) {
        cout << "Наименьшее число: " << b << endl;
    } else {
        cout << "Числа равны!" << endl;
    }
}

// Задание 2. Складываем в уме
void task2() {
    int a, b, sum;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите их сумму: ";
    cin >> sum;

    cout << "-----Проверяем-----" << endl;
    if (sum == a + b) {
        cout << "Верно!" << endl;
    } else {
        cout << "Ошибка! Верный результат: " << a + b << endl;
    }
}

// Задание 3. Проверка на чётное число
void task3() {
    int x;
    cout << "Введите число: ";
    cin >> x;

    cout << "-----Проверяем-----" << endl;
    if (x % 2 == 0) {
        cout << "Число " << x << " — чётное" << endl;
    } else {
        cout << "Число " << x << " — нечётное" << endl;
    }
}

// Задание 4. Калькулятор опыта
void task4() {
    int exp;
    cout << "Введите число очков опыта: ";
    cin >> exp;

    cout << "-----Считаем-----" << endl;
    if (exp < 1000) {
        cout << "Ваш уровень: 1" << endl;
    } else if (exp < 2500) {
        cout << "Ваш уровень: 2" << endl;
    } else if (exp < 5000) {
        cout << "Ваш уровень: 3" << endl;
    } else {
        cout << "Ваш уровень: 4" << endl;
    }
}

// Задание 5. Кратность числа
void task5() {
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    cout << "-----Проверяем-----" << endl;
    if (a % b == 0) {
        cout << "Да, " << a << " делится на " << b << " без остатка!" << endl;
    } else {
        cout << "Нет, " << a << " не делится на " << b << " без остатка!" << endl;
    }
}

// Задание 6. Улучшим барберов
void task6() {
    int people, barbers;
    cout << "Введите число людей: ";
    cin >> people;
    cout << "Введите число барберов: ";
    cin >> barbers;

    int hours_per_month = 8 * 30; // 8 часов в день, 30 дней в месяце
    int total_hours_needed = people; // каждый клиент требует 1 час

    if ((barbers * hours_per_month) % total_hours_needed == 0) {
        cout << "Барберов хватает!" << endl;
    } else {
        cout << "Барберов не хватает!" << endl;
    }
}

// Задание 7. Меню ресторана
void task7() {
    int day;
    cout << "Введите день недели (от 1 до 7): ";
    cin >> day;

    cout << "Меню сегодня (";

    switch (day) {
        case 1: cout << "понедельник):\nГороховый суп\nСалат «Цезарь» с креветками\nКуриная ножка с пюре\nМорс\n"; break;
        case 2: cout << "вторник):\nХарчо\nСалат «Оливье»\nБаварские колбаски с капустой\nМорс\n"; break;
        case 3: cout << "среда):\nБорщ\nСалат «Греческий»\nСвиная отбивная с гречкой\nМорс\n"; break;
        case 4: cout << "четверг):\nГороховый суп\nСалат «Цезарь» с креветками\nКуриная ножка с пюре\nМорс\n"; break;
        case 5: cout << "пятница):\nУха\nСалат «Винегрет»\nРыбное филе с рисом\nМорс\n"; break;
        case 6: cout << "суббота):\nСолянка\nСалат «Капрезе»\nГовядина с овощами\nМорс\n"; break;
        case 7: cout << "воскресенье):\nЩи\nСалат «Мимоза»\nУтка с яблоками\nМорс\n"; break;
        default: cout << "Неверный день недели!\n"; break;
    }
}

// Задание 8. Зарплата (дополнительное задание)
void task8() {
    int salary1, salary2, salary3;
    cout << "Введите зарплату первого сотрудника: ";
    cin >> salary1;
    cout << "Введите зарплату второго сотрудника: ";
    cin >> salary2;
    cout << "Введите зарплату третьего сотрудника: ";
    cin >> salary3;

    int max_salary = max(salary1, max(salary2, salary3));
    int min_salary = min(salary1, min(salary2, salary3));
    int average_salary = (salary1 + salary2 + salary3) / 3;

    cout << "-----Считаем-----" << endl;
    cout << "Самая высокая зарплата в отделе: " << max_salary << " рублей" << endl;
    cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << max_salary - min_salary << " рублей" << endl;
    cout << "Средняя зарплата в отделе: " << average_salary << " рублей" << endl;
}

// Задание 9. Прогрессивный налог (дополнительное задание)
void task9() {
    int income;
    cout << "Введите ваш доход: ";
    cin >> income;

    int tax = 0;
    if (income > 50000) {
        tax += (income - 50000) * 0.30;
        income = 50000;
    }
    if (income > 10000) {
        tax += (income - 10000) * 0.20;
        income = 10000;
    }
    tax += income * 0.13;

    cout << "Сумма налога: " << tax << " рублей" << endl;
}

int main() {
    int choice;
    cout << "Выберите задание (1-9): ";
    cin >> choice;

    switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 6: task6(); break;
        case 7: task7(); break;
        case 8: task8(); break;
        case 9: task9(); break;
        default: cout << "Неверный выбор!" << endl; break;
    }

    return 0;
}
