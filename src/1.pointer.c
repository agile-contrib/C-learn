#include <stdio.h>

int main()
{

    /*
    指针永远都只是一个代表一个地址的十六进制数，所谓的类型，指的是指针指向的变量的类型
    */

    int iValue = 10;

    // 通过&运算符获取了i的地址并保存到intP中去
    int *iPointer = &iValue;

    printf("存储的地址为：%p，存储的地址指向的数据为：%d\n", iPointer, *iPointer);

    /*
    指针可以进行运算：++、--、+、-
    */

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // 定义一个指针，指向数组的第一个元素
    int *index = &arr[0];

    printf("此时index存储的地址为：%p，值为：%d\n", index, *index);

    // 然后，我们把地址加1
    index++;

    printf("此时index存储的地址为：%p，值为：%d\n", index, *index);

    /*
    指针还可以指向指针
    */

    int j = 128;
    int *jPointer = &j;
    int **jPointerPointer = &jPointer;

    printf("j的值：%d\n", j);
    printf("jPointer指向的变量的值：%d\n", *jPointer);
    printf("jPointerPointer指向的变量指向的变量的值：%d\n", **jPointerPointer);

    return 0;
}
