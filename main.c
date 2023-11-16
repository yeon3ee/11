#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i=10;
	char c='a';
    int *iptr;
    iptr = &i;
    char *cptr;
    cptr = &c;
    int *iptr2; 
    iptr2 = iptr; 
    printf("i: %d, iptr: %p\n", i, (void*)iptr);
    printf("c: %c, cptr: %p\n", c, (void*)cptr);
    printf("iptr2: %p, value: %d\n", (void*)iptr2, *iptr2);

    return 0;
}
