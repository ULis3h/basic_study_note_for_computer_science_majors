#ifndef CHAPTER_FIVE_H
#define CHAPTER_FIVE_H

// Description
// 输入N个数（N小于等于100），输出数字2的出现次数；
// 解题提示：
// 整型数组读取5个整型数的方法如下：
// int a[100];
// for(int i=0;i<5;i++)
// {
//     scanf("%d",&a[i]);
// }

// Input
// 输入的格式是两行
// 第一行输入要输的元素个数，比如5
// 第二行输入  1 2 2 3 2，那么输出结果为3，因为2出现了3次

// Output
// 统计数字2出现的次数
int chapter_five_homework_one();


// Description
// 读取一个字符串，字符串可能含有空格，将字符串逆转，原来的字符串与逆转后字符串相同，输出0，原字符串小于逆转后字符串输出-1，
// 大于逆转后字符串输出1。例如输入 hello，逆转后的字符串为 olleh，因为hello 小于 olleh，所以输出-1
// 注意最后的判断一定要这么写，因为strcmp标准C中并不是返回-1和1，而是负值和正值

// int result = strcmp(c, d);
// if (result < 0) {
//     printf("%d\n",-1);
// }
// else if (result > 0) {
//     printf("%d\n", 1);
// }
// else {
//     printf("%d\n", 0);
// }


// Input
// 输入一个字符串，例如 hello，当然输入的字符串也可能是 how are you，含有空格的字符串

// Output
// 输出是一个整型数，如果输入的字符串是hello，那么输出的整型数为-1
int chapter_five_homework_two();

#endif