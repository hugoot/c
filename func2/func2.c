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
// Arithmetictypes_add_special_0to1(c,1,3,one_assignment,44,&d);
// printf("d:%d\n",d);
// --------------------------改系列------------------
// 各种进制定义，负数就在前面-
// int e  = 0b111111;
// int f = -0b110010; 
// int g = 015;
// int h = 0X2A;  //换算成十进制为 42
// //打印二进制数并没有现成的格式数值，只能自行编写函数打印。
// //下面是打印10,8,16进制的int
// printf(",e:%d,%o,%x,%x,%d\n",h,h,h,e,e);

//主要有utf-8（我这里是）,gbk，gbk2312,ascii
// char i[5];
// strcpy(i,"啊");
// i[0]=(unsigned char)0xe5;
// i[1]=(unsigned char)0x95;
// i[2]=(unsigned char)0x8a;

// i[0]=(unsigned char)0xB0;
// i[1]=(unsigned char)0xA1;

// printf("i[0]:%x i[1]:%x i[2]:%x i[3]:%x i[4]:%x\n",\
// (unsigned char)i[0],\
// (unsigned char)i[1],\
// (unsigned char)i[2],\
// (unsigned char)i[3],(unsigned char)i[4]);
// printf(",i:%s\n",i);
//被我猜对了..%s可以输出字符串也能输出中文字符
//暂时没找到c怎么转,只看到python的，java好像也没有
//只知道是内存是这种形式的 用utf-8，最高八位e5，中八位95，最低位8a十六进制,后面都是0
//输出时要强制转换成unsigned char，不然就变成负数了，因为编码是以8位的无符号整数为单位的
// unsigned int j;
// j=(unsigned char)i[0]*65536+(unsigned char)i[1]*256+(unsigned char)i[2];
// printf(",j:%c\n",j);
//(unsigned char)是上面跟下面都要加，不然变负号，
//可是这样直接加还是不太行，应该是整型跟数组完全存储结构不一样的..只能用数组的形式来转换

//&像0，就是两个数只要其一有0就是0
//|像1，就是两个数只要其一有1就是1
//想要某一1位，比如想让第123位值0（最右边第一个是第0位）
unsigned char k=0b11111;
unsigned char l=0b0001;
unsigned char m=0b10000;
printf(",k:%x\n",k);
printf(",k:%x\n",k&l);
printf(",k|m:%x\n",k|m);
printf(",l|(0b11)<1:%x\n",(l|(0b111)<<1));
//0b别写成ob,0b的高度是一致的，ob是o只到b的一半，可以看高度来判断
//<<左右移是两个箭头，一个箭头不会报错并且结果是错的！
//置1的话前面不写不会影响前面，因为前面补0 |对补0没影响

printf(",k&(0b000):%x\n",k&(0b000)<<1);
//第一位开始连续两个00&置0，，(<n)表示从第几位开始算起
//但是置0有个问题就是前面没有写的位数是默认会补0的，
//也就是本来是打算第一位第二位置0,其他位不变，但是这么写实际的效果是第一位前面全部置0
//置0要比置1麻烦，前面不写会默认补0置0，可以转化为置1再取反  
printf(",k&~(ob):%x\n",k&~((0b111)<<1));
printf("~(ob000):%x\n",~(0b000));
//只能上面这么取反写，中间还不能写0匹配，下面这个写0匹配取反是全部变了..
//无论置0还是置1都是中间ob111 只不过一个是| 一个是&^ <<n都代表从第几位连续开始 从最后一位是0位开始算
//以后写这种习惯就是，连着就一起写比如说一个数n=0的0123位置1 连续且从0开始
//就n|(0b1111)<<0
//然后一个数567位置1（连续且第四位开始） n|(0b111)<<5
//然后这个数再67位置0（连续且从第4位开始） 123位置0（连续且从1位开始）
//&~(11)<<6 &~(111)<<1 ,最后应该是得到11的十六进制
//!!!置0一定要加括号&~((0b11)<<6) &~(0b111<<1)
//不加括号结果不一样的，取反之前一定要移位操作运算了，
//0b有没有在这里结果一样但是还是写上把，可能复杂的会有印象，写了也更加清晰
// 总的写法就是0b0|(0b1111)<<0|(0b111)<<5&~(11)<<6&~(111)<<1

// unsigned int n=0|0b1111<<0|0b111<<5;
// n=n&~(0b111<<1)&~(0b11<<6);
//尼玛玄学，现在看起来就是多个置1写在1次或者仅多个置0写在一起没问题，1个置1跟1个置0混合在一起没问题，但是多个置10混合就有问题
//所以置1置以后分开写吧..同一类置1或置0之间用+也是不行的 只能用|或&
//最后结果是21 置1 1110 1111 置0后  0010 0001

// printf("0b0|(0b1111)<<0|(0b111)<<4&~(11)<<4&~(111)<<1:%x\n",\
// n);
// printf("0x2f:%x\n",0xef&~(0b111<<1));
// )&(~0b111<<1)&(~(0b11<<6))

// (x &= (1<<y))
// printf(",ob1111&(1<<2):%d\n",0b1101&(1<<1));
//获取某一位数的值1<<1 后面的1就是你要获取的位数，1248等等或者是0,0的话就代表那个位没值，不是0的话就代表这个位有值

// 十进制转字符串
// 网上找的转换
// int n;
// char s[100];
// printf("Input n:\n");
// scanf("%d",&n);
// printf("the string : \n");
// itoa1 (n,s);
// return 0;



// stdlib.h实现的
// int num = 100;
// char str[25];
// itoa(num, str, 10);
// printf("The number 'num' is %d and the string 'str' is %s. \n" ,
// num, str);
/*
atoi不是ANSI标准函数，不是每个系统都支持。
而且是除了微软的VC以外大部分系统都不支持。
标准的办法应该用snprintf。 上面这部分我运行不了，找不大
*/





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
// --------------------------改系列---------------------

static void itoa1 (int n,char s[])
{
int i,j,sign;
if((sign=n)<0)//记录符号
n=-n;//使n成为正数
i=0;
do{
       s[i++]=n%10+'0';//取下一个数字
}
while ((n/=10)>0);//删除该数字
if(sign<0)
s[i++]='-';
s[i]='\0';
for(j=i;j>=0;j--)//生成的数字是逆序的，所以要逆序输出
       printf("%c",s[j]);
}
//staic 也解决不了了吗，对了要写一个同名函数优先用哪个的



