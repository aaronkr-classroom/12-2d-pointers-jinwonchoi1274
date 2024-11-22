#include <stdio.h>
#include <malloc.h>

int main(void) {
	//변수
	int ages, member, temp, sum;
	unsigned char limit_table[3];
	//연령별로 윗몸 일으키기 횟수를 저장할 배열
	unsigned char* p[3];

	//연령별로 윗몸 일으키기 횟수를 입력 받음
	for (ages = 0; ages < 3; ages++) {
		//각 연령의 윗몸 일으키기라고 출력함
		printf("\n%d0대 연령의 윗몸일으키기 횟수\n", ages + 2);
		printf("이 연령대는 몇명입니까?: ");

		scanf_s("%d", &temp);
		limit_table[ages] = (unsigned char)temp;
		//입력받은 인원수만큼 메모리를 할당
		p[ages] = (unsigned char*)malloc(limit_table[ages]);
		//해당 연령에 소속된 사람들을 순서대로 입력받음
		for (member = 0; member < limit_table[ages]; member++) {
			//#1,#2라고 출력
			printf("#%d: ", member + 1);
			//윗몸일으키기 횟수 정수로 입력받기
			scanf_s("%d", &temp);
			*(p[ages] + member) = (unsigned char)temp;
		}
	}

	printf("\n\n연령별 평균 윗몸일으키기 횟수\n");
	//연령별로 입력된 횟수를 합산하여 평균값을 출력함
	for (ages = 0; ages < 3; ages++) {
		sum = 0;
		//20대: 30대: 40:라고 출력함
		printf("%d0대: ", ages + 2);
		//해당 연령에 소속된 사람들을 합산함
		for (member = 0; member < limit_table[ages]; member++) {
			sum = sum + *(p[ages] + member);
		}
		//합산수를 인원수로 나눠서 평균을 냄
		printf("%5.2f\n", (double)sum / limit_table[ages]);
		free(p[ages]);
	}
}
