#include <stdio.h>
#include <stdlib.h>

void main()
{

    int list[5];                       /* int 타입의 element가 5개인 배열 */
    int *plist[5] = {NULL,};           /* 정수에 대한 5개 포인터를 빈 곳으로 설정 */


    plist[0] = (int *)malloc(sizeof(int));    /* plist[0]자리에 4bytes만큼의 주소를 정수형으로 요구  */
    
    list[0] = 1;                              /* 정수 값 list[0]에 1 저장 */
    list[1] = 100;                            /* 정수 값 list[1]에 100 저장 */

    *plist[0] = 200;                          /* 정수포인터 plist[0]에 값 200 저장 */

    printf("   [-----  [ChoiSuzy]  [2021024135]  -----]  \n\n"); 
    printf("value of list[0] = %d\n", list[0]);                 /* list[0]의 값은 1임 */
    printf("address of list[0] = %p\n", &list[0]);              /* list[0]의 주소 */
    printf("value of list = %p\n", list);                       /* list의 값은 list[0]의 주소와 같음 */
    printf("address of list (&list) = %p\n", &list);            /* list의 주소(&list)는 list[0]의 주소와 같음 */

    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);                 /* list[1]의 값은 100임 */
    printf("address of list[1] = %p\n", &list[1]);              /* list[1]의 주소는 list[0]의 주소에서 4bytes를 더함 */
    printf("value of *(list+1) = %d\n", *(list + 1));           /* *(list+1)는 list[1]의 값과 같음 */
    printf("address of list+1 = %p\n", list+1);                 /* list+1의 주소는 list[1]의 주소와 같음 */

    printf("----------------------------------------\n\n");
    
    printf("value of *plist[0] = %d\n", *plist[0]);             /* *plist[0]의 값은 200임 */
    printf("&plist[0] = %p\n", &plist[0]);                      /* &plist[0]은 plist[0]의 주소 */
    printf("&plist = %p\n", &plist);                            /* &plist는 &plist[0]과 같음 */
    printf("plist = %p\n", plist);                              /* plist는 &plist와 같음 */
    printf("plist[0] = %p\n", plist[0]);                        /* plist[0]은 plist가 포인터하고 있는 곳의 주소 */
    printf("plist[1] = %p\n", plist[1]);                        /* NULL */
    printf("plist[2] = %p\n", plist[2]);                        /* NULL */
    printf("plist[3] = %p\n", plist[3]);                        /* NULL */
    printf("plist[4] = %p\n", plist[4]);                        /* NULL */


    free(plist[0]);                                             /* plist[0]을 재활용할 수 있게 함 */
}
