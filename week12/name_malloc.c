#include <stdio.h>
#include <malloc.h>

int main(void) {
	char* p_name;
	p_name = (char*)malloc(20); //20����Ʈ �޸𸮸� ���� �Ҵ�
	if (p_name != NULL) {//�޸� �״翡 ����
		printf("Enter tour name: ");
		gets(p_name);//�̸��� �Է¹���

		printf("Hi~~~ %s\n", p_name); //�Է� ���� �̸��� ���
		free(p_name);
		//������ ���� p_name�� ���� �Ҵ�� �޸𸮸� ����!!
	}
	else { //�޸� �Ҵ翡 ����~ �Ф�
		printf("Memory allocation error!!");
	}
}