#ifndef __CARD__
#define __CARD__

struct card_t {
	
	char* name;
	int life;
	unsigned int attack;
	unsigned int mana_cost;
};

int attack(struct card_t *attacker, struct card_t *defender);
void print_card(struct card_t card);
#endif
