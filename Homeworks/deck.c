#include <string.h>
#include "deck.h"

void init_deck (struct deck_t *deck) {
	memset(deck, 0, sizeof(struct deck_t));	
}

int push_card(struct card_t card, struct deck_t *deck)
{
	if(deck->topdeck >= MAX_CARD_IN_DECK){
	return -1;
	}
	
	deck->cards[deck->topdeck++] = card;
	return 0;
}


int draw_card(struct deck_t *deck,struct card_t *card) {
	int result = look_card(deck, card);
	if(result == 0)
	deck->topdeck--;
	return result;

}

int look_card(struct deck_t *deck,struct card_t *card) {
	if(deck->topdeck <= 0) {
	return -1;
	}
	*card = deck->cards[deck->topdeck - 1];
	return 0;
}

int main() {
return 0;
}
