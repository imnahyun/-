#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

	int computer[3];
	int user[3];
	int i, j;
	int num;

	srand(time(NULL));

	for (i = 0; i < 3; i++) {
		num = rand() % 10;//0~9
		computer[i] = num;
		for (j = 0; j < i; j++) {
			if (computer[j] == computer[i]) {
				i--;
				break;

			}

		}

	}
	printf("숫자 3개를 입력하여 숫자야구게임을 해보시오!");

	while (1) {
		scanf("%1d %1d %1d", &user[0], &user[1], &user[2]);
		if (user[0] < 0 || user[0] > 9 || user[1] < 0 || user[1] > 9 || user[2] < 0 || user[2] > 9) {
			printf("0~9까지의 숫자를 하나만 입력하십시오.");
			continue;
		}
		else if (user[0] == user[1] || user[1] == user[2] || user[2] == user[0]) {
			printf("중복된 숫자입니다");
			continue;
		}
		else if (user[0] == user[1] && user[1] == user[2] && user[2] == user[0]) {
			printf("숫자 세개가 전부 똑같은수입니다. 다른걸 입력해주세요.");
			continue;
		}
		break;
	}



	
	int strike = 0, ball = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{

			if (computer[i] == user[j]) {
				if (i == j)
					strike++;
				else {
					ball++;
				}
			}

		}
		printf("%d %d %d는 %d스트라이크 %d볼입니다.", user[0], user[1], user[2], strike, ball);
	}
	
	}
	



	int count = 0; // 시도하는 횟수.올라가는 횟수.
	for(count = 0; count < 11; count++) {
		if (strike == 3) {
			printf("제한 횟수내에 게임을 클리어했습니다!");
			break;
		}
		else if (count == 10) {
			printf("게임 클리어 실패,횟수초과, 정답은 %d %d %d", computer[0], computer[1], computer[2]);
			break;
		}
		break;
	}


}