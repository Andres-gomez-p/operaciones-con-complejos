//Programa para operaciones con numeros complejos.
//Andrés Gómez CODIGO 2154714 David Sandoval
//Version 1.0

//incluir librerias.
#include<stdio.h>
//
//Definición de prototipos
float pedir_valor ();
void operar ();

//Codigo principal
int main (void) 
{
	float real1=0,real2=0,img1=0,img2=0,operacion=0,resultado=0,resultadoi=0;//declaro variables
	printf("\n\tIngrese los números a operar\n");
	printf("\n\tIngrese la parte real del primer número:\n");
	real1=pedir_valor ();	//ingresa parte real del primer valor
	printf("\n\tIngrese la parte imaginaria del primer número:\n");
	img1=pedir_valor ();	//ingresa parte imaginaria del primer valor
	printf("\n\tIngrese la parte real del segundo número:\n");
	real2=pedir_valor ();	//ingresa parte real delsegundo valor
	printf("\n\tIngrese la parte imaginaria del segundo número:\n");
	img2=pedir_valor ();	//ingersa parte imaginaria del segundo valor
	printf("\n\tIngrese 1 para sumar, 2 para restar, 3 para multiplicar, 4 para dividir:\n");
	operacion=pedir_valor ();	//recibe el dato para seleccionar la operación
	operar (&operacion,&real1,&real2,&img1,&img2,&resultado,&resultadoi);
	printf("el resultado es: %f",resultado);	//imprimo el resultado
	printf("\t+(%fi)\n",resultadoi);


}
//Definición de funciones
float pedir_valor ()
{
	float valor=0;
	scanf("%f",&valor);
	return valor;	//retorna el valor a la variable en main()
}
void operar (float *opp,float *rea1,float *rea2,float *im1, float *im2, float *resr,float *resi)
{
	if (*opp==1)
	{//suma
	*resr=(*rea1)+(*rea2);
	*resi=(*im1)+(*im2);
	}
	if (*opp==2)
	{//resta
	*resr=(*rea1)-(*rea2);
	*resi=(*im1)-(*im2);
	}

	if (*opp==3)
	{//multiplicación
	*resr=((*rea1)*(*rea2))-((*im1)*(*im2));
	*resi=((*rea1)*(*im2))+((*im1)*(*rea2));
	}

	if (*opp==4)
	{//división
	*resr=(((*rea1)*(*rea2))+((*im1)*(*im2)))/((*rea2)*(*rea2)+(*im2)*(*im2));
	*resi=(((*im1)*(*rea2))-((*rea1)*(*im2)))/((*rea2)*(*rea2)+(*im2)*(*im2));
	}
}

