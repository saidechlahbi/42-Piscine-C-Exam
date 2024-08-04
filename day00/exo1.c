#include<unistd.h>

void ft_print_alphabet(void){
    int i = 97;
    
    
    while (i < 123){
        write(1,(char[]){i},1);
        write(1,"\t",1);
        i++;
    }
}
int main(void){
    ft_print_alphabet();
    return 0;
}