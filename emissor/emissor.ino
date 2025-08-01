#include <SoftwareSerial.h>

SoftwareSerial loraSerial(2, 3);

void setup() {
  Serial.begin(9600);
  loraSerial.begin(9600);
  delay(1000);
  Serial.println("Transmissor LoRa pronto.");
}

void loop() {
  int leitura = analogRead(A0);
  int umidade = map(leitura, 1023, 300, 0, 100);
  umidade = constrain(umidade, 0, 100);

  String mensagem = "Umidade: " + String(umidade) + "%";
  loraSerial.println(mensagem);
  Serial.println("Enviado: " + mensagem);

  delay(2000);
}
