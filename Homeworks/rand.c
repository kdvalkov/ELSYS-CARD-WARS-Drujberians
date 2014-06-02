#include<stdio.h>
#include<time.h>
#include<stdlib.h>

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
