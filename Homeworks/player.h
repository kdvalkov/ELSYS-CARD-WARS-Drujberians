#ifndef __PLAYER__
#define __PLAYER__

#include "manapool.h"

struct player_t {
int health;
struct deck_t deck;
struct manapool_t mana;
struct card_t cards_in_hand[];
}

int change_hp(struct player_t *player,int change);
void turn_begin(struct player_t *player);

#endif 
