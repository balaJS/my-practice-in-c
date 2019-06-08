#include <stdio.h>
#include <string.h>

struct person {
	char name[50];
	char age[3];
	char fatherName[50];
};

void display_person(struct person human);
struct person set_value(struct person human, char value[4][50]);

void main() {
	struct person bala, gui, mani_anna;

	strcpy(bala.name, "Bala");
	strcpy(bala.age, "25");
	strcpy(bala.fatherName, "Vallivel");

	char giu_value[4][50] = {"Guinness", "26", "Ezhil"};
	// we should use below code for print above array.
	// printf("%s\n", &giu_value[0][0]);
	// printf("%s\n", &giu_value[2][0]);
	gui = set_value(gui, giu_value);

	char anna_value[4][50] = {"Mani anna", "27", "Duraisamy"};
	mani_anna = set_value(gui, anna_value);

	display_person(bala);
	display_person(gui);
	display_person(mani_anna);
}

void display_person(struct person human) {
	printf("Person name %s \n", human.name);
	printf("Person age %s \n", human.age);
	printf("Person's father name %s \n", human.fatherName);
}

struct person set_value(struct person human, char value[4][50]) {
	strcpy(human.name, &value[0][0]);
	strcpy(human.age, &value[1][0]);
	strcpy(human.fatherName, &value[2][0]);
	return human;
}
