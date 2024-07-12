#include<stdio.h>
#include<string.h>
//1.字面常量
//    30；就是这个字面常量
//    3.14；字面浮点型的常量
//    'w';字符常量
//    "abc"字符串常量
//以上就是字面常量

//本身是变量，用const修饰之后有常量的属性，但不是真正的常量
//1.字面常量
//2.const修饰的常变量
//3.define定义的标识符常量
//4.枚举常量


//2.const 修饰的常变量
//int main()
//{
////    const int a = 10;  //const修饰的常变量,不能被改变。在c语言中，const修饰的a，本质是变量
//////    但是不能被修改，有常量的属性
//////   a = 20;
////    printf("a=%d\n",a);
//    const int n = 10;  //是个变量，即使用const修饰后，但并不是真正的常量
//    int arr[10] = {0}; //arr[10]就是创建一个数组，这个数组是一块连续的空间，里面可以存放10个整形
//    //arr[] 里面需要是一个常量
//    return 0;
//}
////理解：变量是个空间，常量是个实际的值，变量用来容纳常量，const只是锁定了值，但并不是把空间变成数值

//3.define定义的标识符常量
//%s 是用来打印字符串的 比如  printf("%s\n",某)
//#define MAX 100 //MAX是一个标识符
//#define APP "abcs"
//int main ()
//{
//    printf("%d\n",MAX);
//    int a = MAX;
//    printf("%d\n",a);
//    printf("%s\n",APP);
//    return 0;
//}

//4.枚举常量
//enum枚举的关键字
//enum Color
//{
//    //这三个可能的取值就是枚举常量
//    RED,
//    BLUE,
//    GREEN
//};
//const char* color_names[] = {"RED","BLUE","GREEN"};
//int main()
//{
//    //int num = 10;
//    enum Color color = RED;
//    enum Color MyCOLOR = BLUE;
//    printf("color = %s\n",color_names[color]);
//    printf("MyCOLOR = %s\n",color_names[MyCOLOR]);
//    return 0;
//}

//字符'www'单引号  单引号是字符双引号是字符串
//字符串的结束标志是 \0的转义字符
int main()
{
    char arr1[] = "abcdef";//f后还有个隐藏的 \0
    char arr2[] = {'a','b','c','d','e','f','\0'}; //没有结束标志 \0
    int len = strlen("abc");//求字符串长度的一个函数，string length, 头文件 <string.h>,有\0结束标记，数的时候不包含\0
    printf("%d\n",len);
    return 0;
}

