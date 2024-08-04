#include<unistd.h>
#include<stdio.h>
void ft_is_negative(int n){
    if (n < 0)
        write(1,"N",1);
    
    else
        write(1,"P",1);
    
    
}

int main(void){
    int i;
    write(1,"ecrire une valeure \n",20);
    scanf("%d",&i);
    ft_is_negative(i);
    return 0;
}
