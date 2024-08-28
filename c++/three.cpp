#include<stdio.h>
#include<string.h>

// one
//int main()
//{
//    int a, b, c, max;//定义整形
//    scanf("%d%d%d", &a, &b, &c);//扫描数字
//    if (a > b)  max = a;
//    else    max = b;
//    if (c > max)  max = c;
//    printf("%d\n", max);
//    return 0;
//}

// two 三目运算
//int main()
//{
//    int a, b, c, max;
//    scanf("%d%d%d", &a, &b, &c);
//    max = a > b ? a : b ;
//    max = c > max ? c : max;
//    printf("%d\n", max);
//    return 0;
//}

//使用max函数+三目运算
/*int main()
{
    int a, b, c;
    int Max (int x, int y);
    scanf("%d%d%d", &a, &b, &c);
    printf("max=%d\n", Max(Max(a,b),c));
    return 0;
}
int Max(int x, int y)
{
    return x>y ? x : y;
}*/