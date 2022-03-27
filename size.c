#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x;      /* **x는 이중포인터임 */

    printf("   [-----  [ChoiSuzy]  [2021024135]  -----]  \n\n"); 

    printf("sizeof(x) = %lu\n", sizeof(x));         /* x의 사이즈 크기는 정수의 주소이기에 8bytes */
    printf("sizeof(*x) = %lu\n", sizeof(*x));       /* *x의 사이즈 크기는 정수의 주소이기에 8bytes */
    printf("sizeof(**x) = %lu\n", sizeof(**x));     /* **x의 사이즈 크기는 정수값이기에 4bytes */
}
