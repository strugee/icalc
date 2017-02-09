#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

enum oper_types { OPER_ADD, OPER_SUB, OPER_MULT, OPER_DIV };

int get_oper_type()
{
	fpurge(stdin);

	printf("What kind of operation would you like to perform? [asmd] ");

	char oper_type[3];
	

	if (fgets(oper_type, 3, stdin) == NULL) {
		if (feof(stdin) != 0) {
			printf("\n");
			exit(0);
		} else {
			/* We encountered an error */
			printf("\n");
			perror("icalc");
			exit(1);
		}
	}

	switch (oper_type[0]) {
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
	fpurge(stdin);
	printf("%i\n", oper);

	return 0;
}
