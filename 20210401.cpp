﻿#include <iostream>
#include <string>
using namespace std;
class Car {
	const string model;
	bool power;
	double speed;
public:
	Car(string m, bool p = false, double s = 0.0) :model(m), power(p), speed(s) {};
	void set_power();
	void set_speed(bool);
	double get_speed() const;
};
void Car::set_power()
{
	power = !power;
	return;
}
void Car::set_speed(bool a)
{
	if (!power)return;
	if (a)
		speed += 0.1;
	else
		speed -= 0.1;
	return;
}
double Car::get_speed() const
{
	return speed;
}
int main()
{
	Car car1("소나타");
	car1.set_power();
	car1.set_speed(true);
	cout << car1.get_speed() << endl;
	Car car2("티볼리");
	car1.set_power();
	car1.set_speed(true);
	cout << car1.get_speed() << endl;
	Car car3("그랜저");
	car1.set_power();
	car1.set_speed(true);
	cout << car1.get_speed() << endl;
	Car car4("제네시스");
	car1.set_power();
	car1.set_speed(true);
	cout << car1.get_speed() << endl;
	return 0;
}