//Cv ,Ce, Cs, Fv, Fe, Fs
#include <stdio.h>
int campeao(int cv ,int ce,int cs,int fv,int fe,int fs) {
	if(cv*3+ce > fv*3+fe) {
		return("C");
		} 
		else if((cv*3+ce < fv*3+fe)) {
			return("F");
		} else {
			if(cs>fs) {
				return("C");
			}
			else if(fs>cs) {
				return("F");
			} else {
				return("=");
			}
	}
}
int main() {
	int cv ,ce, cs, fv, fe, fs;
	scanf("%d%d%d%d%d%d",&cv ,&ce, &cs, &fv, &fe, &fs);
		printf(campeao(cv ,ce, cs, fv, fe, fs));
	return 0;
}
