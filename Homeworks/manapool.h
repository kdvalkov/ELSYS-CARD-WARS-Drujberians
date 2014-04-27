#ifndef __MANAPOOL__
#define __MANAPOOL__
#include "card.h"

struct manapool_t {
	unsigned int mana;
	unsigned int max_mana;
};

int can_put_card(struct card_t card_to_put, struct manapool_t manapool);

#endif
