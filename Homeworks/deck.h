#ifndef DECK_H_
#define DECK_H_

#define MAX_CARD_IN_DECK 30

#include "card.h"

struct deck_t {
   int topdeck;
   struct card_t cards[MAX_CARD_IN_DECK];
};

void init_deck (struct deck_t *deck);

int push_card (struct card_t card, struct deck_t *deck);

int draw_card (struct deck_t *deck, struct card_t *card);

int look_card (struct deck_t *deck, struct card_t *card);

#endif
