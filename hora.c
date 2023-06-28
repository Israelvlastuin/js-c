#include <stdio.h>
int main()
{
    int seg, minutos, horas;
    int i = 0;
    printf("digite a quantidade de segundos");
    scanf("%d", &seg);
    while (seg > 60)
    {
        if (seg > 60)
        {
            seg = seg - 60;
            minutos++;
        }
    }
    while (minutos > 60)
    {
        if (minutos > 60)
        {
            minutos = minutos - 1;
            horas++;
        }
    }
    printf("%d : %d : %d", horas, minutos, seg);

}