
#include <stdio.h>

int main(){
    int a,b;
    a=0;
    b=0;

    printf("Hello World!");

    printf("１つ目の整数を入力してください：");
    scanf("%d",&a);
    printf("２つ目の整数を入力してください：");
    scanf("%d",&b);

    if(a>b){
        printf("%dは%dより大きい",a,b);
    }
    else if(b>a){
        printf("%dは%dより大きい",b,a);
    }
    else{
        printf("%dと%dは等しい"a,b);
    }

    return 0;
}