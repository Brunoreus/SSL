#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* trabajo0;
    trabajo0 = fopen("output.txt","wt");
    
    if(trabajo0 == NULL)
    {
        printf("Error en la creacion del archivo\n\n");
    }
    else
    {
        printf("Hello, world!\n"); //Se escribe en la terminal

        fprintf(trabajo0,"Hello, world\n"); //Se escribe para el archivo .txt
    }
    

    fclose(trabajo0);
    return 0;
}