#include <stdio.h>
int main ()
{
    float peso;
    float estatura;
    float imc;
    printf("Peso en kg: ");
    scanf("%f", & peso);


    printf("Estatura  en m: ");
    scanf("%f", & estatura);


    imc=peso/(estatura*estatura);

    if(imc>=40.0)
    {
        printf("obesidad clase 3");
    }
     else if(imc>=35.0 )
     {
         printf("obesidad clase 2");
     }
        else if(imc>=30.0 )
     {
         printf("obesidad clase 1");
     }
          else if(imc>=25.0 )
     {
         printf("sobrepeso");
     }
        else if(imc>=18.5 )
     {
         printf("normal");
     }   else if(imc>=0.0 )
     {
         printf("bajo peso");
     }


return 0;
}
