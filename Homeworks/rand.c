#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"card.h"
#include"deck.h"

/* void swap(struct card_t *a, struct card_t *b) {
struct card_t c;
c= *a;
*a = *b
*b = c;
}

void shuffle(struct deck_t *deck) {
int i;
int a,b;
srand((unsigned)time(NULL));
for (i=0; i<30; i++) {
	a = rand() % 30; b = rand() % 30;
	swap(&deck->card[a], &deck->card[b]);
	}
}

FILE *fp;
char str[1800];
char *buff;
fp = fopen("file.csv", "r");
if (fp == NULL) return 0;
while( fgets(str, 1800, fp) ) {
	srand((unsigned)time(NULL));
	int i = (rand()%30);
	deck.card[i]
}
fclose(fp);
return 1;
}

int main() {
return 0;
} */

int shuffle(struct deck_t *deck, char *file.csv) { 
int i; int a, b; 
FILE *fp fp = fopen("file.csv", "w"); 
if(fp == NULL) 
return 0; 
srand(time(NULL)); 
for(i = 0; i < 30; i++) { 
a = rand() % 30; b = rand() % 30; 
swap(&deck->card[a], &deck->card[b]); } 
for(i = 0; i < 30; i++) { 
fprintf(fp, "%s,", deck->card[i].name); 
fprintf(fp, "%d,", deck->card[i].mana_cost); 
fprintf(fp, "%d,", deck->card[i].atk); 
fprintf(fp, "%d\n", deck->card[i].hp); 
deck->top++; } 
fclose(fp); 
return 1; }
