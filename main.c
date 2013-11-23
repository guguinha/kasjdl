#include <stdio.h>
#include <string.h>

main()
{
   float deposito,juros,rendimento,total_rendm;
   
   printf("digite o valor do deposito \n");
   scanf("%f",&deposito);
   printf("digite o valor da taxa de juros\n");
   scanf("%f",&juros);
   rendimento = deposito*juros/100;
   total_rendm = deposito+rendimento;
   
   printf("este deposito rendeu %.2f X$ de juros \n O total depois do rendimento eh: %.2f X$",rendimento,total_rendm);
}
