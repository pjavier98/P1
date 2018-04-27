#include<stdio.h>
<<<<<<< HEAD
int ciclo(int i) {
  int cont = 1;
  while(i!=1) {
        if (i%2==0) { // se for par divide por dois e conta um ciclo (checked)
        i=i/2;
        cont++;
        } else if (i%2!=0) { // se não for multiplica por tres e soma um e conta um ciclo(checked)
        i=3*i+1;
        cont++;
        }
    }
    return cont; // retorna a quantidade de ciclos do numero (checked)
}
void loop(int i, int j) {
    int max;
    while(scanf("%d%d",&i,&j) != EOF) {
    max=1;
    printf("%d %d ",i, j);
    if(i<j) {
        for(;i<=j;i++) {
        if(max<ciclo(i)) {
            max=ciclo(i);
        }
        }
    } else {
        for(;i>=j;i--) {
          if(max<ciclo(i)) {
                max=ciclo(i);
                }
            }
    }
    printf("%d\n",max);
    }
}

int main() {
  int i,j,max;
  loop(i,j);
=======

int ciclo(int i) {
  int cont = 1;
  while(i!=1) {
		if (i%2==0) { // se for par divide por dois e conta um ciclo (checked)
  		i=i/2;
  		cont++;
		} else if (i%2!=0) { // se n�o for multiplica por tres e soma um e conta um ciclo(checked)
  		i=3*i+1;
  		cont++;
		}
	}
	return cont; // retorna a quantidade de ciclos do numero (checked)
}
int main() {
  int i,j,max;
  while(scanf("%d%d",&i,&j) != EOF) {
    max=1;
    printf("%d %d ",i, j);
    if(i<j) {
    	for(;i<=j;i++) {
      	if(max<ciclo(i)) {
	        max=ciclo(i);
  	  	}
    	}
    } else {
        for(;i>=j;i--) {
          if(max<ciclo(i)) {
        		max=ciclo(i);
    			}
    		}
    }
	printf("%d\n",max);
}

return 0;
}
