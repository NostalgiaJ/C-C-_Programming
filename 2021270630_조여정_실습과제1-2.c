#include <stdio.h>

int main()
{
	double mass, speed, KEnergy;
	printf("질량(kg)? ");
	scanf("%lf", &mass);
	printf("속력(m/s)? ");
	scanf("%lf", &speed);
	KEnergy = (1.0/2.0) * mass * speed * speed;
	printf("운동 에너지: %lf\n", KEnergy);

	return 0;
}