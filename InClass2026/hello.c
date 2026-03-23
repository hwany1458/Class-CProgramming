#include <stdio.h>

void main()
{
	// 한줄 주석 - 컴파일러에서 번역(컴파일) 하지 않음......
	printf("Hello YongHwan\n");

	/*
	여러줄 주석
	(칼라로 구분되어 보임)

	*/

	// 03-18
	// (1) level이라는 이름으로 정수형 변수를 선언
	int level;
	// (2) 정수형 변수 level에 1값을 넣음(할당, 대입)
	level = 1;

	// printf() 함수 설명할 때 다시 자세히
	printf("레벨=%d\n", level);

	//..... 레벨 올라가는 동작이 진행됨

	level = 2;
	printf("레벨=%d\n", level);

	level = 10000000000;  // 백억 -- overflow (범람) 발생
	printf("레벨=%d\n", level);

	long long aaa;   // aaa 라는 변수이름으로 롱롱타입 변수를 선언
	   // 큰 정수를 다루려면 롱롱타입으로 선언하세요
	aaa = 10000000000;
	printf("aaa = %lli\n", aaa);

	// 실수형 변수 선언
	// height라는 변수 이름으로 실수형 변수를 선언합니다
	double height;
	// 값 할당
	height = 170.3;
	printf("키 = %lf\n", height);

	// 1줄로 쓸수 있다 (선언과 동시에 초기화)
	int hp = 100;
	

}
