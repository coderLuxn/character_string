#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//库函数

//1.字符串长度 strlen 
// 查找的结尾是'\0'
//size_t strlen(const char* str)
// size_t是无符号整形 size_t==unsigned int
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { "abcdefgh"};//err 找到的是随机值
//	int ret=strlen(arr1);
//	printf("%d\n", ret);
//	if (strlen(arr1) - strlen(arr2) > 0)//因为strlen返回的是无符号整形
//		printf("hahha");
//	else
//		printf("hehhehe");
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	int count = 0;
//  assert(str);//断言
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(const char* str)
//{
//	char* start =str;
//	char* end = str;
//	while (*str!='\0')
//	{
//		str++;
//		end++;
//	}
//	return (int)(end - start);
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcdefg";
//	int ret=my_strlen(arr1);
//	printf("%d\n", ret);
//	if (my_strlen(arr1) - my_strlen(arr2) > 0)//返回类型是int
//		printf("hahahaha");
//	else
//		printf("hehhehehe");
//	return 0;
//}

//2.字符串拷贝 strcpy 
// 源字符串必须要以'\0'结束
// char* strcpy(char* str1,const char* str2)
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "def";
//	strcpy(arr1, arr2);//把arr2复制到arr1上
//	printf("%s", arr1);
//	return 0;

//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1!=NULL);
//	assert(str2);
//	while (*str2!='\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	return str1;
//}

//优化
//char* my_strcpy(char* dest, const char* str)
//{
//	assert(dest != NULL);
//	assert(str);
//	char* ret = dest;
//	while (*dest++==*str++)//先解引用，再++
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "abcd";
//	char arr2[]="defg";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//3.字符串追加 strcat
//要追加的字符串结尾必须是'\0',不能自己追加自己
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//追加 1.先找到目的字符串的'\0',
//     2.再追加
//char* my_strcat(char* dest, const char* str)
//{
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	
//	while (*str!='\0')
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	return dest;
//}
//优化
//char* my_strcat(char* dest, const char* str)
//{
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return dest;
//}
//
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//4.strcmp 字符串比较，不是比较长度
//int main()
//{
//	char a1[] = { "abcd" };
//	char a2[] = { "bcde" };
//	int ret=strcmp(a1, a2);
//	printf("%d", ret);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char a1[] = { "bcdefg" };
//	char a2[] = { "bcdef" };
//	int ret=my_strcmp(a1, a2);
//	printf("%d", ret);
//	return 0;
//}

//5.受长度限制的函数
//(1).strncpy
//char* strncpy(char* str1,const char* str2,size_t num)
//int main()
//{
//	char arr1 [] = "abcd******";
//	char arr2[] = "def";
//	strncpy(arr1,arr2, 6);//如果源字符串要追加的个数大于它本身时，直接追加'\0'
//	printf("%s", arr1);
//	return 0;
//}

//1.先复制要复制的个数
//2.个数是否大于要复制的个数
//3.大于加'\0'
//4.小于就直接退出
//char* my_strncpy(char* dest, const char* str, int n)
//{
//	char* start = dest;
//	while (n&&(*dest++=*str++))
//	{
//		n--;
//	}
//	if (n > 0)
//	{
//		while (--n)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return start;
//}
//int main()
//{
//	char arr1 [] = "abcd******";
//	char arr2[] = "def";
//	my_strncpy(arr1,arr2, 3);//如果源字符串要追加的个数大于它本身时，直接追加'\0'
//	printf("%s", arr1);
//	return 0;
//}

//(2).strncat
//int main()
//{
//	char arr1 [30] = "abcd\0******";
//	char arr2[] = "def";
//	strncat(arr1,arr2, 6);//如果源字符串要追加的个数大于它本身时，直接追加'\0'
//	printf("%s", arr1);
//	return 0;
//}

//char* my_strncat(char* str1, const char* str2,int n)
//{
//	char* start = str1;
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//
//	while (n&&(*str1++ = *str2++))
//	{
//		n--;
//	}
//	if (n > 0)
//	{
//		*str1 = '0';
//	}
//	return start;
//}
//int main()
//{
//	char arr1 [30] = "abcd\0******";
//	char arr2[] = "def";
//	my_strncat(arr1,arr2, 2);//如果源字符串要追加的个数大于它本身时，直接追加'\0'
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	char* p = "abcd";
//	int count = 0;
//	while (*p)
//	{
//		p++;
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//(3).strncmp
//int main()
//{
//	char arr1[] = "abcder";
//	char arr2[] = "abchig";
//	int ret=strncmp(arr1, arr2, 3);
//	printf("%d", ret);
//	return 0;
//}

//6.strstr查找字符串
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret= strstr(p1, p2);
//	printf("%s", ret);
//	return 0;
//}
//char* my_strstr(const char* p1, const char* p2)
//{
//	char* s1; //char* s1=NULL
//	char* s2; //char* s2=NULL
//	char* cur = (char*)p1;
//	//1.先判断p2是不是空值
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;//预防遇到abbbcdef bbc
//		s2 = (char*)p2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到啦
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;//找不到
//		}
//		cur++;
//	}
//	return NULL;//找不到
//}
//int main()
//{
//	char* p1 = "bbbcde";
//	char* p2 = "bbcdefszs";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("找不到子串");
//	else
//		printf("找到啦，%s", ret);
//	return 0;
//}

//7.strtok 分割字符串
//int main()
//{
//	//char *strtok( char *strToken, const char *strDelimit );
//	char arr[] = "LXN@abc.efg";
//	char* p = "@ .";
//	char* ret=strtok(arr, p);
//	printf("%s\n", ret);
//
//    ret = strtok(NULL, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n",ret);
//	return 0;
//}

//用循环打印
//int main()
//{
//	char arr[] = "LXN@abc.efg";
//	char* p = "@ .";
//	char* ret;
//	//for(i=0;i<n;i++)
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//8.strerror错误信息
//char* strerror( const char *strErrMsg );
// 错误码 错误信息
//0.No error
//1.Operation not permitted
//int main()
//{
//	char* ret = strerror(1);
//	printf("%s", ret);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		printf("%s", strerror(errno));
//	else
//		printf("open file success");
//}

//struct s
//{
//	char name;
//	int age;
//};
//
//int main()
//{
//	struct s s1[2] = { {"zhangsan",20},{"lisi",30} };
//	struct s s2 = { "wangwu",40 };
//	//int sz = sizeof(s1) / sizeof(s1[0]);
//	//printf("sz=%d\n", sz);//2 
//	//printf("sizeof(s1)=%d\n", sizeof(s1));//16  8
//	printf("sizeof(s1)=%d\n", sizeof(s2));
//	return 0;
//}

//int main()
//{
//
//	int count = 5;
//	//while (count--)//先使用判断while 再--
//	while (--count)//先--，再使用判断
//	{
//		printf("%d",count);//43210
//	}
//	return 0;
//}

//内存函数

//1.memcpy 拷贝
// void *memcpy( void *dest, const void *src, size_t count );
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[30] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//拷贝的几个字节 40
//	memcpy(arr2, arr1, sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	while (num--)
//	{
//		*(char*)dest= *(char*)src;
//		((char*)dest)++;//++(char*）dest
//		((char*)src)++;//++(char*)src
//	}
//	return ret;
//}
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[10] = { 0 };
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };//my_memcpy不能拷贝重叠内存
//	my_memcpy(arr1+2, arr1, 5);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//2.memmove
//重叠内存拷贝
//my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//	//前->后
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	//后->前
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memcpy(arr1 + 2, arr1, 20);
//	//memmove(arr1 + 2, arr1, 20);
//	my_memmove(arr1+2 , arr1, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//3.memcmp 整形，浮点型都可以比较
// strcmp strncmp 只能比较字符串
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,4,4,5 };
// //01 00 00 00 02 00 00 00 03 00 00 00.....
// //01 00 00 00 02 00 00 00 04 00 00 00.....
//	int ret=memcmp(arr1, arr2,9);//比较的是第九个字节03和04比较
//	printf("%d", ret);
//	return 0;
//}

//2.memser 内存设置
// void *memset( void *dest, int c, size_t count );
//int main()
//{
//	//char arr[10] = {0};
//	//memset(arr, '*', 4);
//	//用错
//	//01 01 01 01 01 十六进制转换成十进制
//	int arr[10] = { 0 };
//	memset(arr, 1, 5);
//	return 0;
//}

//字符分类函数 
//islower判断是否是小写字母
//isdigit判断是否是数字
#include <ctype.h>
//int main()
//{
//	char ch = 'w';
//	int ret1 = islower(ch);
//	printf("%d\n", ret1);
//	int ret2 = isdigit(ch);
//	printf("%d\n", ret2);
//	return 0;
//}

//字符转换
//tolower 大写换小写
//toupper 小写换大写
//int main()
//{
//	char arr[] = "I AM A STUdent";
//	int i = 0;
//	while(arr[i])
//	{
//		if (isupper(arr[i]))//大写字母
//		{
//			arr[i]=tolower(arr[i]);//换成小写字母
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}
//
