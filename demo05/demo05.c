#include<stdio.h>

/*
实现将输入的字符依次输出

思路如下：

读入一个字符
while（该文字不是文件结束指示符）
	输出刚读入的字符
	读下一个字符

*/


main()
{
	int c;
	/*这里用int而不用char的原因是：
		需要一个足够大的空间在能够存储所有可能的字符外
		还要能够存储文件结束符EOF
		所以要把c的类型声明为int类型
	*/

	//版本1
	//c = getchar();
	//while (c != EOF) {
	//	putchar(c);
	//	c = getchar();
	//}


	//版本2
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}