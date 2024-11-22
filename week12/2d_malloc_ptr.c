#include <stdio.h>
#include <malloc.h>

int main(void) {
	short **pp;
	//4바이트 할당 두 번째 상자 만듦
	pp = (short**)malloc(sizeof(short*));
	//2바이트 할당함 세번째 상자 만듦
	*pp = (short*)malloc(sizeof(short));

	//2차원 포인터를 사용하여 세번째 상자에 10을 대입함
	**pp = 10;
	printf("**pp: %d\n", **pp);//10을 출력

	free(*pp);
	free(pp);


}