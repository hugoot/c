#include "func2.h"


void func2(void)
{

printf(":begin\n");

add();
}


// add
// type integer标准整数类型
/*
byte
1
char 
unsigned char
2
short
unsigned short
4
int
unsigned int
long
unsigned long
float
8
double
其他几个跟图片有些还不匹配 不过也很少用..win10 64位的数据
unsigned 跟没有unsigned的区别就是 unsigned 没有负数 没有unsigned 有负数 
不过大小是一样的 正数往大推就是了，int long float虽然都是四字节但是有些大小
浪费在精度上了，所以数值大小 int 大于float大于long 精度则相反
*/

void add(void)
{

// printf("sizeof(longing): %d\n",sizeof(long));
//-------------------从0到1-----------------
// printf(":add\n");
// char a =123;
// printf("%d:\n",a);
// char b;
// Arithmetictypes_add_0to1(b);
// printf("b:%d\n",b);
// 说明这种通过形参（是整型数据类型）直接传值（值传递）是不可以的，内存会被释放掉

// b=Arithmetictypes_add_0to1(b);
// printf("b:%d\n",b);
// 通过返回值可以传递

// pArithmetictypes_add_0to1(&b);
// printf(",b:%d\n",b);
//说明这种通过形参（是派生数据类型中的指针类型）直接传值（指针传递,引用传递）是可以的 对于基本类型来说要传进去基本类型的地址& 

//--------------------------从1到n----------------
unsigned int c =1211;
// 从最前面 最后面插入3
// printf(",c*10+3:%d\n",c*10+3);
// printf(",c+3*1000000:%d\n",c+3*1000000);
//正数第2，倒数第2位插入3
// printf(",c*10+3:%d\n", (c-c%10+3)*10+c%10);
// printf("c:%d\n",c%100000+3*100000+(c/100000*1000000));
//(c/100000*100000) 原来这里低位有数C是会变的..我们理解上不会变 但c语言会把后面小数约去

//正数第3，倒数第3位插入3 感觉以后就23位实验算了 1可能会+0隐藏一些规律
// printf(",c-c100-c10:%d\n",((c-c%100)/10+3)*100+c%100);
// printf("c:%d\n",c%10000+3*10000+(c/10000*100000));

// 加多个数33 正数第2，倒数第2位插入33
//其实这也可以理解为取出每一个数 然后1个1个加嘛..取出每一个数属于什么操作？ 应该属于同类型改 只不过是改的不是自己 改的是同类型的中间数据类型（整型）
// printf(",c*10+3:%d\n", (c-c%10+33)*10+c%10);

// // 换个数重复执行上面操作
// unsigned int d=1234567;
// printf(",c*10+3:%d\n", (d-d%10+3)*10+d%10);
// printf(",c-c100-c10:%d\n",((d-d%100)/10+3)*100+d%100);
// printf(",c-c100-c10:%d\n",((c-c%1000)/100+3)*1000+c%1000);
// printf(",c-c100-c10:%d\n",((c-c%10000)/1000+3)*10000+c%10000);
// printf(",c-c100-c10:%d\n",((c-c%100000)/10000+3)*100000+c%100000);

// //我透，上面这个换了数字竟然不用改..
// // printf("c:%d\n",d%100000+3*100000+(d/100000*1000000));
// printf("c:%d\n",d%1000000+3*1000000+(d/1000000*10000000));



//上面这个要改是不是值多用% 少用/..
//想了想应该是不关事，因为下面这个的第二个一开始就用了100000也就是数的位数
//那么这里问题就来了 是用位数算法结合写呢，还是顺应着不用位数只用第一种写呢..
//我是个完美主义者~


unsigned int d=0;
// printf(",c-c100-c10:%d\n",((d-d%100)/10+3)*100+d%100);
 
// printf("digit(c):%d\n",digit(c));
// printf(",digit(000):%d\n",digit(011));

// Arithmetictypes_add_1to2(c,0,110,&d);
// printf("Arithmetictypes_add_1to2,:%d\n",Arithmetictypes_add_1to2(c,7,7,&d));
// digit(c);
Arithmetictypes_add_special_0to1(c,1,3,one_assignment,44,&d);
printf("d:%d\n",d);

}

char Arithmetictypes_add_0to1(char aa)
{
printf(":Assignment_add\n");
printf(",aa:%d\n",aa);
aa=5;
printf(",aa:%d\n",aa);
return aa;
}


char* pArithmetictypes_add_0to1(char *aa)
{
printf(":Assignment_add\n");
printf(",aa:%d\n",*aa);
//只是定义未被赋值前，是个随机值不一定是0
*aa=5;
printf(",aa:%d\n",*aa);
return aa;
}
// 这种一个char* 和一个char的不同重名，也许从内存上来说是一个意思？


int digit(int x)
{   
    // static int dig[100]={0},i=0;
    int dig[100]={0},i=0;
    for(i=0;;i++){//循环，取出各位上的数字
        if((x/10!=0)||(x%10!=0)){//判断是否已经取完
            dig[i]=x%10;
            x=x/10;
            printf("%d\n",dig[i]);
            
        }
        else break;
    }
    dig[i]=-1;
    // return dig;

    return i;
}


// int* digit(int x)
// {   
//     static int dig[100]={0},i=0;
//     for(i=0;;i++){//循环，取出各位上的数字
//         if((x/10!=0)||(x%10!=0)){//判断是否已经取完
//             dig[i]=x%10;
//             x=x/10;
//             printf("%d\n",dig[i]);
//         }
//         else break;
//     }
//     dig[i]=-1;
//     return dig;
// }

// 返回值不一样char 和形参不一样都别重名吧 好像都会报错
// 不过写的有点类似 char 和char* 下次写不类似 重名的看看会不会报错
//以后的返回值都写返回运行状态，什么改变一个值，传入一个值都通过形参！



/**
 * @brief 增加（插入）一个个位数CC到aa数的bb位置，并且赋值输出到dd
 *
 * @param[in]  aa   被增（插入）数
 * @param[in]  bb   插入的位置 最后一位为0，前面+1
 * @param[in]  cc   插入数 ！不可以由0开头
 * @param[out]   dd     输出结果
 *
 * @return input_err  输入位置大于被插入数的位数长度或者小于0
 * @return input_err  插入数CC小于0
 * @return input_success    成功得到dd（输出结果）
 */


int Arithmetictypes_add_1to2(int aa,int bb,int cc,int *dd)
{       

     printf(":Arithmetictypes_add_1to1\n");
      printf(",aa:%d\n",aa);
    printf(",bb:%d\n",bb);
    printf(",cc:%d\n",cc);
    printf(",*dd:%d\n",*dd);

    // 最开始和最后面还是要写一下的，特殊情况，第二和第三个用于研究复杂规律
    // printf(",c*10+3:%d\n",c*10+3);
    // printf(",c*10+3:%d\n", (d-d%10+3)*10+d%10);
    // printf(",c*10+3:%d\n", ((d-d%10)/1+3)*10+d%10);
//    printf(",c-c100-c10:%d\n",((d-d%100)/10+3)*100+d%100);

printf(",digit(aa) :%d\n",digit(aa));
printf(",digit(cc) :%d\n",digit(cc));

if ((digit(aa)) <bb || bb<0 ||cc<0)
{
printf("(digit(aa)) <bb || bb<0 ||cc<0\n");
printf("return state: input_err\n");
return input_err;
}
else if (bb == 0)
{
    //cc插入数等于0的时候 diggit cc多少位数会变成0位 
    //可是两个00呢，如果+1仍然只会当1位..得转换为字符串才可以解决了
    //试试纯粹用整型看看能不能解决，应该是解决不了了..竟然发现一个大问题
    //011是判断只有一位的，000是0位，0开头都是有点问题..这里感觉就是数据类型的根本问题咯，我解决不了
printf(":0\n");
*dd=aa*pow(10,digit(cc))+cc;
printf(",*dd:%d\n",*dd);
}
else 
{
printf(":others\n");
    *dd=((aa-aa%(int)pow(10,bb))/(int)pow(10,bb-1)*pow(10,digit(cc)-1)+cc)*(int)pow(10,bb)+aa%(int)pow(10,bb); 
    printf("*dd:%d\n",*dd);
}
   printf("return state: input_success\n");
   return input_success;
}

//以后写传入的不用指针* 会改变外部变量的才用*，但是别人都用*呢。。
//可是我这样写确实能区分传入和传出啊，同用指针就区分不了了


//往基本数据类型特殊形式1后面的（后面开始算起）第一个位置加入1个基本数据类型整型2


//这里这个因为是根据特殊形式找的，没有说特定的起始或者终止位置开始写
//找的是匹配位置。所以从第一个开始，特定的位置有起始终止的概念所有从0开始写,好吧，起始是我懒了懒得融在一起了，以后尽量用1开始..
/**
 * @brief 往特殊形式的1/n个指定位置（基本数据类型整型，只能是1个现在）
          的后面加入1/n数据类型（整型），并且有两种模式，一种从开始匹配位后面全部插入   
          ，另一种仅在匹配位后面插入。
 * @param[in] 被插数  
 * @param[in] 匹配的数（目前只能是个位）
 * @param[in] 匹配到的第几个数开始插入或仅插入（从后面看起，1开始）
 * @param[in] 匹配模式（仅插入一次模式，全插入模式）
 * @param[in] 插入数
 * @param[out] 赋值
 *
 * @return 状态
 */


int Arithmetictypes_add_special_0to1(int aa,int bb,int cc,int dd,int ee,int *y)
{   
    
    printf(":Arithmetictypes_add_special_0to1\n");
    if ((0) >=aa || 0> bb || 0>=cc || 0>=ee)
    {
    printf("if: >=aa || 0> bb || 0>=cc\n");
    printf("return state: input_err\n");
    return input_err;
    }

    if ((one_assignment !=dd) &&(Infrontofall_assignment !=dd ))
    {
    printf("if:one_assignment||Infrontofall_assignment !=dd \n");
    printf("return state: input_err\n");
    return input_err;
    }
    // static int dig[100]={0},i=0;printf("return state: input_err\n");
    int x =aa;
    int a =0;
    int c =1;
    int d =0;
    int dig[100]={0},i=0;
    for(i=0;;i++){//循环，取出各位上的数字
        if((x/10!=0)||(x%10!=0)){//判断是否已经取完
            dig[i]=x%10;
            x=x/10;
            printf("%d\n",dig[i]);
        }
        else break;
    }
    dig[i]=-1;
    // return dig;
    for(i=0;;i++)
    {
        if ((-1) !=dig[i])
        {
        printf("if:-1!=dig[i]\n");
                if ((bb) ==dig[i])
            {
            printf("if:1==dig[i]\n");
            if ((one_assignment) ==dd)
            {
            printf("if:one_assignment==dd\n");
              // // 仅第二个1后面赋值
                 if ((cc) !=c++)
            {
            printf("if:2==cc\n");
            continue;
            }    
            }
            // 第二个1打后全部都赋值
            else if ((Infrontofall_assignment) ==dd)
            {
            printf("if:Infrontofall_assignment==cc\n");
            if ((cc) !=c)
            {
            printf("if:2==cc\n");
            c++;
            continue;
            }      
            }
        
            Arithmetictypes_add_1to2(aa,i+a,ee,&aa);
            a=a+digit(ee);
        
            //只是第一次需要额外操作，后面都不用想想怎么写比较好，这样写还得定义个变量，麻烦
            }
            else 
            {
            printf(":no found\n");
            d++;
            printf(",d:%d\n",d);
            }
        }
        else  break;
 
    }
    if ((d) == digit(aa))
    {
    printf("if:d==digit(aa)\n");
    printf("return state: match_notfind\n");
    return match_notfind;
    }
    else 
    {
    printf(":others\n");
    *y =aa;
    printf(",*y:%d\n",*y);
    printf("return state: match_find\n");
    return match_find;
    }
  
    // printf(",dig[3]:%d\n",dig[3]);
    // printf(",dig[8]:%d\n",dig[8]);
    //dig[8]=-1 原来这种写法dig[100]={0} 后面没赋值的都是等于-1 如果是只初始化dig[100]，里面的值都是随机值
    // return i;
}
