
#pragma once

enum EstadoSistema {
  BOOT,
  AUTOMATICO,
  MANUAL,
  IRRIGANDO
};

void inicializarSistema();
void atualizarEstados();
