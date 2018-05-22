#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void troca(int *a, int *b)
{
    int temp;

    if (*a < *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

void ordenar(int jogos, int games[jogos], int i, int j)
{
    if (jogos == i)
    {
        return;
    }
    
    if (j < jogos)
    {
        if (games[i] < games[j])
        {
            troca(&games[i], &games[j]);
        }

        return ordenar(jogos, games, i, j + 1);
    }
    
    ordenar(jogos, games, i + 1, i + 1);
}

void pontos(int jogos, int gols, int games[jogos], int i, int *cont)
{
    if (jogos == i)
    {
        return;
    }
    
    else
    {
        if (games[i] > 0)
        {
            *cont += 3;
        }
        
        else if (games[i] == 0)
        {
            if (gols > 0)
            {
                games[i] += 1;
                
                gols -= 1;
                
                *cont += 3;
            }
            
            else
            {
                *cont += 1;
            }
        }
        
        else
        {
            while (gols > 0)
            {
                games[i] += 1;
            
                gols -= 1;
                
                if (games[i] > 0)
                {
                    *cont += 3;
                    break;
                }
            
            }
            
            if (games[i] == 0)
            {
                *cont += 1;
            }
        }
    }
    
    pontos(jogos, gols, games, i + 1, cont);
}

int main() 
{   
    int jogos, gols;
    int lost = 0;
    int i = 0;
    int j = 0;
    
    scanf("%d %d", &jogos, &gols);
    //printf("%d %d\n", jogos, gols);    

    int matriz[jogos][2];
    int games[jogos];

    for (i = 0; i < jogos; i += 1)
    {
        games[i] = 0;
        
        for (j = 0; j < 2; j += 1)
        {
            scanf("%d", &matriz[i][j]);
        }
    }   
    
    for (i = 0; i < jogos; i += 1)
    {
        games[i] = matriz[i][0] - matriz[i][1];
    }

    ordenar(jogos, games, 0, 1);

    /*for (i = 0; i < jogos; i += 1)
    {
        printf("%d\n", games[i]);
    }*/
    
    int cont = 0;
    
    pontos(jogos, gols, games, 0, &cont);
    
    printf("%d", cont);

    return 0;
}