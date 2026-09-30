#include<stdio.h>

int main(void) {
    // printf() 함수 : 화면에 출력하는 함수
    // printf("출력할 문자열", 변수1, 변수2, ...);
    // -> 출력할 문자열 안에 %d, %f, %c 등의 형식 지정자를 사용하여 변수의 값을 출력할 수 있음
    // -> 형식 지정자(Format Specifier) : 출력할 변수의 자료형을 지정하는 기호
    // -> %d : 정수형 변수 출력, %f : 실수형 변수 출력, %c : 문자형 변수 출력
    // -> %.2f : 소수점 둘째 자리까지 출력, %.3f : 소수점 셋째 자리까지 출력
    // -> %s : 문자열 출력
    // -> %% : % 기호 출력
    // -> \n : 줄바꿈, \t : 탭

    int a = 10;
    float b = 3.1416592f;
    char c = 'A';
    char str[] = "Hello, World!"; // 문자열 변수 str을 선언하고 "Hello, World!"로 초기화
    int age = 20;

    printf("정수형 변수 a: %d\n", a); // %d : 정수형 변수 출력 d:Decimal(10진수)
    printf("실수형 변수 b: %.2f\n", b); // %.2f : 소수점 둘째 자리까지 출력
    printf("문자형 변수 c: %c\n", c); // %c : 문자형 변수 출력
    printf("문자열 변수 str: %s\n", str); // %s : 문자열 출력
    printf("Age is : %d\n", age); // %d : 정수형 변수 출력
    return 0;

}