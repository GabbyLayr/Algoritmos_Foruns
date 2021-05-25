//Bhaskara
//entrada: valores de a, b, c
//sa�da: resultado x' e x"
//processamento: formula de bhaskara

#include<stdio.h> //biblioteca de entrada e sa�da de dados : printf e scanf
#include<math.h> //biblioteca de fun��es matematicas
int main ( ){ //inicio do algoritmo: fun��o main
//declara��o: double (mais espa�o na mem�ria para maior preis�o dos resultados)
	double a, b, c, x1, x2;
//entrada: definir valores
	printf ("Digite o valor de a: "); //apresenta em tela pede valor de a
	scanf ("%lf", &a); //processao  valor de a, aloca 1 espa�o na memoria
	printf ("Digite o valor de b: "); //apresenta em tela, pede valor de b
	scanf ("%lf", &b); //processa o valor de b, aloca 2 espa�o na memoria
	printf ("Digite o valor de c: "); //apresenta em tela, pede valor de c
	scanf ("%lf", &c); //processa o valor de c, aloca 3 espa�o na mem�ria
//processamento: formula de bhaskara
	x1 = (-(b) + sqrt(pow (b, 2) -  4 * a * c)) / (2 * a); //calculo x1, sqrt: dado da biblioteca math.h para calculo de raiz
	//pow: dado da biblioteca math.h para calcular potencia
	x2 = (-(b) - sqrt(pow (b, 2) -  4 * a * c)) / (2 * a); //calculo x2
//saida: apresentar resultado de x1 e x2 ao usuario
	printf ("Resultado de x1 = %.2lf \n", x1); //apresenta ao usuario resultado de x1
	printf ("Resultado de x2 = %.2lf", x2); //apresenta ao usuario resultado de x1
	return 0; //retorno do algoritmo
} //final do algoritmo

