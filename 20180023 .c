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

	printf("<���θ���>\n��ȭ��ȣ�� ���ڸ� ��� �ٿ��� �Է����ּ���\n�̸��� ����� �Է����ֽð�, ù ���ڸ� �빮�ڷ� ���ּ���\n\n");
	printf("(����)\n�̸� : Kimseunghu\n������� : 19980412\n���� : ��\n�ּ� : ����� ���۱�\n��ȭ��ȣ : 01012345678\n\n");
	
	while (1)
	{

		printf("����� �Է��Ͻðڽ��ϱ� (5��~10��)  ");
		scanf_s("%d", &fin);

		if (fin > 4 && fin < 11)
		{
			printf("\n");
			for (i = 0; i < fin; i++)
			{
				
					printf("%d��° ����Դϴ�.\n", i+1);
					printf("�̸� : ");
					scanf(" %s", arr[i].name);
					printf("������� : ");
					scanf("%4d%2d%2d", &arr[i].birth.year, &arr[i].birth.month, &arr[i].birth.day);
					printf("���� : ");
					scanf(" %s", arr[i].gender);
					printf("�ּ� : ");
					scanf(" %[^\n]s", arr[i].address);
					printf("��ȭ��ȣ : ");
					scanf(" %s", arr[i].number);

					printf("\n");
			
			}
			
			printf("�Է¼����� ����� ����Դϴ�.\n");
			printf("%-16s%-16s%-8s%-30s%-16s", "�̸�", "�������", "����", "�ּ�", "��ȭ��ȣ");
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

			printf("�̸��� ASCII�ڵ� ���� ū �� ���� ������ ����Դϴ�.\n");
			printf("%-16s%-16s%-8s%-30s%-16s", "�̸�", "�������", "����", "�ּ�", "��ȭ��ȣ");
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

			printf("��������� ���� �ͺ��� ������ ����Դϴ�.\n");
			printf("%-16s%-16s%-8s%-30s%-16s", "�̸�", "�������", "����", "�ּ�", "��ȭ��ȣ");
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
			printf("5~10 ������ ���� �Է����ּ���\n\n");
			continue;
		}
	}
}

