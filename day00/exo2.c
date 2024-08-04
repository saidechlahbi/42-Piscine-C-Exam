#include<unistd.h>

void ft_print_reverse_alphabet(void){
    int i = 122;

    while (i > 96){
        write(1,(char[]){i},1);
        write(1,"\t",1);
        i--;
    }
}

int main(void){
    ft_print_reverse_alphabet();
    return 0;
}