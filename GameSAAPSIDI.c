#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{
srand(time(NULL));
int r = rand() % 6 + 1;
printf("%d\n", r
);
}
