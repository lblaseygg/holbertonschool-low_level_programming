#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t my_dog;

	my_dog.name = "Ghost";
	my_dog.age = 4.75;
	my_dog.owner = "Jon Snow";

	printf("My name is %s, and I am %.2f years old. My owner is %s.\n",
		my_dog.name, my_dog.age, my_dog.owner);

	return 0;
}

