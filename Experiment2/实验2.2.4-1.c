#include<stdio.h>
#include<string.h>
int num(char c1);						//	����0~9��	����1 
int eight(char c2);						//	�˽�������	����1 
int sixteen(char c3);					//	ʮ��������������1 
int suffix1(char c1);					//	1λ��׺��	����1 
int suffix2(char c1, char c2);			//	2λ��׺��	����1 
int suffix3(char c1, char c2, char c3);	//	3λ��׺��	����1 
int main()
{
	char c[100];
	int n, flag;
	while(scanf("%s", c) != EOF){
		flag = 1;
		n = strlen(c);
		if(n == 1 && !num(c[0])) flag = 0;
		else if(n == 2){
			if(!num(c[0])) flag = 0;
			else if(c[0] == '0'){if(!(eight(c[1]) || suffix1(c[1]))) flag = 0;}						//0���ֺ��治�ǰ˽����� 
			else if(!(num(c[1]) || suffix1(c[1]))) flag = 0;										//1~9���ֺ������ֻ��׺ 
		}
		else if(n >= 3){
			if(!num(c[0])) flag = 0;
			else if(c[0] == '0') {																	//0�� 
				if(c[1] == 'x' || c[1] == 'X') {													//0x�� 
					if(!(sixteen(c[2]))) flag = 0;													//0x����16������ 
					else for(int i = 3; i < n; i++) {
						if(sixteen(c[i])) continue;													//��16������������ 
						else if(suffix3(c[i], c[i+1], c[i+2])) {if(i+3 != n) flag = 0;else break;}	//�жϺ�׺�������Ƿ��������ַ� 
						else if(suffix2(c[i], c[i+1])) {if(i+2 != n) flag = 0;else break;}
						else if(suffix1(c[i])) {if(i+1 != n) flag = 0;else break;}
						else flag = 0;
					}
				}
				else if(!eight(c[1])) flag = 0;
				else for(int i = 2; i < n; i++) {													//8���� 
						if(eight(c[i])) continue;													//��8������������ 
						else if(suffix3(c[i], c[i+1], c[i+2])) {if(i+3 != n) flag = 0;else break;}
						else if(suffix2(c[i], c[i+1])) {if(i+2 != n) flag = 0;else break;}
						else if(suffix1(c[i])) {if(i+1 != n) flag = 0;else break;}
						else flag = 0;
					}
			}
			else for(int i = 1; i < n; i++) {														//10���� 
						if(num(c[i])) continue;														//��10������������ 
						else if(suffix3(c[i], c[i+1], c[i+2])) {if(i+3 != n) flag = 0;else break;}
						else if(suffix2(c[i], c[i+1])) {if(i+2 != n) flag = 0;else break;}
						else if(suffix1(c[i])) {if(i+1 != n) flag = 0;else break;}
						else flag = 0;
					}
		}
		if(flag) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}

int num(char c1)
{
	if(c1 >= '0' && c1 <= '9') return 1;
	else return 0;
 } 
 
 int eight(char c2)
 {
 	if(c2 >= '0' && c2 <= '7') return 1;
	else return 0;
 }
 
 int sixteen(char c2)
 {
 	if(c2 >= '0' && c2 <= '9' || c2 >= 'a' && c2 <= 'f' || c2 >= 'A' && c2 <= 'Z') return 1;
	else return 0;
 }
 
 int suffix1(char c1)
 {
 	if(c1 == 'l' || c1 == 'L' || c1 == 'u' || c1 == 'U') return 1;
 	else return 0;
 }
 
int suffix2(char c1, char c2)
 {
 	if(c1 == 'u' && c2 == 'l' || c1 == 'U' && c2 == 'L' || c1 == 'l' && c2 == 'u' || c1 == 'L' && c2 == 'U' 
	 || c1 == 'U' && c2 == 'l' || c1 == 'u' && c2 == 'L' || c1 == 'l' && c2 == 'U' || c1 == 'L' && c2 == 'u') return 1;
 	else return 0;
 }
 
int suffix3(char c1, char c2, char c3)
 {
 	if(c1 == 'u' && c2 == 'l' && c3 == 'l' || c1 == 'U' && c2 == 'L' && c3 == 'L' 
	 || c1 == 'l' && c2 == 'l' && c3 == 'u' || c1 == 'L' && c2 == 'L' && c3 == 'U' 
	 || c1 == 'U' && c2 == 'l' && c3 == 'l' || c1 == 'u' && c2 == 'L' && c3 == 'L' 
	 || c1 == 'l' && c2 == 'l' && c3 == 'U' || c1 == 'L' && c2 == 'L' && c3 == 'u') return 1;
 	else return 0;
 }
