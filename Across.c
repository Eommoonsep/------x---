

//Across.c

/*
  �����̸� : Across.c
  ��    �� : ��ǥ�� ũ�ν��� ȭ�鿡 ����Ѵ�
  �� �� �� : ������
  �ۼ����� : 16.8.11
  */

#include <stdio.h>
#define ROW 5
#define COLUMN 5

typedef signed long int Long;

//�Լ�����
void Across(Long(*array)[COLUMN]);
void Output(Long(*array)[COLUMN]);

//�Լ�����
int main(int argc, char*argv[])
{
	Long array[ROW][COLUMN];
	Across(array);
	Output(array);
	return 0;
}
/*
  �Լ��̸� : ũ�ν�
  ��    �� : �迭�� �ʱ�ȭ�ϰ� ���� ��´�
  ��    �� : x
  ��    �� : �迭
  */
void Across(Long(*array)[COLUMN])
{
	Long i = 0;
	Long j;
	Long k = 0;
	Long l = 4;
	while (i < ROW)
	{
		j = 0;
		while (j < COLUMN)
		{
			array[i][j] =  ' ';
			j++;
		}
		i++;
	}


	i = 0;
	while(i < ROW)
	{
		array[i][k] = '*';
		array[i][l] = '*';
		k++;
		l--;
		i++;
	}
}

/*
  �Լ��̸� : Output
  ��    �� : ����� ȭ�鿡 ����Ѵ�
  ��    �� : array
  ��    �� : x
  */
void Output(Long(*array)[COLUMN])
{
	Long i;
	Long j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COLUMN; j++)
		{
			printf("%2c", array[i][j]);
		}
		printf("\n");
	}
}