// 프로그램 목적: 입력받은 줄 수 만큼 뒤집힌 직각삼각형 모양을 출력하는 프로그램
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int i = 0, j = 0; // 제어변수
	int input = 0; // 입력변수: 출력할 행 수 결정

	// 자료입력
	printf("출력할 행 수를 입력해주십시오: ");
	scanf_s("%d", &input);

	// 자료처리 및 출력
	for (i = 1; i <= input; i++) // 외부 for문: i는 줄 수로 생각하는 게 쉬움 (하지만 항상 "i = 줄 수"라고 생각하는 것은 바람직하지 않음)
	{
		for (j = 1; j <= (input+1)-i; j++)  // 내부 for문: 1로 시작하게 하는 것이 규칙성 파악에 도움
			printf("* ");
		printf("\n");
	}

	return 0; // 실행종료
} // main함수 종료

// 반복문 규칙성 파악: 그려보기->규칙성 발견->식으로 표현->코딩작업