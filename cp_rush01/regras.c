#include <unistd.h>

#define SIZE 4

int g_tabuleiro[4][4];
int g_num_array[15];

int ft_verificar_argc(int argc, char    *argv[])
{   
    int num;

    num =0;
    while (argv[1][num] != '\0')
    {
        num++;
    }

    if (argc > 16)
    {
        write(1, "ERRO1", 5);
        return (0);
    }
    else if (argv[2] == NULL)
    {
        write(1, "ERRO2", 5);
        return (0);       
    }
    else if (num < 16 || num > 16)
    {   
        write(1, "ERRO2", 5);
        return (0);         
    }
    return(1);
}

int ft_converter(char   *argv[], int matriz[4][4])
{   
    int contador_array;
    int temp_int;
    char temp_char;

    contador_array = 0;
    while (contador_array != 16)
    {
        temp_int = 0;
        temp_char = argv[1][contador_array];
        temp_int = temp_char - 48;
        g_num_array[contador_array] = temp_int;
        contador_array++;
    }
    return (1);
}

int is_valid(int sudoku[SIZE][SIZE], int row, int col, int num) {
    int i = 0;

    // Verifica se o número já está presente na mesma linha
    while (i < SIZE) {
        if (sudoku[row][i] == num) {
            return 0;
        }
        i++;
    }

    // Verifica se o número já está presente na mesma coluna
    i = 0;
    while (i < SIZE) {
        if (sudoku[i][col] == num) {
            return 0;
        }
        i++;
    }

    return (1);
}