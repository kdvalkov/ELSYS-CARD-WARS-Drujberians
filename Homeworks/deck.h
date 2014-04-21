#ifndef deck
#define deck
#include "card.h"

struct deck_t {
   int topdeck;
   struct card_t[30];

}

int push_card (struct card_t card_to_push, struct deck_t* player_deck);

int draw_card (struct deck_t* player_deck, struct card_t*card);

int look_card (struct deck_t*player_deck, struct card_t card);

#endif
