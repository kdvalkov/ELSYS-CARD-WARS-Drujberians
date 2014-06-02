#include "manapool.h"

int can_put_card(struct card_t card_to_put, struct manapool_t manapool) {
	if(card_to_put.mana_cost <= manapool.mana) {
		return 1;
	} else {return 0;}

}

int use_card(struct card_t *card, struct manapool_t *manapool) {
/*	manapool->mana -= card.mana_cost; */
}
int change_mana(struct manapool_t *pool,int remove) {
pool-> mana += remove; 
/* if(pool -> mana > __MANAPOOL__) pool -> mana = __MANAPOOL__; */
}
