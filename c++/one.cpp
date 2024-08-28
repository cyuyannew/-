#include<stdio.h>
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
//int main()
//{
//    char arr1[] = "abcdef";//f后还有个隐藏的 \0
//    char arr2[] = {'a','b','c','d','e','f','\0'}; //没有结束标志 \0
//    int len = strlen("abc");//求字符串长度的一个函数，string length, 头文件 <string.h>,有\0结束标记，数的时候不包含\0
//    printf("%d\n",len);
//    return 0;
//}


//int main()
//{
//    int a, b, c, max;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a>b)    max = a;
//    else    max = b;
//    if (c>max)  max = c;
//    printf("max = %d",max);
//    return 0;
//}

//转义字符

//%d打印整形
//%c打印字符
//%s打印字符串
//%f打印float类型的数据
//%lf打印double类型的数据
//1、 \?防止解析成三字母词 现在不用了
//2、 \'
//3、\“
//4、\\  用于表示一个反斜杆
//5、\a 是警告符
//6、\r是回车
//7、\t是水平制表符是Tab
//8、\ddd 表示1-3个八进制的数字，如：\130 X
//9、\xdd dd表示2个十六进制的数字，如：\x30 0
int main()
{
    //printf("%s\n","dev"); 打印字符串
    //printf("%c\n",'\''); //加\转变 ‘的意思
    //printf("%c\n",'\"');
    //printf("abcd\\0ef"); //让\0不再是转义字符里的\，就是一个普普通通的\,可以打印出来的斜杆
    //printf("c:\test\test.c"); // \t也是转义字符，是水平制表符，就是键盘上的Tab
    //printf("c:\\test\\test.c"); //路径打印的时候一定是双斜杆
    //printf("%c\n",'\130');//代表 130这个八进制转换成十进制的数字
    //printf("%c\n",'\x63');
    return 0;
}