 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s pruebaC.txt arroz\n", argv[0]);
        return 1;
    }

    FILE *archivo = fopen(argv[1], "r");
    if (archivo == NULL) {
        fprintf(stderr, "No se pudo abrir el archivo %s\n", argv[1]);
        return 1;
    }

    char *palabraClave = argv[2];
    int contador = 0;
    char linea[1024];


    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        char *pos = linea;

        while ((pos = strstr(pos, palabraClave)) != NULL) {
            contador++;
            pos += strlen(palabraClave);
        }
    }

    fclose(archivo);

    printf("coincidencias: %d\n", contador);

    return 0;
}
