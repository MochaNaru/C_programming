#include <stdio.h>

int main(void)
{
    int kor, eng, math;
    int total;

    printf("국어, 영어, 수학의 점수를 입력하세요.\n");
    scanf("%d %d %d", &kor, &eng, &math);

    total = kor + eng + math;
    total = total / 3;

    if (kor >= 40 && eng >= 40 && math >= 40)
    {
        if (total >= 60)
        {
            printf("%d 점으로 합격입니다. 축하합니다.\n", total);
        }
        else
        {
            printf("평균 60점 미만으로 불합격입니다.\n");
        }
    }
    else
    {
        printf("과목 중 40점 미만으로 불합격입니다.\n");
    }

    return 0;
}


