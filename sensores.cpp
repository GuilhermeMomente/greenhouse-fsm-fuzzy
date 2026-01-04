
#include <Arduino.h>
#include "sensores.h"

#define SENSOR_SOLO A0
static int umidade = 0;

void inicializarSensor() {
  pinMode(SENSOR_SOLO, INPUT);
}

void atualizarSensor() {
  long soma = 0;
  for (int i = 0; i < 50; i++) {
    soma += analogRead(SENSOR_SOLO);
    delay(2);
  }
  umidade = soma / 50;
}

int getUmidade() {
  return umidade;
}
