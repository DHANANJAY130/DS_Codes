/*
* Arduino Wireless Communication Tutorial
*     Example 1 - Transmitter Code
*                
* by Dejan Nedelkovski, www.HowToMechatronics.com
*
* Library: TMRh20/RF24, https://github.com/tmrh20/RF24/
*/
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
const int x=A0;
const int y = A1;
RF24 radio(7, 8); // CE, CSN
int a[2];
const byte address[6] = "00002";
void setup() {
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}
void loop() {

  a[0]  = analogRead(x);
  a[1]  = analogRead(y);
  a[0]/=4;a[1]/=4;
  radio.write(&a, sizeof(a));
  delay(100);
}