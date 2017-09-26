#include <stdio.h>
void towerOfHanoi(int n, char start, char stop, char aux)
{
    if (n == 1)
    {
        printf("n Move disk 1 from rod %c to rod %c", start, stop);
        return;
    }
    towerOfHanoi(n-1, start, aux, stop);
    printf(" Move disk %d from rod %c to rod %c", n, start, stop);
    towerOfHanoi(n-1, aux, stop, start);
}
 
void main()
{
    int n = 4; 
    towerOfHanoi(n, 'A', 'C', 'B');
}
