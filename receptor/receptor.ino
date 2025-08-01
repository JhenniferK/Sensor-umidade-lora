#include <SoftwareSerial.h>
SoftwareSerial loraSerial(12, 13);

void setup() {
  Serial.begin(9600);
  loraSerial.begin(9600);
  Serial.println("ESP como receptor LoRa.");
}

void loop() {
  if (loraSerial.available()) {
    String msg = loraSerial.readStringUntil('\n');
    Serial.println("Recebido: " + msg);
  } else {
    Serial.println("Nada recebido.");
    delay(2000);  
  }
}
