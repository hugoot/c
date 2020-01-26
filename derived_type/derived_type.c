#include "derived_type.h"
// void derived_type(void)
// {

// printf(":derived_type begin\n");


// }



void derived_type(void)
{
printf(":derived_type begin\n");
// pointertype_add();
// void_enum();
derived_type_point();

//  arraytype();
// arraytype_zscg();

}




void pointertype_add(void)
{
    //从0到1  其他类型*ip 是定义
    //声明并赋值之后*ip 取值 ip是地址，且地址与第二步的赋值的&基本类型相同
    printf(":pointertype\n");
    //（基本数据类型）整型指针 整型和浮点型都一样了
    // int  *ip = NULL; 
    // int  var = 20;
    // ip = &var;
    
    // printf("Address of var variable: %p\n", &var  );
    // printf("Address stored in ip variable: %p\n", ip );
    // printf("Value of *ip variable: %d\n", *ip );



      //数组类型

    //结构类型，是指结构体类型吗?之前指针的赋值方法也有查和增 这里就不写了


} 

void void_enum(void) 
{
printf(":void_enum\n");
    //枚举没有指针 void类型应该属于复合类型的函数那里
    //妈的分的什么东西 算了还是照他的分吧
    
    // void 类型指针
    //void 基本数据类型会报错
    //void 指针指示定义不会报错，但是void指针在赋值之前不能进行++等操作，
    //因为不知道一次+多少个内存空间，也不需要强转，直接赋值就行了
    //其他非void类型的指针 赋值其他类型的，比如double赋值到int，会进行转换，可以不用写强制转换也不会报错
    // void c;
    // int *a;
    // void *p;
    // double *d;
    // p=a;
    // d=a;


} 


void derived_type_point(void)
{
printf(":derived_type_point\n");
    //派生类型指针
    //指针的指针 
    //二级指针把 大概叫，也很少用 就写个定义算了
    //以后叫指向指针的指针
    // int  **ip = NULL;


    //指针数组
    // int *array[]={"gege","hah","xixi"};
    // printf(",array:%s\n",array[0]); 
    //C 指向数组的指针
    //这里有点小晕了啊，
    //其实也挺好分辨 上面这种分不开 叫指针数组
    //下面这种分的开 属于指针 然后以后指针都说指向**的指针就不会错了
   /* 带有 5 个元素的整型数组 */
//    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
//    double *p;
//    int i;
 
//    p = balance;
 
//    /* 输出数组中每个元素的值 */
//    printf( "使用指针的数组值\n");
//    for ( i = 0; i < 5; i++ )
//    {
//        printf("*(p + %d) : %f\n",  i, *(p + i) );
//    }
//    printf( "使用 balance 作为地址的数组值\n");
//    for ( i = 0; i < 5; i++ )
//    {
//        printf("*(balance + %d) : %f\n",  i, *(balance + i) );
//    }

    // 指向结构体的指针
    // struct student stu_1;
    // struct student *p;
    // p = &stu_1;
    // // stu_1.num = 89101;
    // (*p).num=2444;
    // //用指针这种得加个括号有点烦
    // //不赋值的话会是随机值 且每次执行的值一样
    // strcpy(stu_1.name, "Li Lin");
    // stu_1.sex = 'M';
    // stu_1.score = 89.5;
    // printf("NO. :%ld\nname: %s\nsex:%c\nscore:%f\n", stu_1.num, stu_1.name, stu_1.sex, stu_1.score);
    // printf("NO. :%ld\nname: %s\nsex:%c\nscore:%f\n", (*p).num, (*p).name, (*p).sex, (*p).score);


// 也就是说以下三种形式等价：

// a. 结构体变量.成员名
// b. (*p).成员名
// c. p-> 成员名

// 指向结构体数组的指针

    // struct student stu[3] = {{10101, "Li Lin", 'M', 18},
    //                     {10102, "Zhang Fun", 'M', 19},
    //                     {10103, "Wang Min", 'F', 20}};

    // struct student *p;
    //     printf("No.    name        sex        age\n");
    // for(p=stu; p<stu+3;p++)
    // {
    //     printf("%5d %-20s %2c %4d\n", p->num, p->name, p->sex, p->age);
    //     printf("%5d %-20s %2c %4d\n", (*p).num, p->name, p->sex, p->age);

    // }


//用结构体变量和指向结构体的指针作函数参数
    // struct student stu;
    // stu.num = 12345;
    // strcpy(stu.name, "Li Li");
    // stu.score[0] = 67.5;
    // stu.score[1] = 89;
    // stu.score[2] = 78.6;
    // print123(&stu);
 
 // print(stu);

    // 简单链表  有个图结构图在思维导图那里  也是属于指针的赋值吧
    //  struct student a, b, c, *head, *p;
    // a.num = 99101; a.score = 89.5;
    // b.num = 99103; b.score = 90;
    // c.num = 99107; c.score = 85;//对结点的 num 和 score 成员赋值
    // head = &a;//将结点 a 的起始地址赋给头指针 head
    // a.next = &b;//将结点 b 的起始地址赋给 a 结点的 next 成员
    // b.next = &c;
    // c.next = NULL;// c 结点的 next 成员不存放其他结点地址
    // p = head;//使 p 指针指向 a 结点
    // do
    // {
    //     printf("%ld %5.1f\n", p->num, p->score);// 输出 p 指向的结点的数据
    //     p = p->next;//使 p 指向下一结点
    // }while(p != NULL);//输出完 c 结点后 p 的值为 NULL
//建立动态链表 这个太长了就不看了 估计用不到 用到再说吧
//总的来说这些链表就是一个head abc next指向 head指向最开始的a 
//然后p一开始指向head 不断+1 就是遍历 
//结构体+指针运用 链表

  

    //函数指针 指针声明的形式要跟函数一样，
        /* p 是函数指针 */
    // int (* p)(int, int) ;
    // p= & max; // &可以省略
    // int a, b, c, d;
 
    // printf("请输入三个数字:");
    // scanf("%d %d %d", & a, & b, & c);
 
    // /* 与直接调用函数等价，d = max(max(a, b), c) */
    // d = p(p(a, b), c); 
 
    // printf("最大的数字是: %d\n", d);
/**
 * @brief 
 * 
 * 
有些编译器 支持用结构体变量名做地址的方式
但一般不推荐
因为非标准
正确的方式是用&变量名
比如
struct type s;
那么s的地址为&s
我这个s就不能直接用，显示不同结构体地址一样
 *
 * @param[in]  链表类，勉强属于指针增删查改把。。毕竟指针指向下一个这样相当于指针的增咯..
 * 指针取消指向下一个就表示删咯.. 查就算了，改还是能改的 
 * 每个结构体可以分为数据域和指针域
 *这里内存存储不一定是相邻的，只是结构体里面有个指针指向下一个结构体地址而已
 双链表就是还能指向上一个
(*pnode1).next =pnode2;
应该是只有指针能这么取里面的指针成员赋值，如果是普通的 struct node node1
取不了里面的指针成员， 必须是结构体指针才能取里面的指针成员
而且指针也能取里面的普通成员，所以以后定义结构体要用结构体指针而不是普通的结构体~
指针取什么成员都是(*).
普通结构体都是.
然后node2 普通结构体名赋值到指针成员里面会报错，要加&，还得加个符号
如果是指针结构体 就直接结构体名就可以了 所以以后都用指针结构体把
typedef struct node 只有定义的时候写了一次typedef 其他都不用写了
 *
 * 链表指向并不是说内存上相连，而是结构体里面有个指针连向下一个结构体地址而已
 * @return 
 */
//之所以是结构体的指针next 是因为想指向的内容是结构体
//所以除了能叫指针的zscg 也能是结构体的增删查改。
struct node node1;
struct node* pnode1;
node1.data=123;
pnode1=&node1;
pnode1->data=123;
(*pnode1).data=123;
printf(",node1.data:%d\n",node1.data);
printf(",(*pnode1).data:%d\n",(*pnode1).data);
//两种访问方法 看你喜欢怎么访问
printf(",node1:%p\n",&node1);
printf(",pnode1:%p\n",pnode1);
printf(",*pnode1:%p\n",*pnode1);
//第一个结构体名是node1结构体的地址 跟数组名一样
//第二个是指针的地址 第三个是指针的内容 也就是结构体的地址
struct node node2;
struct node* pnode2;
node2.data=456;

printf(",node2.data:%d\n",node2.data);
printf(",node1.data:%d\n",node1.data);
pnode1->next =pnode2;
(*pnode1).next =pnode2;
(*pnode1).data =789;

//增
node1.next=pnode2;
// node1.next=&node2;  
//pnode2 和 node2存储位置不一样哈 不过都是增了
printf(",node2:%p\n",&node2);
printf(",node2:%p\n",pnode2);
printf(",node2:%p\n",pnode1->next);
printf(",(*pnode1).data:%d\n",(*pnode1).data);
//增
printf("last:%p,%p,%p\n",pnode1,(*pnode1).next,pnode2);
//(*).多个 要这么写。。好烦 结构体指针还是用箭头把-> 结构体就用.
//写出箭头和.会有提示
//改
pnode1 ->next ->data=444;
(*(*pnode1).next).data=568;
//查
printf(",(*pnode1).next.data:%d\n",pnode1 ->next ->data);


//删
(*pnode1).next=NULL;
printf(",pnode1,(*pnode1).next:%p,%p\n",pnode1,(*pnode1).next);




// printf(",node1.next:%p\n",*(node1.next));


//这里不用加指针符号?
} 

//枚举结构体共用体 增删查改都只能定义的时候写就不列举了 查操作常用的也在指针那里用了 

//函数类型的增删查改..就是指函数的声明和定义之类的，
//还有一种增是那种指向函数的指针，指针那里有讲
//回调函数目的获取形参值，主要是这几个增的

// void print(struct student stu)
// {
//     printf("%d\n%s\n%f\n%f\n%f\n", stu.num, stu.score[0], stu.score[1], stu.score[2]);
//     printf("\n");
// }
//上面这个不行，结构体变量作为形参，修改后的成员不能返回到主调函数里面去

// void print123(struct student *p)
// {
//     printf("%d\n%s\n%f\n%f\n%f\n", p->num, p->name, p->score[0], p->score[1], p->score[2]);
//     printf("\n");
// }
//
//上面这个是结构体指针,地址传递 所  以可以传递



//总的来说 为了数据流都能传输，最后选择通用的，自己写的话全部都用指针，别人如果别人试过没错那就不用管，会调用就行，


int max(int x, int y)
{
    return x > y ? x : y;
}


//数组类型 来了~重点字符串来了
void arraytype(void)
{

printf(":arraytype\n");
// 0-1
double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
double balance1[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
/**
 * @brief 
 *
 * @param[in]  
 *指针形式赋值
 * @return 
 */

   int n[ 10 ]; /* n 是一个包含 10 个整数的数组 */
   int i,j;

//    /* 初始化数组元素 */         
//    for ( i = 0; i < 10; i++ )
//    {
//       n[ i ] = i + 100; /* 设置元素 i 为 i + 100 */
//    }
   
//    /* 输出数组中每个元素的值 */
//    for (j = 0; j < 10; j++ )
//    {
//       printf("Element[%d] = %d\n", j, n[j] );
//    }
   char *str="Hello";
char arrgs[]="Hello";
/**
 * @brief 
 *
 * @param[in]  
 * 查改值可以同时同数组形式和指针形式
 * @return 
 */

//     int a[2] = {1,2};
//     printf("a      = %d\n",a[0]);
//     printf("*(a+0) = %d\n",*(a + 0));
//     printf("a[1]   = %d\n",a[1]);
//     printf("*a     = %d\n",*a);
//     printf("*(a+1) = %d\n",*(a + 1));
// //     事实上 a[0] 、a[1]...a[i] 代表的都是值，a、(a+0)、(a+1)、(a+i) 代表的是地址；另外这里的 a 代表整个数组的首地址，相当于 a[0] 的地址，而这里 (a+1) 就代表的是 a[0+1] 的地址。
// // 正如文章中提到的：所有的数组都是由连续的内存位置组成。最低的地址对应第一个元素，最高的地址对应最后一个元素，即是说 (a+i) 就代表的是 a[0+i] 的地址。
//     //前面这几个用来0到1可以赋值值
//     printf("\n");
//     printf("a    的地址：%p\n",a);
//     printf("(a+0)的地址：%p\n",(a + 0));
//     printf("(a+1)的地址：%p\n",(a + 1));
//     // %p 读入一个指针
//     printf("\n");

/**
 * @brief 
 *
 * @param[in]  
 * 数组部分赋值其他都为0，形式不一定
 * @return 
 */

    // int a[10]={12, 19, 22 , 993, 344};
//     表示只给 a[0]~a[4] 5 个元素赋值，而后面 5 个元素自动初始化为 0。

// 当赋值的元素少于数组总体元素的时候，不同类型剩余的元素自动初始化值说明如下：

//  对于 short、int、long，就是整数 0；
//  对于 char，就是字符 '\0'；
//  对于 float、double，就是小数 0.0。

// 2) 只能给元素逐个赋值，不能给数组整体赋值。例如给 10 个元素全部赋值为 1，只能写作：

// int a[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
// 而不能写作：

// int a[10] = 1;
//不赋值就自动是各种数的0表达式，
/**
 * @brief 
 *
 * @param[in]  
 * 指针指向以数组
 * @return 
 * 
 * 指针与数组名的区别

指针：也是一个变量，存储的数据是地址。

数组名：代表的是该数组最开始的一个元素的地址。

 */

// int a[10];
// int *p;
// p = &a[0] // 可以写成 p = a;
/**
 * @brief 
 *函数的参数中 数组类型参数 int a[]本质是指针 可以直接换成 int *a;
可以用数组的运算符[]进行运算，而且可以通过a[0]就直接修改了外面的数组元素;
size of(a) == sizeof(int *) 所以函数内部没法用sizeof得到数组的长度 只能传一个len;
 实际上数组是 const 的指针，所以不能被赋值。 如果 int a[] = {1,2,5,7}; int b[]，
 由于 int b[]实质上等价于 <===> int const *b;    b 是一个常数，不能被改变，
 初始化出来代表这个数组就不能再改变。 b = a; (错误) 数组变量之间是不可以这样互相赋值的。
  而 int *q = a; 这样是可以的。
 * @param[in]  
 *可以用指针来修改值，可是用指针定义赋值之后求长度不好求，单单拿来修改值应该是好用的
 * @return 
 */
//三个临时变量
int i1,j2,k3;i1=0;k3=i1;j2=k3;i1=j2;
//以后就这么写吧= =三个临时变量,循环够用了，用前先置0，这样写可以没警告


//  int* a=malloc(  1* sizeof(int));
// *(a)=123; 
// *(a+1)=456;
// printf(",*a:%d,%d\n",*(a),*(a+1));

// int const *a ={1,2,4,5};
 // int a[]={2,3,5,6};
// printf(",sizeof(a)/ sizeof(a[0]):%d\n",sizeof(a) / sizeof(*a));

// printf(",sizeof(a)/ sizeof(a[0]):%ld\n",sizeof(a)/ sizeof(a[0]));
//说是这样说可是 这种求长度的方法只能是定义的时候写数组的形式，求长度还是很必要的
//，指针求了长度是2，数组求了长度是4 数组定义是正常的，指针写法是错的并且警告很多

/**
 * @brief 
 *整型(字符)数组
 * @param[in]  
 *
 * @return 
 */

// char a[]="runoob"; // 这样赋值之后在结尾会自动加上'\0'。
// char a1[]={'r','u','n','o','o','b'}; // 这样赋值是整整好好的6个空间不会自动加上\0

/**
 * @brief 
结构体数组
 * @param[in]  
 *
 * @return 
 */
/* struct student haha[]={{10101,"Li Lin", 'M', 18, 87.5, "103 Beijing Road"},
            {10101,"Li Lin", 'M', 18, 87.5, "103 Beijing Road"},
            {10101,"Li Lin", 'M', 18, 87.5, "103 Beijing Road"}};
printf(",haha:%d\n",haha[0].mum); */


} 

void arraytype_zscg(void)
{
printf(":arraytype_zscg\n");
//三个临时变量
int j1,k2,l3;j1=0;k2=j1;l3=k2;j1=l3;
    
// char a[]="runoob"; // 这样赋值之后在结尾会自动加上'\0'。
// char a1[]={'r','u','n','o','o','b'}; // 这样赋值是整整好好的6个空间不会自动加上\0

    /**
     * @brief 
     * 增 基本数据整型数组
     * 在我们没有明确数组的元素个数时，在程序中想知道数组单元个数可以使用 sizeof(a)/sizeof(a[0]), 
     * sizeof(a) 是得到数组 a 的大小，sizeof(a[0]) 是得到数组 a 中单个元素的大小
     * （因此可以不必要是a[0],a[i]都行），eg:

     * @param[in]  
     *    * 往0 1 往第0个数和第1个数之间插入一个（非要来个0开始，这里要问清楚被人说的数是第0个还是第1个开始，我是默认0个吧..）
     * 上面分解就是要先把第1个数及后面往后移一个位，最后再赋值第1个数，中间前面不用变
     * 有点链表那味了啊
     * @return 
     */
    
/*     int a[]={1,2,3,4,5};
    int b;
    b=sizeof(a)/sizeof(a[0]);
    printf("数组元素个数为：%d\n",b);
    // a[5]=6;
    // printf(",a[6]:%d\n",a[5]);
   for (j1 = b-1; ; j1--)
   {
//    printf(",a[j1]:%p\n",(a+j1));
   a[j1+1]=a[j1];
   printf(",a[j1]:%d\n",a[j1+1]);
   printf("j1:%d\n",j1);
   if(j1==1)
   {
   a[j1]=3;
   break;
   }
   }
   printf(":end---\n");
   
   for (j1 = 0; ; j1++)
   {
   printf(",a[j1]:%d\n",a[j1]);
   
   printf("j1:%d\n",j1);
   if(j1==sizeof(a)/sizeof(a[0])-1)break;
   }        
 */    //即使超过了一开始的数组长度，也能用数组的方式复制，这样的话用指针也差不多咯，而且这种写法方便调试啊，以后也写这个吧
    //一些复杂的循环多个break分开用这个好多了，而且写之前的for循环一开始就得想结束条件什么。肯定是调试一下或者写完一遍才大概能猜出啊    
    //查地址必须用指针形式（a+1）%p,查数据可以用指针*(a+1)或者a[1]
    //这里好像发现个问题，初始化后在定义范围内没赋值的应该是0，可是没在定义范围的是1,额好像试了试又变成0了..可能之前赋值了一下
    /**
     * @brief 
     *
     * @param[in]  
     *增 基本数据类型整型中的字符型
    在第0位和第1位之间插入a，应该跟上面的差不多
     * @return 
     */
    
/*      char a[]="runoob";
     printf(",a:%s\n",a);
     printf(",a:%c\n",a[0]);
     printf(",a:%d\n",a[0]);
       int b;
    b=sizeof(a)/sizeof(a[0]);
    // a[5]=6;
    // printf(",a[6]:%d\n",a[5]);
   for (j1 = b-1; ; j1--)
   {
//    printf(",a[j1]:%p\n",(a+j1));
   a[j1+1]=a[j1];
   printf(",a[j1]:%c\n",a[j1+1]);
   printf("j1:%d\n",j1);
   if(j1==1)
   {
   a[j1]='a';
   break;
   }
   }
   printf(":end---\n");
   
//      for (j1 = 0; ; j1++)
//    {
//    printf(",a[j1]:%c\n",a[j1]);
   
//    printf("j1:%d\n",j1);
//    if(j1==sizeof(a)/sizeof(a[0])-1)break;
//    }        
printf(",a:%s\n",a);
 */
//好像对于其他整型数组就没有%s这样 因为/0比较特殊，其他的都是0也是可以当成一个数，/0的话字符就平时没用到

//用指针初始化并赋值，无法这么简单一个式子求出长度，应该是可以通过+1 判断为空来判定长度 可是太麻烦
/**
 * @brief 
 *
 *
 * @param[in]  
 * 删除第一位u
 * 只需要删字符就行了，数都差不多
 * 思路应该是直接往前覆盖就好了 删除第1位的话 第1位前面不用动 1位到最后往前移一个数 从2开始
 * @return 
 */

/*      char a[]="runoob";
     printf(",a:%s\n",a);
     printf(",a:%c\n",a[0]);
     printf(",a:%d\n",a[0]);
       int b;
    b=sizeof(a)/sizeof(a[0]);
    printf(",b:%d\n",b);
    
    //循环途中改了/0数据 那个b也是会改的
    // a[5]=6;
    printf(",a[6]:%d\n",a[5]);
   for (j1 = 2; ; j1++)
   {
//    printf(",a[j1]:%p\n",(a+j1));
   a[j1]=a[j1+1];
   printf(",a[j1]:%c\n",a[j1]);
   printf("j1:%d\n",j1);
   if(j1==b-1)
   {
//    a[j1]='a';
   break;
   }
   }
   printf(":end---\n");
   

printf(",a:%s\n",a); */

/**
 * @brief 
 *
 * @param[in]  查询字符串中o的位置
 *
 * @return 
 */

   /*   char a[]="runoob";
     printf(",a:%s\n",a);
     printf(",a:%c\n",a[0]);
     printf(",a:%d\n",a[0]);
       int b;
    b=sizeof(a)/sizeof(a[0]);
    printf(",b:%d\n",b);
    
    //循环途中改了/0数据 那个b也是会改的
    // a[5]=6;
    printf(",a[6]:%d\n",a[5]);
   for (j1 = 0; ; j1++)
   {
//    printf(",a[j1]:%p\n",(a+j1));
//    a[j1]=a[j1+1];
   printf(",a[j1]:%c\n",a[j1]);
   printf("j1:%d\n",j1);
if (('o') ==a[j1])
{
printf("if:'0'==a[j1]\n");
printf("search:%d\n",j1);

}

   if(j1==b-1)
   {

   break;
   }
   }
   printf(":end---\n");
   

// printf(",a:%s\n",a); */

/**
 * @brief 
 *
 * @param[in]   改出现o的位置为k
 *
 * @return 
 */

char a[]="runoob";
     printf(",a:%s\n",a);
     printf(",a:%c\n",a[0]);
     printf(",a:%d\n",a[0]);
       int b;
    b=sizeof(a)/sizeof(a[0]);
    printf(",b:%d\n",b);
    
    //循环途中改了/0数据 那个b也是会改的
    // a[5]=6;
    printf(",a[6]:%d\n",a[5]);
   for (j1 = 0; ; j1++)
   {
//    printf(",a[j1]:%p\n",(a+j1));
//    a[j1]=a[j1+1];
   printf(",a[j1]:%c\n",a[j1]);
   printf("j1:%d\n",j1);
if (('o') ==a[j1])
{
printf("if:'0'==a[j1]\n");
printf("search:%d\n",j1);
a[j1]='k';

}

   if(j1==b-1)
   {

   break;
   }
   }
   printf(":end---\n");
   

 printf(",a:%s\n",a); 

//写完了，总的来说就是增和删比较难点，增的逻辑就是最后面开始往后移一位插入到0或者1中间就1以及后面要这样后移
//删的话就是删除第1位就是 第二位以及后面从最前面开始往前移一位
//0.5就移1以及后面（增） 1就移2以及后面（删的逻辑）
} 