#include <stdio.h>
#include <malloc.h>

//������ ���� q�� p ������ �ּ� ���� ������
void GetMyData(int** q) {
	//�Ҵ�� �޸��� �ּҰ��� ������ q�� ����Ű�� 
	//main()�Լ��� p�� ������
	*q = (int*)malloc(8);
}

int main(void) {
	int* p; //p�� �ʱ�ȭ���� �ʾƼ� ������ ���� ������
	GetMyData(&p);
	*p = 5; //�Ҵ�� �޸��� ù 4����Ʈ�� �� 5�� ����
	printf("p (�ּ�): %p", p);
	printf("*p(��): %d", *p);
	free(p); //�Ҵ�� ���� �޸𸮸� ������

	return 0;
}