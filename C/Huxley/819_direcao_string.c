#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void comparar(char dir_1[10], char dir_2[10])
{
    if (dir_1[0] == 'n' && dir_2[0] == 's' || dir_1[0] == 's' && dir_2[0] == 'n')
    {
        printf("180");
    }
    
    else if (dir_1[0] == 'n' && dir_2[0] == 'n' || dir_1[0] == 's' && dir_2[0] == 's')
    {
        printf("0");
    }
    
    else if (dir_1[0] == 'l' && dir_2[0] == 'o' || dir_1[0] == 'o' && dir_2[0] == 'l')
    {
        printf("180");
    }
    
    else if (dir_1[0] == 'l' && dir_2[0] == 'l' || dir_1[0] == 'o' && dir_2[0] == 'o')
    {
        printf("0");
    }
    
    else
    {
        printf("90");
    }
    
}

void minuscula(char dir[10], int i)
{
    if (dir[i] == '\0' || dir[i] == '\n')
    {
        return;
    }
    
    dir[i] = tolower(dir[i]);
    
    minuscula(dir, i + 1);
}

int main() 
{
    char dir_1[10], dir_2[10];
    
    scanf("%s %s", dir_1, dir_2);
    
    minuscula(dir_1, 0);
    minuscula(dir_2, 0);
    
    comparar(dir_1, dir_2);
    
	return 0;
}