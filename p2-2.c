#include <stdio.h>

void print1 (int *ptr, int rows);      /* void print1 함수 원형  */

int main()
{
    printf("   [-----  [ChoiSuzy]  [2021024135]  -----]  \n\n"); 

    int one[] = {0, 1, 2, 3, 4};             /* 정수형인 배열 one[]에 순서대로 0,1,2,3,4 넣음 */

    printf("one = %p\n", one);               /* one은 one[]의 주소 */
    printf("&one = %p\n", &one);             /* &one은 one과 같음 */
    printf("&one[0] = %p\n", &one[0]);       /* &one[0]은 &one과 같음 */
    printf("\n");

    print1(&one[0], 5);                      /* print1 함수 호출 */

    return 0;                                
}

void print1 (int *ptr, int rows)       /* 함수 헤더 */ /* *ptr은 call by reference이고 rows는 call by value임 */
{/* print out a one-dimensional array using a pointer */
    
    int i;                                             /* int형 i */
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)                         /* rows번만큼 for루프 돌음 */
        printf("%p \t %5d\n", ptr + i, *(ptr + i));    /* ptr+0부터 ptr+4까지 주소와 내용 값 나옴 */
    printf("\n");
}
