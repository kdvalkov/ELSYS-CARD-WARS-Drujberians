#include "card.h"
#include <stdio.h>

int attack(struct card_t *attacker, struct card_t *defender) {
	defender->life -= attacker->attack;
	attacker->life -= defender->attack;
	
	int result = 0;
	
	result += defender->life > 0 ? 1 : 0;
	result += attacker->life > 0 ? 2 : 0;

	return result;
}

void print_card(struct card_t card){
	printf (" Card %s[l= %d, a= %u, c= %u]\n", card.name, card.life, card.attack, card.mana_cost);
}

int main() {
return 0;
}
