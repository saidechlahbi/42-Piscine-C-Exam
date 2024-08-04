#include<unistd.h>

void ft_print_numbers(void){
    int i = 48;

    while (i < 58){
        write(1,(char[]){i},1);
        write(1,"\t",1);
        i++;
    }
}

int main(void){
    ft_print_numbers();
    return 0;
}