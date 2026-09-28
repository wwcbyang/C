#include <stdio.h>

int main(void) {
    // 자료형(data type) : 변수의 종류를 정의하는 키워드
    // 메모리 공간을 효율적으로 사용하기 위해 변수의 자료형을 지정해야 함

    // C언어 기본 자료형
    // 1. 정수형(integer type) : int, short, long, long long
    int a = 10; // 정수형 변수 a를 선언하고 10으로 초기화


    // 2. 실수형(floating-point type) : float, double
    float b = 3.14; // 실수형 변수 b를 선언하고 3.14로 초기화
    // -> 3.14는 double형으로 인식되므로, float형 변수에 저장할 때는 f를 붙여야 함
    
    float b2 = 3.14f; // 실수형 변수 b2를 선언하고 3.14f로 초기화 -> f를 붙이면 float형으로 인식
    double b3 = 3.14; // 실수형 변수 b3를 선언하고 3.14로 초기화 -> double형으로 인식

    // 3. 문자형(character type) : char
    char c = 'A'; // 문자형 변수 c를 선언하고 'A'로 초기화 -> 단일문자

    printf("정수형 변수 a: %d\n", a);
    printf("실수형 변수 b: %.2f\n", b);
    printf("문자형 변수 c: %c\n", c);

    return 0;
}