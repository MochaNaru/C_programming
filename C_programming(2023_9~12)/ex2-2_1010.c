#include <stdio.h>

int main(void)
{
    int kor, eng, math;
    int total;

    printf("����, ����, ������ ������ �Է��ϼ���.\n");
    scanf("%d %d %d", &kor, &eng, &math);

    total = kor + eng + math;
    total = total / 3;

    if (kor >= 40 && eng >= 40 && math >= 40)
    {
        if (total >= 60)
        {
            printf("%d ������ �հ��Դϴ�. �����մϴ�.\n", total);
        }
        else
        {
            printf("��� 60�� �̸����� ���հ��Դϴ�.\n");
        }
    }
    else
    {
        printf("���� �� 40�� �̸����� ���հ��Դϴ�.\n");
    }

    return 0;
}


