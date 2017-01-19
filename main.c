#include <stdio.h>

enum oper_types { OPER_ADD, OPER_SUB, OPER_MULT, OPER_DIV };

int get_oper_type()
{
	printf("What kind of operation would you like to perform? [asmd] ");

	char oper_type = getchar();

	switch (oper_type) {
	case 'a':
		return OPER_ADD;
	case 's':
		return OPER_SUB;
	case 'm':
		return OPER_MULT;
	case 'd':
		return OPER_DIV;
	default:
		return get_oper_type();
	}
}

int main()
{
	int first, second;

	int oper = get_oper_type();
	printf("%i\n", oper);

	return 0;
}
