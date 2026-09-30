#include <stdio.h>

int main(void) {
    int age;
    float height;

    printf("Enter age and height with space: ");
    scanf("%d %f", &age, &height); // scanf() 함수 : 키보드로 입력받는 함수

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);

    return 0;
}