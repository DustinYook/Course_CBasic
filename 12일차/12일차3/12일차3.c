// 프로그램 목적: 포인터 변수의 이해
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int i = 0; // 간접참조될 변수 => 일반변수: i는 변수명 => 메모리 상에 i라는 변수공간이 생성, 그 공간에 '10'의 값 대입
	int* ptr = &i; // 포인터변수의 선언: 간접참조변수의 자료형 * 포인터변수명 = 저장할 주소; 

	// 자료처리 및 출력: i에 저장된 값 출력
	printf("i에 저장된 값을 2가지 방법을 통해서 출력하겠습니다.\n");
	printf("1) 직접참조: i에 저장된 값을 i를 통해 출력: %d\n", i);
	printf("2) 간접참조: i에 저장된 값을 포인터변수를 통해 출력: %d\n\n", *ptr); // 중요!

	// 자료처리 및 출력: i에 저장된 값 출력
	printf("i의 주소를 2가지 방법을 통해서 출력하겠습니다.\n");
	printf("1) i와 주소연산자를 통해 구한 i의 주소값: %p\n", &i);
	printf("2) 포인터변수에 저장된 값을 통해 구한 i의 주소값: %p\n", ptr);
	printf("주의) ptr의 주소값은 \"%p\"이며 i의 주소값 \"%p\"와 다릅니다.\n\n", &ptr, ptr);

	return 0; // 실행종료
} // main함수 종료
// 포인터변수는 "간접참조"를 이용하는 경우 사용
// 포인터변수의 선언: 간접참조변수의 자료형 * 포인터변수명 = 저장할 주소;
// 1) 간접참조변수의 자료형: 증감연산을 할 때 주소의 증가값을 결정 => 예를 들어 int이면 4바이트, char이면 1바이트
// 2) 포인터변수의 선언의 경우 "int *ptr"로 쓰는 것보다 "int* ptr"로 쓰는 것이 바람직 함 => *ptr(ptr에 저장된 주소에 저장된 값)과 혼동할 수 있기 때문
// 주의) 포인터변수 선언 시 '*'는 실행시의 "해당 포인터변수에 저장된 주소에 저장된 값"의 의미가 아닌 "포인터변수라는 자료형"을 나타냄 => 혼동하지 않도록 주의!
// 3) 포인터변수에는 오직 주소만을 저장할 수 있으며 일반변수의 경우 변수명에 주소연산자(&)를 붙이고 배열의 경우 주소연산자를 붙이지 않고 배열명만 씀
//    배열의 경우 배열명이 해당 배열의 시작주소값을 의미하기 때문 => 포인터변수에 주소가 아닌 값을 저장하면 문법적오류가 발생함
//    주소연산자(&)와 배열명 모두 해당 자료의 "시작 주소값"을 나타냄에 유의할 것!
// 쉽게 정리하면 "ptr == &i"이고 "*ptr = i"임