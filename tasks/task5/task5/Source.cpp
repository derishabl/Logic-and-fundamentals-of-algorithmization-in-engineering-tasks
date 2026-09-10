#include <stdio.h>
#include <Windows.h>
void main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	inti;
	char fam[20];
	struct student {
		charfamil[20];
		char name[20], facult[20];
		intNomzach;
	} 
	stud[3];
	for (i = 0; i< 3; i++)
	{
		printf("Введите фамилию студента\n"); 
		scanf("%20s", stud[i].famil);
	}
	for (i = 0; i < 3; i++)
	{
		printf("Введитеимястудента %s\n", stud[i].famil); 
		scanf("%20s", stud[i].name);
	}
	for (i = 0; i< 3; i++)
	{
		printf("Введитеназваниефакультетастудента %s %s\n", stud[i].famil, stud[i].name); 
		scanf("%20s", stud[i].facult);
	}
	for (i = 0; i< 3; i++)
	{
		printf("Введитеномерзачётнойкнижкистудента %s %s\n", stud[i].famil, stud[i].name); 
		scanf("%d", &stud[i].Nomzach);
	}
	printf("Введите фамилию студента о котором хотите узнать информацию?\n");
	scanf("%20s", &fam);
	for (inti = 0; i< 3; i++) {
		if (strcmp(fam, stud[i].famil) == 0) {
			printf("Фамилия: %s\nИмя: %s\nФакультет: %s\nНомерзачётнойкнижки: %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
		}
	}
}
