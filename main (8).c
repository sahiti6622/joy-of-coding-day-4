#include<stdio.h>
struct fre
{
    int inde;
    int freq;
};
typedef struct fre F;
int main()
{
	char s[100];F q[100];int r=-1;
	printf("entr the string\n");
	scanf("%[^\n]s",s);
	int i,j,count,c=0;
	char l;int f=0;
	for(i=0;s[i]!='\0';i++)
	{
		l=s[i];
		count=1;
		for(int k=i-1;k>=0;k--)
		{
			if(l==s[k])
			{
				f++;
			}
			
		}
		if(f==0)
		{
				for(j=i+1;s[j]!='\0';j++)
				{
					if(l==s[j])
					{
						count++;
					}
				}
		}
		
		
		
			if(f==0)
			{
			        r++;
			        q[r].inde=i;
			        q[r].freq=count;
			        printf("frequency of %c is %d\n",l,count);
			        c++;
			}
		
	}
	int lar=q[0].freq,pos=0;
	for(i=1;i<c;i++)
	{
	    if(lar<q[i].freq)
	    {
	        lar=q[i].freq;
	        pos=i;
	    }
	}
	for(int j=0;j<c;j++)
	{
	    if(lar==q[j].freq)
	    {
	       printf("highest frequency is of %c is %d",s[q[j].inde],q[j].freq); 
	    }
	}
	return 0;
}
