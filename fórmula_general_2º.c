#include <stdio.h>
	int a, b, c, bcuad, disc, disc2;
	/*las variables son los coeficientes de la fórmula, busca fórmula general para entender como se estructura el programa. disc2 es la segunda parte del discriminante, adiv el divisor y bcuad es b²*/
void main(){
/*aquí tomo los valores de las integrales*/
	printf("valor de a:\n");
	scanf("%d", &a);
	printf("valor de b:\n");
	scanf("%d", &b);
	printf("valor de c:\n");
	scanf("%d", &c);
/*aquí se estructura la ecuación en general*/
	bcuad=b*b;
	disc2=4*a*c;
	disc=bcuad-disc2;
	a=2*a;
	b=-b;
/*se imprime la ecuación*/
	printf("(%d +-(%d)^1/2)/%d\n", b, disc, a);
}