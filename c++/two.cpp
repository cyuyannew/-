#include <stdio.h>
#include <wchar.h>
#include <locale.h>

// 估算中文token数（按1.2系数保守计算）
size_t estimate_tokens(const wchar_t *text) {
    size_t chinese_count = 0;
    for (; *text; ++text) {
        // 判断Unicode中文范围（基本区+扩展A区）
        if ((*text >= 0x4E00 && *text <= 0x9FFF) ||
            (*text >= 0x3400 && *text <= 0x4DBF)) {
            chinese_count++;
            }
    }
    return (size_t)(chinese_count * 1.2);
}

int main() {
    setlocale(LC_ALL, ""); // 设置本地化支持宽字符
    const wchar_t *text = L"Dee能处理多少中文？";

    size_t tokens = estimate_tokens(text);
    wprintf(L"文本: %ls\n估算token数: %zu\n", text, tokens);
    return 0;
}
// int main()
// {
//     printf("%d\n",sizeof(char));
//     printf("%zu\n",sizeof(long));
//     printf("%d\n",sizeof(short));
//     printf("%d\n",sizeof(long long));
//     return 0;
// }

// 计算机中的单位
// bit 比特位
// byte 字节     1字节 = 8bit
// kb
// mb
// tb
// pb


// int main()
// {
//     int age = 20;
//     double price 66.6;
//     return 0;
// }


// 变量、常量  分为局部变量和局部变量


// int main()
// {



//     return 0;
// };

// int a = 100;  全局变量
// int main ()
// {
//     int a = 10;  局部变量。局部变量优先
//     printf("a=%d\n",a);
//     return 0;
// }

// 写一个代码计算两个整数的和

//int main()
//{
//    int num1 = 0;
//    int num2 = 0; //初始化
//    // 输入两个整数
//    scanf ("%d %d",&num1,&num2);  //scanf是输入
//    // 求和
//    int sum = num1 + num2;
//    printf("%d\n",sum);
//    return 0;
//}
//声明来自外部的符号
//extern int  (要声明的对象，不用加括号);
//变量的作用域和生命周期

//int a = 10;
//int main()
//{
//
//    {
//        printf("a=%d\n",a);
//    }
//    printf("a=%d\n",a);
//    return 0;
//}

//变量的生命周期


//字面常量

