 #define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	//转义字符
//	\?		在书写连续多个？时使用，防止被解析成三字母词，（如??)会被解析成]），（现已不支持三字母词）
//	\'		用来表示字符常量'
//	\"		用来表示字符常量"
//      \\     用来表示字符常量\，防止它被解析成一个转义序列符
//      \a     警告字符，蜂鸣（简单点说就是会deng的一声）
//      \n    换行
//      \www www表示1~3个八进制的数字，如\130
//      \xyy yy表示1~2个十六进制的数字，如\x30
// \t     水平制表符（不常用）
// \v    垂直制表符（不常用）
// \b    退格符（不常用）
// \f     进纸符（不常用）
// \r     回车符（不常用）


//printf 的使用
// printf("%d",100);
// printf("%c",'a');
// printf("%s","abc");




int main()
{
	printf("1\a");
	printf("\"");
	printf('\'');
	printf("\\na");
	printf("%d", 100);
	printf("%c", 'a');
	printf("%s", "abc");



	return 0;
}
