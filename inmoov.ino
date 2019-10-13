#include<Servo.h>
Servo servo1;
double bits;
double volts;
int pos;
void setup() {
  Serial.begin(9600);
  servo1.attach(4);
  servo1.write(90);
  delay(2000);
  servo1.write(180);
  delay(2000);
  
  servo1.write(0);
  delay(1000);
  servo1.write(90);
  
  // put your setup code here, to run once:

}

void loop() {
bits =analogRead(A0);//this will read from the meyoware sensor connected to A0 on the microcontroller if your flexing alot the value will be 1023 if not 
volts = bits/1023*(5);//converting from  bits to volts from x/1023 to y/5v
 pos= volts/5*180;//converting from position to volts y/5v to w/180
 if(pos>100)
 servo1.write(180);//this method will write the position to ur servo object
 delay(2000);
 servo1.write(90);
 delay(2000);
}
