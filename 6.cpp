#include<stdio.h>
#include<stdlib.h>

bool isIdentify1(char[]);

int  translate2(char); 

int main(void)
{
	char id3[10];  
	printf("請輸入待確認的身分證字號:");
	scanf("%s",&id3);
	if(isIdentify1(id3)==true)
	{ 
		printf("符合身分字號格式\n");
	}
	else
	{
		printf("不符合身分字號格式\n");
	}
	system("pause");

}
bool isIdentify1(char id3[]){
	int id3_int[10];       
	int sum4,num;
	int num1=8;
	for(num=0;num<10;num++)
	{
		id3_int[num]=translate2(id3[num]);
	}
	sum4=(id3_int[0]/10)+((id3_int[0]%10)*9);
	for(num=1;num<9;num++)
	{
		sum4+=id3_int[num]*num1;
		num1--;
	}
	sum4+=id3_int[9];
	if(sum4%10==0)
	{
		return true;
	}
	else
	{
		return false;
	}

}
int translate2(char x)
{ 
	switch(x)
	{
 
	case 'A': return 10 ;break;   
    case 'B': return 11 ;break;   
    case 'C': return 12 ;break;   
    case 'D': return 13 ;break;  
    case 'E': return 14 ;break;  
    case 'F': return 15 ;break;   
    case 'G': return 16 ;break;   
    case 'H': return 17 ;break;   
    case 'I': return 34 ;break;  
    case 'J': return 18 ;break;   
    case 'K': return 19 ;break;  
    case 'L': return 20 ;break;   
    case 'M': return 21 ;break;   
    case 'N': return 22 ;break;   
    case 'O': return 35 ;break;
    case 'P': return 23 ;break;
    case 'Q': return 24; break;
    case 'R': return 25; break;
    case 'S': return 26; break;
    case 'T': return 27; break;
    case 'U': return 28; break;
    case 'V': return 29; break;
    case 'W': return 32; break;
    case 'X': return 30; break;
    case 'Y': return 31; break;
    case 'Z': return 33; break;
        
        
       case '0':return 0;break;
       case '1':return 1;break;
       case '2':return 2;break;
       case '3':return 3;break;
       case '4':return 4;break;
       case '5':return 5;break;
       case '6':return 6;break;
       case '7':return 7;break;
       case '8':return 8;break;
       case '9':return 9;break;

   }
    
}
