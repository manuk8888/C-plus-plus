#include <iostream>

int main() {
    std::cout << "Задача 1. Симулятор маршрутки \n";
    int passangers;
    int passangers_out;
    int passangers_input;
    int ticket_price = 20;
    std::cout <<"Сколько пасажиров в салоне? \n";
    std::cin >> passangers;
    int profit = passangers * ticket_price;

    std::cout << "Прибываем к первой остановке. Сколько пасажиров в салоне: " << passangers <<"\n";
    std::cout << "Остановка первая\n";
    std::cout << "Сколько пассажиров вышло на остановке?\n";
    std::cin >> passangers_out;
    std::cout << "Сколько пассажиров зашло на остановке?\n";
    std::cin >> passangers_input;
    passangers +=passangers_input - passangers_out;
    std::cout << "Отправляемся с первой остановки. В салоне пассажиров: " << passangers <<"\n";
    profit += ticket_price * passangers_input;

    std::cout << "Прибываем ко второй остановке. Пасажиров в салоне: " << passangers <<"\n";
    std::cout << "Остановка вторая \n";
    std::cout << "Сколько пассажиров вышло на остановке? \n";
    std::cin >> passangers_out;
    std::cout << "Сколько пассажиров зашло на остановке?\n";
    std::cin >> passangers_input;
    passangers +=passangers_input - passangers_out;
    std::cout << "Отправляемся с второй остановки. В салоне пассажиров: " << passangers<<"\n";
    profit += ticket_price * passangers_input;

    std::cout << "Прибываем к третьей остановке. Пасажиров в салоне: " << passangers << "\n";
    std::cout << "Остановка третья\n";
    std::cout << "Остановка третья\n";
    std::cout << "Сколько пассажиров вышло на остановке?\n";
    std::cin >> passangers_out;
    std::cout << "Сколько пассажиров зашло на остановке?\n";
    std::cin >> passangers_input;
    passangers +=passangers_input - passangers_out;
    std::cout << "Отправляемся с третьей остановки. В салоне пассажиров: " << passangers <<"\n";
    profit += ticket_price * passangers_input;

    std::cout << "Прибываем к четвертой остановке. Пасажиров в салоне: " << passangers << "\n";
    std::cout << "Остановка четвертая\n";
    std::cout << "Остановка четвертая\n";
    std::cout << "Сколько пассажиров вышло на остановке?\n";
    std::cin >> passangers_out;
    std::cout << "Сколько пассажиров зашло на остановке?\n";
    std::cin >> passangers_input;
    passangers +=passangers_input - passangers_out;
    std::cout << "Отправляемся с четвертой остановки. В салоне пассажиров: " << passangers << "\n";
    profit += ticket_price * passangers_input;

    int wage = profit / 5;
    int fuel = profit / 4;
    int tax = profit / 4;
    int repair_car = profit /4;
    int net_profit = profit - wage - fuel - tax - repair_car;
    std::cout << "Всего заработали: " << profit << "руб.\n";
    std::cout << "Зарплата водителя: " << wage << "руб.\n";
    std::cout << "Расходы на топливо: " << fuel << "руб.\n";
    std::cout << "Налоги: " << tax<< "руб.\n";
    std::cout << "Расходы на ремонт машины: " << repair_car << "руб.\n";
    std::cout << "Итого доход: " << net_profit << "руб.\n";
    std::cout << "\n";
    std::cout << "Задача 2. Обмен местами\n";

    int a = 42;
    int b = 153;
    std::cout << "a: " << a << "\n"; /* На экран будет выведено 42 */
    std::cout << "b: " << b << "\n"; /* На экран будет выведено 153 */

    /* Меняем значения */

    std::cout << "a: " << b << "\n"; /* На экран будет выведено 153 */
    std::cout << "b: " << a << "\n"; /* На экран будет выведено 42 */
    std::cout << "\n";
    std::cout << "Задача 3. Злостные вредители\n";
     int growing = 50;
     int decreases = 20;
     int height = 0;

     height = (growing - decreases) * 2 + growing;
     std::cout << "высота бамбука в середине третьего дня будет: " << height << "\n";
    std::cout << "\n";
    std::cout << "Задача 4 (дополнительная). Повышаем градус сложности*\n";
    int a = 5;
    int b = 10;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    // Обмен значениями без использования третьей переменной
    a = a + b;  // a теперь содержит сумму a и b
    b = a - b;  // b теперь содержит исходное значение a
    a = a - b;  // a теперь содержит исходное значение b

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}
