#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//�⺯��

//1.�ַ������� strlen 
// ���ҵĽ�β��'\0'
//size_t strlen(const char* str)
// size_t���޷������� size_t==unsigned int
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { "abcdefgh"};//err �ҵ��������ֵ
//	int ret=strlen(arr1);
//	printf("%d\n", ret);
//	if (strlen(arr1) - strlen(arr2) > 0)//��Ϊstrlen���ص����޷�������
//		printf("hahha");
//	else
//		printf("hehhehe");
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	int count = 0;
//  assert(str);//����
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
//	if (my_strlen(arr1) - my_strlen(arr2) > 0)//����������int
//		printf("hahahaha");
//	else
//		printf("hehhehehe");
//	return 0;
//}

//2.�ַ������� strcpy 
// Դ�ַ�������Ҫ��'\0'����
// char* strcpy(char* str1,const char* str2)
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "def";
//	strcpy(arr1, arr2);//��arr2���Ƶ�arr1��
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

//�Ż�
//char* my_strcpy(char* dest, const char* str)
//{
//	assert(dest != NULL);
//	assert(str);
//	char* ret = dest;
//	while (*dest++==*str++)//�Ƚ����ã���++
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

//3.�ַ���׷�� strcat
//Ҫ׷�ӵ��ַ�����β������'\0',�����Լ�׷���Լ�
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//׷�� 1.���ҵ�Ŀ���ַ�����'\0',
//     2.��׷��
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
//�Ż�
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

//4.strcmp �ַ����Ƚϣ����ǱȽϳ���
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

//5.�ܳ������Ƶĺ���
//(1).strncpy
//char* strncpy(char* str1,const char* str2,size_t num)
//int main()
//{
//	char arr1 [] = "abcd******";
//	char arr2[] = "def";
//	strncpy(arr1,arr2, 6);//���Դ�ַ���Ҫ׷�ӵĸ�������������ʱ��ֱ��׷��'\0'
//	printf("%s", arr1);
//	return 0;
//}

//1.�ȸ���Ҫ���Ƶĸ���
//2.�����Ƿ����Ҫ���Ƶĸ���
//3.���ڼ�'\0'
//4.С�ھ�ֱ���˳�
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
//	my_strncpy(arr1,arr2, 3);//���Դ�ַ���Ҫ׷�ӵĸ�������������ʱ��ֱ��׷��'\0'
//	printf("%s", arr1);
//	return 0;
//}

//(2).strncat
//int main()
//{
//	char arr1 [30] = "abcd\0******";
//	char arr2[] = "def";
//	strncat(arr1,arr2, 6);//���Դ�ַ���Ҫ׷�ӵĸ�������������ʱ��ֱ��׷��'\0'
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
//	my_strncat(arr1,arr2, 2);//���Դ�ַ���Ҫ׷�ӵĸ�������������ʱ��ֱ��׷��'\0'
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

//6.strstr�����ַ���
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
//	//1.���ж�p2�ǲ��ǿ�ֵ
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;//Ԥ������abbbcdef bbc
//		s2 = (char*)p2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ���
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;//�Ҳ���
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ���
//}
//int main()
//{
//	char* p1 = "bbbcde";
//	char* p2 = "bbcdefszs";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("�Ҳ����Ӵ�");
//	else
//		printf("�ҵ�����%s", ret);
//	return 0;
//}

//7.strtok �ָ��ַ���
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

//��ѭ����ӡ
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

//8.strerror������Ϣ
//char* strerror( const char *strErrMsg );
// ������ ������Ϣ
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
//	//while (count--)//��ʹ���ж�while ��--
//	while (--count)//��--����ʹ���ж�
//	{
//		printf("%d",count);//43210
//	}
//	return 0;
//}

//�ڴ溯��

//1.memcpy ����
// void *memcpy( void *dest, const void *src, size_t count );
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[30] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//�����ļ����ֽ� 40
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
//		((char*)dest)++;//++(char*��dest
//		((char*)src)++;//++(char*)src
//	}
//	return ret;
//}
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[10] = { 0 };
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };//my_memcpy���ܿ����ص��ڴ�
//	my_memcpy(arr1+2, arr1, 5);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//2.memmove
//�ص��ڴ濽��
//my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//	//ǰ->��
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	//��->ǰ
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

//3.memcmp ���Σ������Ͷ����ԱȽ�
// strcmp strncmp ֻ�ܱȽ��ַ���
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,4,4,5 };
// //01 00 00 00 02 00 00 00 03 00 00 00.....
// //01 00 00 00 02 00 00 00 04 00 00 00.....
//	int ret=memcmp(arr1, arr2,9);//�Ƚϵ��ǵھŸ��ֽ�03��04�Ƚ�
//	printf("%d", ret);
//	return 0;
//}

//2.memser �ڴ�����
// void *memset( void *dest, int c, size_t count );
//int main()
//{
//	//char arr[10] = {0};
//	//memset(arr, '*', 4);
//	//�ô�
//	//01 01 01 01 01 ʮ������ת����ʮ����
//	int arr[10] = { 0 };
//	memset(arr, 1, 5);
//	return 0;
//}

//�ַ����ຯ�� 
//islower�ж��Ƿ���Сд��ĸ
//isdigit�ж��Ƿ�������
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

//�ַ�ת��
//tolower ��д��Сд
//toupper Сд����д
//int main()
//{
//	char arr[] = "I AM A STUdent";
//	int i = 0;
//	while(arr[i])
//	{
//		if (isupper(arr[i]))//��д��ĸ
//		{
//			arr[i]=tolower(arr[i]);//����Сд��ĸ
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}
//
