# include <stdio.h>
# include <math.h>
/*
    Usuário GitHub: augustoletsch
    O código abaixo implementa uma calculadora.
    O sistema exibe as opções até que o usuario decida sair do programa.
    Caso o usuário digite 1 executa raiz.
    Caso o usuário digite 2 executa soma(1º+2º), subtração(1º-2º), multiplicação(1º*2º), divisão(1º/2º) e potência(1º^2º).
    Caso o usuário digite 0, encerra o programa.
    Os calculos são realizados e exibidos ao usuário.
    OBS: Os calculos são realizados através de função para possível reutilização do código.
*/
float soma(float num1, float num2){
    return num1+num2;
}
float subtracao(float num1, float num2){
    return num1-num2;
}
float multiplicacao(float num1, float num2){
    return num1*num2;
}
float divisao(float num1, float num2){
    return num1/num2;
}
float potencia(float num, float potencia){
    return pow(num,potencia);
}
float raiz(float num){
    return sqrt(num);
}
int main(){
    float num1,num2;
	int operacao;
	printf("Olá, Me chamo Augusto Bihre Letsch.\n Curso de ADS.\n Estudo na universidade LaSalle.\n Numero de Matricula 202210456.\n");
	do{
    	printf("Escolha uma opção\n");
    	printf("1 - Raízes\n");
    	printf("2 - Soma, subtração, multiplicação, divisão e potência\n");
        printf("0 - Sair\n");
	    scanf("%d",&operacao);
    	if(operacao!=0){
        	printf("Digite o primeiro número:\n");
        	scanf("%f",&num1);
        	printf("Digite o segundo número:\n");
        	scanf("%f",&num2);
    	}else{
    	    printf("Até breve!");
    	}
    	if (operacao ==1){
        	printf("Raízes:\n");
        	printf("√%.2f = %.2f:\n",num1,raiz(num1));
        	printf("√%.2f = %.2f:\n",num2,raiz(num2));
        }
        if (operacao ==2){
        	printf("Soma: %.2f\n",  soma(num1,num2));
        	printf("Subtração: %.2f\n", subtracao(num1,num2));
        	printf("Multiplicação: %2.f\n",multiplicacao(num1,num2));
        	printf("Divisão: = %.2f\n",divisao(num1,num2));
        	printf("Potência: %2.f\n",potencia(num1,num2));
        }
	}while(operacao!=0);
}