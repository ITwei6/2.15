#include <stdio.h>
#define MAXSIZE 10000
#define error 0
typedef struct Book
{
	char name[100];
	int price;
	char no[20];

}Book;
typedef struct
{
	Book* elem;
	int length;
}SqList;
int main()
{
	SqList s;
	s.length = 100;
	//����
	int n = 5;
	//˳���Ĳ���
	if (n<1 || n>s.length + 1)
		return error;
	if(s.length == MAXSIZE)
		return error;
	int j = 0;
	for (j = s.length - 1; j >= n - 1; j--)
	{
		s.elem[j + 1] = s.elem[j];
	}
	//s.elem[n - 1]=e;
	s.length++;
	//˳����ɾ��
	//ȷ���Ϸ�
	//��ǰ����Ҫɾ����
	int j = 0;
	for (j = n - 1; j < s.length; j++)
	{
		s.elem[j] = s.elem[j + 1];
	}
	return 0;
}
