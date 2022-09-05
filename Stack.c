#include <stdio.h>


void Push(char Stack[], int *size, int MAX_size);
void Pop(char Stack[], int *size);
void show(char Stack[], int size);

int main() {

	char Stack[10] ;
	int MAX_size = sizeof(Stack) / sizeof(Stack[0]);
	int size = 0;

	int* Psize = &size;

	char User_choice;

	do {
		
		printf("press (a) to add item \n");
		printf("press (d) to delete item \n");
		printf("press (s) to show the stack \n");
		printf("press (e) to exit \n");

		scanf_s("%c", &User_choice, 1);

		switch (User_choice)
		{
			case ('a'): Push(Stack, Psize, MAX_size);
				break;
			case ('d'): Pop(Stack, Psize);
				break;
			case ('s'): show(Stack, size);
				break;
		default:
			break;
		}
		
		while ((getchar()) != '\n');

	} while (User_choice != 'e');

	return 0;

}

void Push(char Stack[], int *size, int MAX_size) {
	
	char item;
	while ((getchar()) != '\n');

	if (*size < MAX_size ) {
		
		printf("item to add: ");
		scanf_s("%c", &item, 1);
		//printf("%c", item);
		Stack[*size] = item;
		*size  = *size + 1;

	}
	else {
		printf("stack is full \n");
	}
};

void Pop(char Stack[], int *size) {


	if (*size > 0) {
		*size = *size - 1;
	}
	else {
		printf("stack is empty \n");
	}

};

void show(char Stack[], int size) {

	for (int i = 0; i < size; i++) {
		printf("%c ", Stack[i]);
	}
	printf("\n");

};