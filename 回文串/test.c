//����һ���ַ�������֤���Ƿ��ǻ��Ĵ���ֻ������ĸ�������ַ������Ժ�����ĸ�Ĵ�Сд��
//˵���������У����ǽ����ַ�������Ϊ��Ч�Ļ��Ĵ���
//ʾ�� 1:
//���� : "A man, a plan, a canal: Panama"
//��� : true
//	 ʾ�� 2 :
// ���� : "race a car"
//  ��� : false


#include<stdio.h>
#include<Windows.h>
#include<string.h>

int isPalindrome(char* s) {
	char *p = s;
	int len = strlen(s);
	char *q = s + len;
	while ((p<q)&&p != q)
	{
		if ((p<=q)&&(((*p) >= 65 && (*p <= 90)) || ((*p) >= 97 && ((*p) <= 122)) || ((*p) >= 48 && (*p) <= 57))
			&& (((*q) >= 65 && (*q <= 90)) || ((*q) >= 97 && ((*q) <= 122)) || ((*q) >= 48 && (*q) <= 57)))
		{
			int ret = (*p) - (*q);
			if (ret != 0 && ret != 32&&ret!=-32)
			{
				return 0;
			}
			else
			{
				p++;
				q--;
			}
		}
		if (!(((*p) >= 65 && (*p <= 90)) || ((*p) >= 97 && ((*p) <= 122)) || ((*p) >= 48 && (*p) <= 57)))
		{
			p++;
		}
		if (!(((*q) >= 65 && (*q <= 90)) || ((*q) >= 97 && ((*q) <= 122)) || ((*q) >= 48 && (*q) <= 57)))
		{
			q--;
		}
	}
	return 1;
}

int main()
{
	/*char *str = "Nella's simple hymn: \"I attain my helpMiss Allen.\"";*/
	char *str = "0p";
	int ret = isPalindrome(str);
	if (ret == 0)
	{
		printf("false\n");
	}
	else
	{
		printf("true\n");
	}
	system("pause");
	return 0;
}



