 #include <stdio.h>

 double pagamento(int diaria, int km) {
 	return (diaria*30+km*0.01)*0.90;
 }

 int main() {
 	int diaria, km;
 	scanf("%d%d",&diaria,&km);
 	printf("%.2lf",pagamento(diaria,km));
 }