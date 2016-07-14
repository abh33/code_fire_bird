#include "Arduino.h"
#include "Firebird.h"
Firebird::Firebird()
{
	pinMode(left_motor_1, OUTPUT);
	pinMode(left_motor_2, OUTPUT);
	pinMode(right_motor_1, OUTPUT);
	pinMode(right_motor_2, OUTPUT);
	pinMode(left_PWM, OUTPUT);
	pinMode(right_PWM, OUTPUT);
}

void Firebird::forward()
{
	digitalWrite(left_motor_1, 0);
    digitalWrite(left_motor_2, 1);
    digitalWrite(right_motor_1, 0);
    digitalWrite(right_motor_2, 1);
}

void Firebird::backward()
{
	digitalWrite(left_motor_1, 1);
    digitalWrite(left_motor_2, 0);
    digitalWrite(right_motor_1, 1);
    digitalWrite(right_motor_2, 0);
}

void Firebird::stopbot()
{
	digitalWrite(left_motor_1, 0);
    digitalWrite(left_motor_2, 0);
    digitalWrite(right_motor_1, 0);
    digitalWrite(right_motor_2, 0);
}

void Firebird::velocity(int left_vel, int right_vel)
{
	analogWrite(left_PWM, left_vel);
    analogWrite(right_PWM, right_vel);
}

void Firebird::soft_left()
{
	digitalWrite(left_motor_1, 0);
    digitalWrite(left_motor_2, 0);
    digitalWrite(right_motor_1, 0);
    digitalWrite(right_motor_2, 1);
}

void Firebird::soft_right()
{
	digitalWrite(left_motor_1, 0);
    digitalWrite(left_motor_2, 1);
    digitalWrite(right_motor_1, 0);
    digitalWrite(right_motor_2, 0);
}

void Firebird::left()
{
	digitalWrite(left_motor_1, 1);
    digitalWrite(left_motor_2, 0);
    digitalWrite(right_motor_1, 0);
    digitalWrite(right_motor_2, 1);
}

void Firebird::right()
{
	digitalWrite(left_motor_1, 0);
    digitalWrite(left_motor_2, 1);
    digitalWrite(right_motor_1, 1);
    digitalWrite(right_motor_2, 0);
}

