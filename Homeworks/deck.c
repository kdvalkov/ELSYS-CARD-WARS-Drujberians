#include "deck.h"

int push_card(struct card_t card_to_push, struct deck_t *player_deck)
{
	if (player_deck-> topdeck < 30)
	{
		player_deck -> card[player_deck->topdeck++] = card_to_push;
		return 1;
	}
	else
	{
		return 0;
	}
};

int draw_card(struct deck_t *player_deck,struct card_t *card)
{
	if (player_deck -> topdeck > 0)
	{
		*card = player_deck->card[--(player_deck->cards)];
		return 0;
	}
	else
	{
	return 1;
	}
};

int look_card(struct deck_t *player_deck,struct card_t card) 
{
	if (player_deck -> topdeck > 0)
	{
		Card = player_deck->card[player_deck->cards-1];
		return 0;
	}
	else
	{
	return 1;
	}
};
