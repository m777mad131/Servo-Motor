// C++ code
//
#include <Servo.h>

int i = 0;

int servo = 0;

Servo servo_9;
Servo servo_8;
Servo servo_7;
Servo servo_6;
Servo servo_5;


void setup()
{
  servo_9.attach(9, 500, 2500);
  servo_8.attach(8, 500, 2500);
  servo_7.attach(7, 500, 2500);
  servo_6.attach(6, 500, 2500);
  servo_5.attach(5, 500, 2500);

}

void loop()
{
  for (servo = 1; servo >= 90; servo -= 1) {
    servo_9.write(servo);
    servo_8.write(servo);
    servo_7.write(servo);
    servo_6.write(servo);
    servo_5.write(servo);

    delay(1000); // Wait for 1000 millisecond(s)
  }
}
