#include "in_out.h"
void in_out(void)
{
printf(":in_out begin\n");
date_flow();
}


int a =10;
void date_flow(void)
{
printf(":date_flow\n");
    // int a;
    // float x;
    // char c1;
    // // scanf("a=%d\n",&a);
    // scanf("a=%d",&a);
    // scanf("x=%f",&x);
    // scanf("c1=%c",&c1);
    // printf("a=%d,x=%f,c1=%c",a,x,c1);
    // //  a=1x=1.2c1=3 输入这种形式才能有对应的数值
  //可以选择得到的是基本数据类型整型（c字符型也是基本数据类型的整型范畴）还是字符数组
    //但是有时候麻烦在要格式一样

    
//   char str[100];
//      printf( "Enter a value :");
//     gets( str );
//      printf( "\nYou entered: ");
//    puts( str );
//    return ;
//得到的只能是字符数组
} 

//总的来说 为了数据流都能传输，最后选择通用的，自己写的话全部都用指针，别人如果别人试过没错那就不用管，会调用就行，
  //如果不是指针 可以用&传递进函数出函数， 如果是指针 就直接传进去形参，反正形参都要写指针