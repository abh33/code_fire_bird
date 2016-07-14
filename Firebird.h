#ifndef Firebird_h
#define Firebird_h
#include "Arduino.h"
#include "LiquidCrystal.h"

class Firebird
{
  private:
  int left_motor_1 = 22;
  int left_motor_2 = 23;
  int right_motor_1 = 25;	
  int right_motor_2 = 24 ;
  int left_PWM = 46;
  int right_PWM = 45;
  LiquidCrystal lcd(37, 35, 33, 32, 31, 30);
  //volatile unsigned long int leftshaftcount = 0;
  //volatile unsigned long int rightshaftcount = 0;
  public:
  Firebird();
  void forward();
  void backward();
  void stopbot();
  void velocity(int left_vel,int right_vel);
  void soft_left();
  void soft_right();
  void left();
  void right();
  //void linear_distance_mm(unsigned int distance_mm);
  //void angle_rotate_degrees(unsigned int degree);
  //void forward_mm(unsigned int distance_mm);
  //void getLeftShaftCount();
  //void getRightShaftCount();
};

//void incrementright();
//void incrementleft();
//void init_interrupt();

#endif
