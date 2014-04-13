#include <stdio.h>
#include "card.h"

int main() {
	
	struct card_t first = {"Robi", 128, 65, 0};
	struct card_t second = {"Oliver", 2, 127, 1};
	struct card_t third = {"Cherna_pechka", 129, 64, 5};
	
	print_card(first);
	print_card(second);
	
	int result = attack(&first, &second);
	
	printf("result = %d\n", result);
	
	print_card(first);
	print_card(third);
	
	result = attack(&first, &third);
	
	printf("result = %d\n", result);
	
	return 0;
}
