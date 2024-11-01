# include <stdio.h>
# include <stdlib.h>

int isValid(int x, int y, int n, int m)
{
    if (x < 0 || y < 0 || x >= n || y >= m)
        return 0;
    return 1;
}

void m1234(){
    printf("hello ");
} 
void invoices(){
    printf("world ");
} 
void abcd (){
    printf("abcd ");
}
void A12345(){
    printf("A12345 ");
}
// 1A2345(）
void power (){
    printf("power ");
}
void salestax(){
    printf("salestax ");
}


int main()
{
   printf("Printint all fuctions\n");
    m1234();
    invoices();
    abcd();
    A12345();
    power();
    salestax();

    return 0;

}