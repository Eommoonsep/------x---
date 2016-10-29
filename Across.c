

//Across.c

/*
  파일이름 : Across.c
  기    능 : 별표를 크로스해 화면에 출력한다
  작 성 자 : 엄문섭
  작성일자 : 16.8.11
  */

#include <stdio.h>
#define ROW 5
#define COLUMN 5

typedef signed long int Long;

//함수선언
void Across(Long(*array)[COLUMN]);
void Output(Long(*array)[COLUMN]);

//함수정의
int main(int argc, char*argv[])
{
	Long array[ROW][COLUMN];
	Across(array);
	Output(array);
	return 0;
}
/*
  함수이름 : 크로스
  기    능 : 배열을 초기화하고 별을 찍는다
  입    력 : x
  출    력 : 배열
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
  함수이름 : Output
  기    능 : 결과를 화면에 출력한다
  입    력 : array
  출    력 : x
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