

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit, values [100],i,SearchKey, flag=0;
	setbuf(stdout,NULL);
	printf("Enter a Limit");
	scanf("%d",& limit);
	printf("Enter Values");
	for (i=0;i<limit; i++){
	scanf("%d",&values[i]);
	}
	printf("Enter Search Key :");
	scanf("%d",&SearchKey);
	for (i=0;i<limit; i++){
	if (SearchKey==values[i]) {
		printf ("Value found at position %d",i+1);
	break;
	}

	return EXIT_SUCCESS;
}
