
#include "estados.h"
#include "sensores.h"
#include "atuadores.h"
#include "fuzzy.h"

EstadoSistema estadoAtual = BOOT;

void setup() {
  Serial.begin(9600);
  inicializarAtuadores();
  inicializarSensor();
  inicializarSistema();
}

void loop() {
  atualizarBotao();
  atualizarSensor();
  atualizarFuzzy();
  atualizarEstados();
  logSerial();
}
