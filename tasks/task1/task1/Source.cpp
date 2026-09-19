#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct node
{
	char inf[256];  
	struct node* next; 
	int priority; 
};

struct node* head = NULL, * last = NULL, * f = NULL; 
int dlinna = 0;

void spstore(void), review(void), del(char* name);

char find_el[256];
struct node* find(char* name); 
struct node* get_struct(void); 



struct node* get_struct(void)
{
	struct node* p = NULL;
	char s[256];

	if ((p = (node*)malloc(sizeof(struct node))) == NULL)  
	{
		printf("Ошибка при распределении памяти\n");
		exit(1);
	}

	printf("Введите название объекта: \n");   
	scanf("%s", s);
	printf("Введите приоритет объекта: \n");
	scanf("%d", &p->priority);
	if (*s == 0)
	{
		printf("Запись не была произведена\n");
		return NULL;
	}
	strcpy(p->inf, s);

	p->next = NULL;

	return p;		
}

void spstore(void)
{
	struct node* p = NULL;
	struct node* current = head;
	p = get_struct();
	if (head == NULL) 
	{
		head = p;
		last = p;
	}
	else if (p->priority > head->priority)
	{
		p->next = head;
		head = p;
	}
	else
	{
		while (current-> next != NULL && current->next->priority >= p->priority)
		{
			current = current->next;
		}
		p->next = current->next;
		current->next = p;
		if (p->next == NULL)
		{
			last = p;
		}
	}
	return;
}


/* Просмотр содержимого списка. */
void review(void)
{
	struct node* struc = head;
	if (head == NULL)
	{
		printf("Список пуст\n");
	}
	while (struc)
	{
		printf("Имя - %s, приоритет - %d \n", struc->inf, struc->priority);
		struc = struc->next;
	}
	return;
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	spstore();
	spstore();
	spstore();

	review();

}