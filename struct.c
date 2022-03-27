#include <stdio.h>

struct student1 {            /* 'struct' keyword 항상 적어서 student1 구조체 생성 */
        char lastName;
        int studentId;
        char grade;
};

typedef struct {             /* typedef 문장을 사용한 student2 구조 데이터 타입 생성 */
        char lastName;
        int studentId;
        char grade;
} student2;                 

int main() 
{
    
    printf("   [-----  [ChoiSuzy]  [2021024135]  -----]  \n\n");

    struct student1 st1 = {'A', 100, 'A'};   /* student1의 구조체에 해당 값 순서대로 입력 */  /* typedef을 사용하지 않았기에 struct을 써줘서 구조체인 것을 알려줘야 함 */
    
    printf("st1.lastName = %c\n", st1.lastName);         /* 해당하는 값 print */
    printf("st1.studentId = %d\n", st1.studentId);       /* 해당하는 값 print */
    printf("st1.grade = %c\n", st1.grade);               /* 해당하는 값 print */


    student2 st2 = {'B', 200, 'B'};      /* student2는 typedef을 사용했기에 struct 쓰지 않아도 됨*/ /* student2의 구조체에 해당 값 순서대로 입력 */
    
    printf("\nst2.lastName = %c\n", st2.lastName);       /* 해당하는 값 print */
    printf("st2.studentId = %d\n", st2.studentId);       /* 해당하는 값 print */
    printf("st2.grade = %c\n", st2.grade);               /* 해당하는 값 print */

    student2 st3;         /* student2타입의 st3 선언 */

    st3 = st2;            /* st2를 st3에 대입 */

    printf("\nst3.lastName = %c\n", st3.lastName);       /* 해당하는 값 print */
    printf("st3.studentId = %d\n", st3.studentId);       /* 해당하는 값 print */
    printf("st3.grade = %c\n", st3.grade);               /* 해당하는 값 print */
    
    /* equality test */
    /* not working */ /* 직접 비교 허용하지 않음 */ /* 밑의 내용은 프로그램이 작동이 되지 않음 */
                                                        
    if(st3 == st2)       
        printf("equal\n");
    else
        printf("not equal\n");

    return 0;
}