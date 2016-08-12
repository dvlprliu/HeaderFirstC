
#include <stdio.h>

void fortune_cookie(char msg[])
{
	printf("Message reads: %s\n", msg);
	printf("msg occupies %i bytes\n", sizeof(msg));
}

int main() 
{
	int x = 43;
	int *point_of_x = &x;
	printf("x is : %i, point_of_x is: %i \n", x, *point_of_x);

	int change_of_x = x;
	change_of_x = 99;
	printf("x is: %i, change_of_x is: %i \n", x, change_of_x);

	*point_of_x = 89;
	printf("x is: %i, point_of_x is: %i \n", x, *point_of_x);

	char s[] = "How big is it?";
	char *t = s;
	fortune_cookie(s);
	printf("size of msg out of function: %i\n", sizeof(s));
	printf("size of pointer is %i\n", sizeof(t));
	printf("address of the array is: %p : %p : %s\n", &s, s, s);
	printf("address of the pointer is: %p : %p : %c \n", &t, t, *t);

	int drinks[] = {4, 2, 5};
	printf("1st order: %i drinks\n", drinks[0]);
	printf("1st order: %i drinks\n", *drinks);
	printf("2nd order: %i drinks\n", drinks[1]);
	printf("2nd order: %i drinks\n", *(drinks + 1));
	printf("What happens if pointer flows: %i \n", *(drinks + 4));

	int doses[] = {1, 3, 2, 1000};
	printf("Issue dose %i\n", 3[doses]);

	return 0;
}
