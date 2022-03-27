#include <stdio.h>

#define MAX_SIZE 100                 /* MAX_SIZE를 100으로 정의함 */

float sum(float [], int);            /* sum이라는 function 원형 */
float input[MAX_SIZE], answer;       /* input[MAX_SIZE]와 answer을 float형으로 설정 */
int i;                               /* i를 int형으로 설정 */

void main(void)
{
    printf("   [-----  [ChoiSuzy]  [2021024135]  -----]  \n\n"); 

    for(i=0; i < MAX_SIZE; i++)                   /* MAX_SIZE번 도는 for루프 */
        input[i] = i;                             /* i가 MAX_SIZE만큼 for루프를 돌며 input에 넣음 */

    /* for checking call by reference */
    printf("address of input = %p\n", input);     /* input의 주소 */

    answer = sum(input, MAX_SIZE);                /* input의 주소가 sum함수로 넘어감 */ /* sum함수의 값을 answer에 넣음 */
    printf("The sum is: %f\n", answer);           /* answer의 값 프린트 */
}

float sum(float list[], int n)                    /* list[]는 input을 포인터, n은 MAX_SIZE를 포인터함 */
{
    printf("value of list = %p\n", list);         /* list의 값은 input의 주소와 같음 */
    printf("address of list = %p\n\n", &list);    /* list의 주소 */

    int i;                                        /* i를 int형으로 설정 */
    float tempsum = 0;                            /* tempsum을 float형으로 설정하고 0으로 초기화 */
    for(i = 0; i < n; i++)                        /* n번 도는 for루프 */
        tempsum += list[i];                       /* list[]에 있는 값을 tempsum에서 다 더함 */  
    return tempsum;                               /* tempsum을 return함 */
}
