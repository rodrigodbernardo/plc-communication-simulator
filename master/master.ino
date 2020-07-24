#include <SoftwareSerial.h>


SoftwareSerial SSerial(D3,D4); //RX,TX

void setup(){
    Serial.begin(9600);
    SSerial.begin(9600);
}

void loop(){
    SSerial.print("Hello from Master");
    Serial.println("Message sent.");
    delay(2000);
}
