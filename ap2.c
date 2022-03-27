#include <stdio.h>
#include <stdlib.h>

void main()
{ 

    int list[5];               /* int 타입의 element가 5개인 배열 */
    int *plist[5];             /* 정수에 대한 5개 포인터 */

    list[0] = 10;              /* 정수 값 list[0]에 10 저장 */
    list[1] = 11;              /* 정수 값 list[1]에 11 저장 */

    plist[0] = (int*)malloc(sizeof(int));      /* plist[0]에 4bytes만큼의 주소를 정수형으로 요구 */

    printf("   [-----  [ChoiSuzy]  [2021024135]  -----]  \n\n");

    printf("list[0] \t= %d\n", list[0]);                 /* list[0]은 10 */
    printf("address of list \t= %p\n", list);            /* list의 주소 */
    printf("address of list[0] \t= %p\n", &list[0]);     /* list[0]의 주소는 list와 같음 */
    printf("address of list + 0 \t= %p\n", list+0);      /* list+0은 list[0]의 주소와 같음 */
    printf("address of list + 1 \t= %p\n", list+1);      /* list+1의 주소는 list+0에서 정수형 바이트만큼 (4bytes) 더함 */
    printf("address of list + 2 \t= %p\n", list+2);      /* list+2의 주소는 list+1에서 정수형 바이트만큼 (4bytes) 더함 */
    printf("address of list + 3 \t= %p\n", list+3);      /* list+3의 주소는 list+2에서 정수형 바이트만큼 (4bytes) 더함 */
    printf("address of list + 4 \t= %p\n", list+4);      /* list+4의 주소는 list+3에서 정수형 바이트만큼 (4bytes) 더함 */
    printf("address of list[4] \t= %p\n", &list[4]);     /* list[4]의 주소는 list+4의 주소와 같음 */

    free(plist[0]);                                      /* plist[0]을 재활용할 수 있게 함 */

}
