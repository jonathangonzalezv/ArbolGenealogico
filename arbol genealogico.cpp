#include <stdio.h>
#include <stdlib.h>

int main()
{
	char opcion;
	printf("ARBOL GENEALOGICO\n");
	printf("A- BISABUELOS\n");
	printf("B- ABUELOS\n");
	printf("C- PADRES\n");
	printf("D- TIOS\n");
	printf("E- PRIMOS\n");
	printf("F- HERMANOS\n");
	printf("G- SOBRINOS\n");
	printf("H- SALIR\n");
	
	printf("TECLEE LA OPCION A EJECUTAR\n");
	scanf("%s",&opcion);

switch(opcion) 
{
    case 'A': 
    printf("   BISABUELOS  \n");
    printf("BISABUELO Y BISABUELA PADRES DE MI ABUELO PATERNO\n");
    printf("BISABUELO Y BISABUELA PADRES DE MI ABUELA PATERNO\n");
   printf("BISABUELO Y BISABUELA PADRES DE MI ABUELO MATERNO\n");
    printf("BISABUELO Y BISABUELA PADRES DE MI ABUELA MATERNA\n");
    break;
    case 'B': 
    printf("   ABUELOS   \n");
    printf("ABUELO Y ABUELA PATERNOS\n");
    printf("ABUELO Y ABUELA MATERNOS\n");
    break;
    case 'C': 
    printf("    PADRES   \n");
    printf("PAPA Y MAMA\n");
    break;
    case 'D': 
    printf("     TIOS \n");
    printf("TIO Y TIA PATERNOS \n");
    printf("TIO Y TIA PATERNOS\n");
    printf("TIO Y TIA MATERNOS \n");
    printf("TIO Y TIA MATERNOS\n");
    printf("TIA Y TIO MATERNOS\n");
    break;
    case 'E': 
    printf("PRIMOS\n");
    printf("PRIMO PATERNO\n");
    printf("PRIMO PATERNO\n");
    printf("PRIMA PATERNO\n");
    printf("PRIMA PATERNO\n");
    printf("PRIMA PATERNO\n");
    printf("PRIMA PATERNO\n");
    printf("PRIMO MATERNO\n");
    printf("PRIMO MATERNO\n");
    printf("PRIMO MATERNO\n");
    printf("PRIMO MATERNO\n");
    printf("PRIMA MATERNA\n");
    break;
    case 'F': 
    printf("    HERMANOS\n");
    printf("HERMANO\n");
    printf("HERMANA\n");
    break;
    case 'G': 
    printf("  SOBRINOS\n");
    printf("SOBRINA\n");
    printf("SOBRINA\n");
    printf("SOBRINA\n");
    break;
    case 'H': 
    printf("BYE");
    break;
	}
	
}

