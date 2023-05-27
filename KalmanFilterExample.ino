#include "Bear_BMP085.h"
#include "kalman.h"
BMP085 bmp;
void setup() {
  // put your setup code here, to run once:
bmp.begin(1);
Serial.begin(38400);
  // init Kalman filter
  KalmanInit();
}

void loop() {
 //filtered data
Serial.print(KalmanCalc(bmp.readAltitude()));
Serial.print(" ");
//raw data
Serial.println(bmp.readAltitude());
//delay(10);
}
