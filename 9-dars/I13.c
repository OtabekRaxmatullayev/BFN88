#include <stdio.h>
#include <math.h>

float func(float a, int b){

	scanf("%f%d",&a,&b);

        float c=pow(a,b);

	return c;

	}

int main() {

        float daraja=func(5.12,9);

	printf("%.2f",daraja);

        }
