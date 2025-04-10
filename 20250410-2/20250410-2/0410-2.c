
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main(void)
{
	double V0;
	double theta_degree;
	double g = -9.8;

	printf("초기속도를 입력하세요 ==>");
	scanf_s("%lf", &V0);
	printf("각도를 입력하세요 ==>");
	scanf_s("%lf", &theta_degree);

	//1. x,y방향의 초기속도를 구하여라 
	double theta_radian = theta_degree * PI / 180;
	double V0x = V0 * cos(theta_radian);
	double V0y = V0 * sin(theta_radian);
	printf("x,y방향의 초기속도: V0x = %.2f m/s, V0y = %.2f m/s \n", V0x, V0y);

	//2. 최고점의 높이를 구하여라.
	double H = (V0y * V0y) / (2 * -g);
	printf("최고점의 높이: %.2f m \n", H);

	//3. 최고점에 도착하는 시간을 구하여라
	double t = V0y / -g;
	printf("최고점에 도착하는 시간: %.2f s \n", t);
	
	//4. 수평으로 이동한 최고 거리를 구하여라.
	double x = V0x * 2 * t;
	printf("수평으로 이동한 최고 거리: %.2f m \n", x);

	//5.지면에 닿을때의 Vx, Vy를 구하고 V의 벡터 성분을 구하여라.
	double Vx = V0x;
	double Vy = -V0y;
	double V = sqrt(V0x * V0x + Vy * Vy);

	printf("지면에 닿을때의 Vx: %.2f, 지면에 닿을때의 Vy : %.2f, V의 방향: %.2f °, V의 크기: %.2f m/s\n", Vx, Vy, -theta_radian, V);

	return 0;
}