// C++ code
//
#include <Servo.h>

Servo servo_6;

void setup()
{
  pinMode(A0, INPUT);
  servo_6.attach(6, 500, 2500);

  if ((-40 + 0.488155 * (analogRead(A0) - 20)) > 30) {
    servo_6.write(90);
  }
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
}