#include <stdio.h>
#include <math.h>

int main(){
	printf("@KKKBini©\n\n");
	while(True)
	{
		float a, b, c;
		printf("Digite o valor de a: ");
		scanf("%f", &a);
		printf("Digite o valor de b: ");
		scanf("%f", &b);
		printf("Digite o valor de c: ");
		scanf("%f", &c);
		printf("\n%.2fx^2 + %.2fx + %.2f\n", a, b, c);
		if(a == 0){
			printf("O valor de A e igual a 0, impossivel calcular.\n");
			printf("\no--------------------o\n\n");
		} else
		{
			//delta
			float delta = pow(b,2)-4*a*c;
			if(delta == 0){
				printf("\nDelta = 0\tRaiz do delta = 0\t");
				float x = (-b + 0)/(2*a);
				printf("x = %.2f\n", x);
			} else if(delta < 0)
			{
				printf("\nDelta = %.2f\tRaiz do delta = Nenhuma raiz real\n", delta);
			} else
			{
				float raizdelta = sqrt(delta);
				printf("\nDelta = %.2f\tRaiz do delta = %.2f\n", delta, raizdelta);
				//bhaskara
				float x1 = (-b+raizdelta)/(2*a);
				float x2 = (-b-raizdelta)/(2*a);
				printf("\nx1 = %.2f\tx2 = %.2f\n", x1, x2);
			}
			//direção da parabola
			if(a > 0)
			{
				printf("\nAbertura da parabola virada para cima\n");
			} else
			{	
				printf("\nAbertura da parabola virada para baixo\n");
			}
			//vertices da parabola
			float xvert = -b/(2*a);
			float yvert = -delta/(4*a);
			printf("\nX do vertice = %.2f\tY do vertice = %.2f\n", xvert, yvert);
			printf("\no--------------------o\n\n");
		}
	}
}
