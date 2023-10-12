#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float x, y, ans;
	char operator;

	printf("Enter a calculation: ");
	scanf("%f %c %f", &x, &operator, &y);

	switch (operator) {
		case '+':
			ans = x + y;
			break;
		case '-':
			ans = x - y;
			break;
		case '/':
			ans = x / y;
			break;
		case '*':
			ans = x * y;
			break;
		case '^':
			ans = pow(x, y);
		default:
			goto fail;
	}
	printf("Result = %.6g\n\n", ans);
	goto exit;
	fail:
	printf("Error!\n");
	
	exit:
	return 0;
}