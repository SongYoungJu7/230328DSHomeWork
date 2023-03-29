#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 10

typedef int element; // �������� �ڷ���
element stack[MAX_SIZE]; // 1���� �迭
int top = -1;

int is_empty()
{
	return (top == -1);
}

int is_full()
{
	return (top == (MAX_SIZE - 1));
}

void push(element item) //int <- ����ó�� 0:Fail, 1: Success
{
	if (is_full()) {
		printf("Stack Full!!\n");
	}
	else stack[++top] = item;
	// return 1;
}
// ���� �Լ�
element pop()
{
	if (is_empty()) {
		printf("Stack Empty!!\n");
	}
	else return stack[top--];
}

int main() {

	srand(time(NULL));
	int rand_num;

	for (int i = 0; i < 31; i++) {
		rand_num = rand() % 100 + 1;
		if (rand_num % 2 == 0) {
			push(rand_num);
			printf("[%2d] Push %d\n", i, rand_num);
		}
		else {
			pop(rand_num);
			printf("[%2d] Pop %d\n", i, rand_num);
		}
	}


}