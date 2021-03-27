#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INFO_SIZE 15 
#define CARDS_SIZE 100
#define FILE_NAME "nameCard.txt"

typedef struct card {
	char name[INFO_SIZE];
	char company[INFO_SIZE];
	char phone[INFO_SIZE];
	struct card *next;
} nameCard;

nameCard *head; 
int size;

void init();
void load();
int menu(); 

void create();
void delete();
void search();
void printCards();
void quit();

int main(){
	init();
	load();

	int option = menu();

	while(1){
		switch(option){
			case 1:
				create();
				break;
			case 2:
				delete();
				break;
			case 3:
				search();
				break;
			case 4:
				printCards();
				break;
			case 5:
				quit();
			default:
				printf("Invalid Option\n");	
				break;
		}
		option = menu();
	}
}

void init(){
	head = (nameCard*)malloc(sizeof(nameCard));
}

int menu(){
	int option = -1;
	while(option < 1 || option > 5){	
		printf("\n\nNamecard Manager Menu\n");
		printf("1. Create\n");
		printf("2. Delete\n");
		printf("3. Search\n");
		printf("4. Print All\n");	
		printf("5. Exit\n");
		printf("Select option[1 - 5]: ");
		scanf("%d", &option);
		printf("\n\n");
	}	
	return option;
}

void create(){
	nameCard *newCard = (nameCard*)malloc(sizeof(nameCard));	
	printf("Please insert info below to add a new namecard.\n");
	printf("Name: ");
	scanf("%s", newCard->name);
	printf("Company: ");
	scanf("%s", newCard->company);
	printf("Phone: ");
	scanf("%s", newCard->phone);

	FILE *fp = fopen(FILE_NAME, "a");
	fprintf(fp, "%s %s %s\n", newCard->name, newCard->company, newCard->phone);
	printf("Updated [%s]\n", FILE_NAME);
	fclose(fp);

	nameCard *curr = head->next;
	while(curr->next != NULL){
		curr = curr->next;
	}
	curr->next = newCard;
	size++;
}

void deleteRowFromFile(int row){
	char temp[] = "temp.txt";
	FILE *fp1 = fopen(FILE_NAME, "r");
	FILE *fp2 = fopen(temp, "w");
	
	int line = 0;
	char c = getc(fp1);
	while(c != EOF){
		if(line != row){
			putc(c, fp2);
		}
		if(c == '\n'){
			line++;
		}
		c = getc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	remove(FILE_NAME);
	rename(temp, FILE_NAME);
}

void delete(){
	int num = -1;
	printCards();
	printf("Please select name card number to delete: ");
	scanf("%d", &num);
	if(num < 1 || num > size){
		printf("Invalid Number. Please try again.\n");
	} else {
		nameCard* curr = head;
		for(int i = 1; i < num; i++){
			curr = curr->next;
		}
		printf("Deleted #%d(%s, %s, %s)\n", num, curr->next->name, curr->next->company, curr->next->phone); 
		curr->next = curr->next->next;	
		size--;	
	
		deleteRowFromFile(num - 1);

		printCards();
	}
	
		
}

void search(){
	nameCard* searching = (nameCard*)malloc(sizeof(nameCard));		
	printf("Please enter name (type - to skip): ");
	scanf("%s", searching->name);

	printf("Please enter company (type - to skip): ");
	scanf("%s", searching->company);
	
	printf("Please enter phone number (type - to skip): ");
	scanf("%s", searching->phone);

	printf("  #   Name           Company        Phone\n");
	printf("--------------------------------------------------\n");

	nameCard* curr = head->next;
	int num = 1;
	while(curr != NULL){
		if(strcmp(searching->name, "-") == 0|| strcmp(searching->name, curr->name) == 0){
			if(strcmp(searching->company, "-") == 0 || strcmp(searching->company, curr->company) == 0){
				if(strcmp(searching->phone, "-") == 0|| strcmp(searching->phone, curr->phone) == 0){
					printf(" %2d   %-15s%-15s%-15s\n", num, curr->name, curr->company, curr->phone);
				}
			}
		}	
		curr = curr->next;
		num++;
	}
}

void quit(){
	printf("Thank you. Good bye!\n");
	exit(0);
}

void load(){
	FILE *fp = fopen(FILE_NAME, "r");
	nameCard *newCard;
	
	nameCard* curr = head;
	// Check if namecard.txt exist and non empty
	if(fp == NULL){
		printf("namecard.txt does not exist");
		return;
	}
	
	while(!feof(fp)){
		size++;
		newCard = (nameCard*)malloc(sizeof(nameCard));
		fscanf(fp, "%s %s %s\n", newCard->name, newCard->company, newCard->phone);
		
		newCard->next = curr->next;	
		curr->next = newCard;
		curr = curr->next;
	}	
	fclose(fp);
}

void printCards(){
	int num = 1;
	printf("  #   Name           Company        Phone\n");
	printf("--------------------------------------------------\n");
	nameCard* curr = head->next;
	while(curr != NULL){
		printf(" %2d   %-15s%-15s%-15s\n", num++, curr->name, curr->company, curr->phone);
		curr = curr->next;
	}	
	printf("\n\n");
}


