#include<unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}
int main(void){
    char c;
    write(1,"ecrire une caractaire \n",21);
    write(1,"\n",1);

    read(0,&c,1);
    write(1,"\n",1);
    ft_putchar(c);

    return 0;
}