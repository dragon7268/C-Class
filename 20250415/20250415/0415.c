#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main(void)
{
	double v0;
	double theta_degree;
	double g = 9.8;
	double y0 = 140;
	double y = 0;

	printf("초기 속도를 입력하세요 ==>");
	scanf_s("%lf", &v0);
	printf("각도를 입력하세요 ==>");
	scanf_s("%lf", &theta_degree);

	//0. x,y 방향의 초기속도를 구하여라.
	double theta_radian = theta_degree * PI / 180;
	double v0x = v0 * cos(theta_radian);
	double v0y = v0 * sin(theta_radian);
	printf("x,y방향의 초기속도: v0x = %.2f m/s, v0y = %.2f m/s \n", v0x, v0y);

	//1. 포사체가 지면에 있는 점 P에 충돌할 때까지 걸린 시간을 구하라.
	double a = -0.5 * g;
	double b = v0y;
	double c = y0;
	double t = b * b - 4 * a * c;

	if (t >= 0) {
		double t1 = (-b + sqrt(t));
		double t2 = (-b - sqrt(t));

		if (t1 > 0) {
			printf("걸린 시간 = %.2f s\n", t1);
		}
		else if (t2 > 0) {
			printf("걸린 시간 = %.2f s\n", t2);
		}
		else {
			printf("오류\n");
		}
	}

	//2. 절벽 아래로부터 수평거리 X를 구하라.
	double X = v0x * t;
	printf("수평거리 X =  %.2f m \n", X);

	//3. 포사체가 점P에 부딪치기 직전의 속도의 수평성분과 수직성분을 구하여라.
	double vx = v0x;
	double vy = v0y - g * t;
	printf("속도의 수평성분 = %.2f m/s, 수직성분 = %.2f m/s \n", vx, vy);

	//4. 속도의 크기를 구하여라.
	double V = sqrt(vx * vx + vy * vy);
	printf("속도의 크기 = %.2f m/s \n", V);

	//5. 속도벡터가 수평면과 이루는 각을 구하라.
	double angle = atan2(vy, vx) * 180 / PI;
	printf("수평면과 이루는 각 = %.2f 도", angle);
	return 0;
}

