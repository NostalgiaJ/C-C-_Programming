#include <stdio.h>

int main()
{
	double mass, speed, KEnergy;
	printf("����(kg)? ");
	scanf("%lf", &mass);
	printf("�ӷ�(m/s)? ");
	scanf("%lf", &speed);
	KEnergy = (1.0/2.0) * mass * speed * speed;
	printf("� ������: %lf\n", KEnergy);

	return 0;
}