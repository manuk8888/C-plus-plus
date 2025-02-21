#include <iostream>

int main() {
  std::cout << "Задание 1. Улучшаем гонщика\n";
  int lap = 4;
  int engine = 254;
  int wheels = 93;
  int steerinWheel = 49;
  int wind = 21;
  int rain = 17;
  int speed = engine + wheels + steerinWheel - wind - rain;
  std::cout << "===================\n";
  std::cout << "Супер гонки. Круг " << lap << "\n";
  std::cout << "===================\n";
  std::cout << "Шумахер (" << speed << ")\n";
  std::cout << "===================\n";
  std::cout << "Водитель: Шумахер\n";
  std::cout << "Скорость: " << speed << "\n";
  std::cout << "-------------------\n";
  std::cout << "Оснащение\n";
  std::cout << "Двигатель: +" << engine << "\n";
  std::cout << "Колеса: +" << wheels << "\n";
  std::cout << "Руль: +" << steerinWheel << "\n";
  std::cout << "-------------------\n";
  std::cout << "Действия плохой погоды\n";
  std::cout << "Ветер: -" << wind << "\n";
  std::cout << "Дождь: -" << rain << "\n";
  std::cout << "\n";
  std::cout << "Задание 2. Калькулятор стоимости товара\n";
  int product_cost = 12;
  int delivery_cost = 4;
  int discount = 3;
  int full_price = product_cost + delivery_cost - discount;
  std::cout << full_price << "\n";
  std::cout << "\n";
  std::cout << "Задание 3. Время, время!\n";
  int shift_duration = 480;
  int customer_order = 2;
  int order_processing = 4;
  int total_client = shift_duration / (customer_order + order_processing);
  std::cout << total_client << "\n";
  std::cout << "\n";
  std::cout << "Задание 4. Непонятная квитанция \n";
  int amount_receipt = 4000000;
  int entrances = 10;
  int apartments = 40;
  int duty = amount_receipt / (entrances + apartments);
  std::cout << duty << "\n";
}
