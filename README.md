# Monitoramento de Umidade com LoRa

Este projeto faz parte do projeto de pesquisa <strong>Solução IoT Baseada em Tecnologia LoRa para Otimização do Uso de Água na Agricultura Familiar</strong>, desenvolvido no IFPB - Campus Esperança e tem como objetivo realizar o monitoramento remoto da umidade utilizando comunicação LoRa entre um emissor (Arduino + sensor de umidade) e um receptor (ESP32).

## Componentes Utilizados

- Arduino UNO
- ESP32
- Sensor de Umidade (ex: DHT11, DHT22 ou outro)
- Módulo LoRa (ex: SX1278)
- Jumpers, Protoboard, etc.

## Estrutura do Projeto

```plaintext
Sensor-umidade-lora/
  └── emissor
      ├── emissor.ino
  └── receptor
      ├── receptor.ino
```

## Como Usar

1. Faça o upload do código `emissor.ino` no Arduino com o sensor conectado.
2. Faça o upload do código `receptor.ino` no ESP32 com o módulo LoRa conectado.
3. Abra os dois monitores seriais para ver a comunicação funcionando.

## Sobre o Projeto

Este projeto faz parte de uma pesquisa em andamento orientada por Arlindo Garcia no IFPB - Campus Esperança, com foco em tecnologias para monitoramento remoto e comunicação sem fio de baixo consumo.

---

🖤 **Obrigada por visitar este repositório!**
