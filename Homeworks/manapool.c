#include "manapool.h"

int can_put_card(struct card_t card_to_put, struct manapool_t manapool) {
	if(card_to_put.mana_cost <= manapool.mana) {
		return 1;
	} else {return 0;}

}
