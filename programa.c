
#include <stdio.h>

float sal,sal_liq,INSS,sind,ir,hora,hora_total,desc;

int main()
{
    printf("Qual valor da hora trabalhada?\n");
    scanf("%f",&hora);
    printf("Quantas horas são trabalhadas no mês?\n");
    scanf("%f",&hora_total);
    
    sal=hora*hora_total;
    ir=sal*0.11;
    INSS=sal*0.08;
    sind=sal*0.05;
    desc=ir+INSS+sind;
    sal_liq=sal-desc;
    
    printf("Seu salário bruto é de R$%.2f, foi pago R$%.2f para o INSS e R$%.2f para o sindicato.\n",sal,INSS,sind);
    printf("Com esses descontos, seu salário liquido é de R$%.2f",sal_liq);

    return 0;
}