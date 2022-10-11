#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
void push();
void pop();
void display();

int main()
{ 
	int ch,c;
	printf("press1,push\npress2,pop\npress3 display\n");
	 
	 do{
		 printf("\nenter your choice");
		 scanf("%d",&ch);
		 switch(ch)
		 {
			 case 1:push();
			        break;
			 case 2:pop();
			        break;
			 case 3:display();
			        break;   
			 default:printf("invalid number");
			         break;
			     }
			 printf("\npress 1 to continue,0 to exit\n");
			 scanf("%d",&c);
			
		 } while(c==1);
	 return 0;
	
	}
	
	 void push()
	 {
		 int x;
		 printf("\n enter the element ");
		 scanf("%d",&x);
		 if(top==n-1)
		 {
			 printf("over flow");
			 
			 }
			 else
			 {
			  top=top+1;
			  stack[top]=x;
			 
			 }
		 }
		 
	void pop()
	{
	
    if(top==-1){
    printf("\nempty array\n");
   }
    else
    {
	printf("\nthe delete element is %d \n",stack[top]);
	top=top-1;
		 }	
		}
		
 void display()
 {
	 int i;
	 for(i=top;i>=0;i--)
	  printf("%d ",stack[i]);
		 
	 
 }			 
	
	
	
	
	

