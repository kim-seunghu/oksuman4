#include <stdio.h>
#include <string.h>

struct date
{
	int year;
	int month;
	int day;
};
typedef struct date date;

struct id
{
	char name[20];
	date birth;
	char gender[5];
	char address[30];
	char number[15];
};

typedef struct id id;

void main()

{

	id arr[10];
	id temp;
	int i,j, fin;

	printf("<개인명세서>\n전화번호는 숫자를 모두 붙여서 입력해주세요\n이름은 영어로 입력해주시고, 첫 글자만 대문자로 해주세요\n\n");
	printf("(예시)\n이름 : Kimseunghu\n생년월일 : 19980412\n성별 : 남\n주소 : 서울시 동작구\n전화번호 : 01012345678\n\n");
	
	while (1)
	{

		printf("몇명을 입력하시겠습니까 (5명~10명)  ");
		scanf_s("%d", &fin);

		if (fin > 4 && fin < 11)
		{
			printf("\n");
			for (i = 0; i < fin; i++)
			{
				
					printf("%d번째 사람입니다.\n", i+1);
					printf("이름 : ");
					scanf(" %s", arr[i].name);
					printf("생년월일 : ");
					scanf("%4d%2d%2d", &arr[i].birth.year, &arr[i].birth.month, &arr[i].birth.day);
					printf("성별 : ");
					scanf(" %s", arr[i].gender);
					printf("주소 : ");
					scanf(" %[^\n]s", arr[i].address);
					printf("전화번호 : ");
					scanf(" %s", arr[i].number);

					printf("\n");
			
			}
			
			printf("입력순으로 출력한 결과입니다.\n");
			printf("%-16s%-16s%-8s%-30s%-16s", "이름", "생년월일", "성별", "주소", "전화번호");
			printf("\n");
			printf("-----------------------------------------------------------------------------------\n");

			for (i = 0; i < fin; i++)
			{

				printf("%-16s", arr[i].name);

				printf("%4d-%02d-%02d      ", arr[i].birth.year, arr[i].birth.month, arr[i].birth.day);

				printf("%-8s", arr[i].gender);

				printf("%-30s", arr[i].address);

				printf("%-16s", arr[i].number);

				printf("\n\n");

			}
			for (i = 0; i < fin; i++)
			{
				for (j = 0; j < fin - 1 - i; j++)
				{
					if (strcmp(arr[j].name, arr[j + 1].name) < 0)
					{
						temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
				}
			}

			printf("이름의 ASCII코드 값이 큰 것 부터 정렬한 결과입니다.\n");
			printf("%-16s%-16s%-8s%-30s%-16s", "이름", "생년월일", "성별", "주소", "전화번호");
			printf("\n");
			printf("-----------------------------------------------------------------------------------\n");

			for (i = 0; i < fin; i++)
			{

				printf("%-16s", arr[i].name);

				printf("%4d-%02d-%02d      ", arr[i].birth.year, arr[i].birth.month, arr[i].birth.day);

				printf("%-8s", arr[i].gender);

				printf("%-30s", arr[i].address);

				printf("%-16s", arr[i].number);

				printf("\n\n");

			}

			for (i = 0; i < fin; i++)
			{
				for (j = 0; j < fin - 1 - i; j++)
				{
					if (arr[j].birth.year > arr[j + 1].birth.year)
					{
						temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
					else if (arr[j].birth.year == arr[j + 1].birth.year)
					{
						if (arr[j].birth.month > arr[j + 1].birth.month)
						{
							temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}
						else if (arr[j].birth.month == arr[j + 1].birth.month)
						{
							if (arr[j].birth.day > arr[j + 1].birth.day)
							{
								temp = arr[j];
								arr[j] = arr[j + 1];
								arr[j + 1] = temp;
							}
						}
					}
				}
			}

			printf("생년월일이 빠른 것부터 정렬한 결과입니다.\n");
			printf("%-16s%-16s%-8s%-30s%-16s", "이름", "생년월일", "성별", "주소", "전화번호");
			printf("\n");
			printf("-----------------------------------------------------------------------------------\n");

			for (i = 0; i < fin; i++)
			{

				printf("%-16s", arr[i].name);

				printf("%4d-%02d-%02d      ", arr[i].birth.year, arr[i].birth.month, arr[i].birth.day);

				printf("%-8s", arr[i].gender);

				printf("%-30s", arr[i].address);

				printf("%-16s", arr[i].number);

				printf("\n\n");

			}
		}
		else
		{
			printf("5~10 사이의 수를 입력해주세요\n\n");
			continue;
		}
	}
}

