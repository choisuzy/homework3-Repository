#include <stdio.h>

struct student {      /* 'struct' keyword 적어서 student 구조체 생성 */ 
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main()
{
    printf("   [-----  [ChoiSuzy]  [2021024135]  -----]  \n\n"); 
    
    struct student pst;    /* 이미 선언되어있는 student의 구조체 포인터 선언 */ /* student1의 구조체에 해당 값 입력 */  /* typedef을 사용하지 않았기에 struct을 써줘서 구조체인 것을 알려줘야 함 */

    printf("size of student = %ld\n", sizeof(struct student));  /* padding 처리해서 lastname은 16bytes, studentId는 4bytes, grade는 4bytes라 다 더하면 24bytes임 */
    printf("size of int = %ld\n", sizeof(int));                 /* int형의 크기는 4bytes */
    printf("size of short = %ld\n", sizeof(short));             /* short형의 크기는 2bytes */

    return 0;
}
