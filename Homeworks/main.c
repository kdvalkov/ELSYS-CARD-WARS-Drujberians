#include <stdio.h>
#include "card.h"
#include "deck.h"

int main() {
	
	struct card_t first = {"Robi", 300, 65, 30};
	struct card_t second = {"Oliver", 15, 299, 15};
	struct card_t third = {"Cherna_pechka", 300, 125, 35};
	
	struct deck_t myDeck;
	init_deck(&myDeck);
	push_card(first, &myDeck);
	push_card(second, &myDeck);
	push_card(third, &myDeck);
	
	struct card_t topCard;
	
	if(look_card(&myDeck, &topCard) == 0) {
		print_card(topCard);
	}
	
	if(draw_card(&myDeck, &topCard) == 0) {
	struct card_t almostTopCard;
	if(draw_card(&myDeck, &almostTopCard) == 0) {
			printf("Result = %d\n", attack(&topCard, &almostTopCard));
			print_card(almostTopCard);
			print_card(topCard);
		}
	}
	
	return 0;
}
