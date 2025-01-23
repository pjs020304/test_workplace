#include <stdio.h>

int main() {
    int num = 1;
    while (num != 0) {
        printf("1에서 9 사이 숫자 입력: ");
        scanf("%d", &num);
        
        if (num < 1 || num > 9) {
            if (num == 0) {
                printf("프로그램을 종료합니다.\n");
                break;
            }
            printf("1에서 9 사이 숫자를 입력하세요.\n");
            continue;
        }
        
        for (int i = 1; i < 10; i++) {
            printf("%d * %d = %d\n", num, i, num * i);
        }
	printf("\n\n\n");
    }
	
    return 0;
}
