
#include <Arduino.h>
#include "atuadores.h"

#define RELE_LUZ 7
#define RELE_BOMBA 8
#define LIGA_RELE HIGH
#define DESLIGA_RELE LOW

void inicializarAtuadores() {
  pinMode(RELE_LUZ, OUTPUT);
  pinMode(RELE_BOMBA, OUTPUT);
  desligarLuz();
  desligarBomba();
}

void ligarLuz() { digitalWrite(RELE_LUZ, LIGA_RELE); }
void desligarLuz() { digitalWrite(RELE_LUZ, DESLIGA_RELE); }
void ligarBomba() { digitalWrite(RELE_BOMBA, LIGA_RELE); }
void desligarBomba() { digitalWrite(RELE_BOMBA, DESLIGA_RELE); }
