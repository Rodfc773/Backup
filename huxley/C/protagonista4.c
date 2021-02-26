#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler_matriz(int matriz[][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }
    
}
void preencher_array_coluna(int j, int k, int matriz[][8])
{
    for ( j; j < 8; j++)
    {
        
        if (matriz[j][k] == 2 || matriz[j][k] == 3)
        {
            break;
        }
        if (matriz[j][k] == 0)
        {
            matriz[j][k] = -1;
        }
        
        
    }
    while (j >= 0)
    {
        
        if (matriz[j][k] == 2 || matriz[j][k] == 3)
        {
            break;
        }
        if (matriz[j][k] == 0)
        {
            matriz[j][k] = -1;
        }

        j = j - 1;
    }
    
    
}
void preencher_linha(int j, int k, int matriz[][8])
{
    for ( k = 0; k < 8; k++)
    {
        if (matriz[j][k] == 2 || matriz[j][k] == 3)
        {
            break;
        }
        if (matriz[j][k] == 0)
        {
            matriz[j][k] = -1;
        }
        
    }
    while (k >= 0 )
    {
        
        if (matriz[j][k] == 2 || matriz[j][k] == 3)
        {
            break;
        }
        if (matriz[j][k] == 0)
        {
            matriz[j][k] = -1;
        }
        k = k - 1;

    }
    
    
    
}
int checkar_rei(int j, int k, int matriz[][8])
{
    if (j - 1 < 0)
    {
        if(k - 1 < 0)
        {
            if ( (matriz[j + 1][k + 1] == -1 || matriz[j][k + 1] == 0) || matriz[j + 1][k] == -1)
            {
                return 1;
            } 
            else
            {
                return 0;
            }
            
               
        }
        else if (k + 1 > 8)
        {
            if ( (matriz[j + 1][k - 1] == 0 || matriz[j + 1][k] == 0) || matriz[j][k - 1] == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
            
            
        }
            
    }
    else if (j + 1 >= 8)
    {
        if(k - 1 < 0)
        {
            if ( (matriz[j - 1][k + 1] == -1 || matriz[j][k + 1] == -1) || matriz[j - 1][k] == -1)
            {
                return 1;
            } 
            else
            {
                return 0;
            }
            
            
               
        }
        else if (k + 1 > 8)
        {
            if ( (matriz[j - 1][k - 1] == -1 || matriz[j - 1][k] == -1) || matriz[j][k - 1] == -1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
            
              
        }
    }
    else
    {
        if ((matriz[j - 1][k + 1] == -1 || matriz[j][k + 1] == -1) || (matriz[j - 1][k] == -1 || matriz[j + 1][k + 1] == -1) )
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
        
    }
    
    
    
}
void xeque_mate(int i, int testes, int matriz[][8], int aux)
{
    if (i < testes)
    {
        
        ler_matriz(matriz);

        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                if(matriz[j][k] == 1)
                {
                    preencher_array_coluna(j, k, matriz);
                    preencher_linha(j, k, matriz);
                }
                
                
            }
            
        }
        
        for ( int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                if (matriz[j][k] == 3)
                {
                    aux = checkar_rei(j, k, matriz);
                }
                
            }
        }
        
        if (aux == 1)
        {
            printf("Yes\n");
        }
        else if(aux == 0)
        {
            printf("No\n");
        }
        
        xeque_mate(i + 1, testes, matriz, aux);
        
    }
    
}
int main()
{
    int testes;

    scanf("%d", &testes);

    int tabuleiro[8][8];


    xeque_mate(0, testes, tabuleiro, 0);
}