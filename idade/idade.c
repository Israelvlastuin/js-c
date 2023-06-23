#include <stdio.h>
int main()
{
    int idade, i, n, q, media;
    int numeros[100];
    printf("quantas idades vao ser cauculadas?");
    scanf("%d", &n);

    for (i = 0; i < 100; i++)
    {
        printf("quais são essas idades?");
        scanf("%d", &q);
        if (q < 0)
            break;
        }
        numeros[i] = q;
    int r=0;
    for (n=0 ;n<i ; n++ ){
        r=r+numeros[i];
    }
r=r/i;
}