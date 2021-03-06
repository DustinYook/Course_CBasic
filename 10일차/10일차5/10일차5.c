// 프로그램 목적: 2단에서 9단까지 구구단을 출력
#include <stdio.h>

int main(void)
{
	// 변수선언
	int i = 0; // 제어변수1: 외부 for문 제어
	int j = 0; // 제어변수2: 내부 for문 제어

	for (i = 1; i <= 9; i++) // 외부 for문: 세로축의 변화를 제어
	{
		for (j = 2; j <= 9; j++) // 내부 for문: 가로축의 변화를 제어
		{
			printf("%2d*%2d=%2d |", j, i, i*j);
		}
		printf("\n");
	}

	return 0; // 실행종료
}

// 작성 tip) 종이에 원하는 결과를 써보고 고정요소를 파악하여 외부 for문을 제어하고 가변요소를 파악하여 내부 for문을 제어하도록 함
//           외부 for문은 상대적으로 느리게 돌고, 내부 for문은 상대적으로 빠르게 돈다