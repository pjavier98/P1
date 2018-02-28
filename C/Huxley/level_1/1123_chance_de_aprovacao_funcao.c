#include <stdio.h> 
void resultado(float quantidade, float resolvidos) {
	float chance;
	float trabalho = (resolvidos / quantidade) * 100;
	
	if(trabalho >= 80 && trabalho <= 100) {
		chance = 94;
		printf("%.2f%% %.2f%% Excelente", trabalho, chance);
	}
	else if(trabalho >= 60) {
		chance = 80;
		printf("%.2f%% %.2f%% Muito Bom", trabalho, chance);
	}
	else if(trabalho >= 40) {
		chance = 56.82;
		printf("%.2f%% %.2f%% Bom", trabalho, chance);
	}
	else if(trabalho >= 20) {
		chance = 31.65;
		printf("%.2f%% %.2f%% Ruim", trabalho, chance);
	}
	else if(trabalho >= 0) {
		chance = 4.40;
		printf("%.2f%% %.2f%% Pessimo", trabalho, chance);
	}
} 
int main() {
	float quantidade, resolvidos;
	scanf("%f %f", &quantidade, &resolvidos);
	resultado( quantidade, resolvidos);
}
