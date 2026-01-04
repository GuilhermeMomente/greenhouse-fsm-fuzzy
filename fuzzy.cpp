
#include "fuzzy.h"

#define UMIDADE_UMIDA 290
#define UMIDADE_MEDIA 350
#define UMIDADE_SECA 450
#define TEMPO_MAX 30

int calcularTempoBomba(int u) {
  float me = 0, se = 0;

  if (u > UMIDADE_UMIDA && u < UMIDADE_MEDIA)
    me = (u - UMIDADE_UMIDA) / float(UMIDADE_MEDIA - UMIDADE_UMIDA);

  if (u >= UMIDADE_MEDIA && u < UMIDADE_SECA)
    se = (u - UMIDADE_MEDIA) / float(UMIDADE_SECA - UMIDADE_MEDIA);

  int tempo = me * 10 + se * 20;
  if (tempo > TEMPO_MAX) tempo = TEMPO_MAX;
  return tempo;
}

void atualizarFuzzy() {}
