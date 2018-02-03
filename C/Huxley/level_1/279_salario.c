#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,horas;
    float porhora;
    scanf("%d %d %f",&num,&horas,&porhora);
    printf("NUMBER = %d\n""SALARY = R$ %.2f",num,horas*porhora);
	return 0;
}
