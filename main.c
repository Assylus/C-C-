#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

    int main()
    {
        setlocale(LC_ALL, "Portuguese");


        char sexo;
        char covid;
        char acompanhar;
        char iniciar;
        char reiniciar;

        printf("**Menu Inicial**\n\n");
        printf("Iniciar Cadastro de Pacientes Covid? (s ou n)");
        scanf(" %c", &iniciar);
        printf("\n\n");


    do{
        
        if(iniciar == 's')
        {
            printf("Ok, Iniciando o Cadastro...\n\n");

        }

            else{
                printf("Finalizando Cadastro...\n\n");
                return 0;
            }
        
    printf("Primeiramente insira o Sexo: (M ou F):  \n\n");
    scanf("%s", &sexo);

    printf("Ok, agora inserir se positivo ou negativo: (p ou n): \n\n",covid);
    scanf("%s", &covid);

        if(covid == 'p')
        {
            printf("Encaminhar para secretaria de saude!!\n\n");
            
        }
            else{
                printf("Encaminhar para pronto atendimento para novos exames!!!\n\n");
                return 0;
            }
            
            
    printf("Deseja realizar novo cadastro? (s ou n):  ");
    scanf(" %c", &reiniciar);

            if(reiniciar == 'n')
            {
                printf("Finalizando o cadastro\n\n\n\n\n");
                return 0;
            }
            

    } 
    
    while (reiniciar == 's');
    
    







        return 0;
    }