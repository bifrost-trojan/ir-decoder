// *******************************************************
// coded by sahil @bifrost_trojan
// *******************************************************

#include <IRremote.h>
int IRPIN = 2;
void setup(){
Serial.begin(9600);
IrReceiver.begin(IRPIN, ENABLE_LED_FEEDBACK);
Serial.println("coded by sahil @bifrost_trojan");
}

void loop(){
if (IrReceiver.decode()){
Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
IrReceiver.resume();
}
delay(500);
}
