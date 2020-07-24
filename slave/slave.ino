#include <SoftwareSerial.h>

SoftwareSerial SSerial(2,3); //RX,TX

void setup(){
    Serial.begin(9600);
    SSerial.begin(9600);
}

void loop(){
    if(SSerial.available()){
        Serial.print("\nMensagem recebida: ");
        Serial.println(SSerial.readString());
    }
}
