// GROUP 9
#include<stdio.h>
#include<conio.h>
int main()
{
	int c;
	char g;
	g='p';
	while(g =='p')
    {
	printf("1 for the sum of two number\n");
	printf("2 for the simple interst\n");
	printf("3 for number is positive or negative\n");
	printf("4 for the number is odd or even\n");
	printf("5 for largest among three numbers\n");
	printf("6 for sum of the series\n");
	printf("7 for  read n number display the sum\n");
	printf("8 for the factorial of number\n");
	printf("9 for the calculation of electricity bill\n");
	printf("10 for the lcm and hcf of two number\n");
	printf("11 for the fibonacci series up to n number\n");
	printf("12 for counting the number of digits in a number\n");
	printf("13 for the reverse the digit in a number\n");
	printf("14 for finding the prime factors\n");
	printf("15 if a number is grater than N1,less than N2 and divisible by 7\n");
	printf("enter the choice number which you want to operate\n\n\n");
	
    	scanf("%d",&c);
	switch(c)
	{
 	//sum of two integers
    	case 1:
    {
						
	int a,b,sum;
    printf("Enter any two number: ");
    scanf("%d,%d", &a,&b);
    sum = a+b;      
    printf("%d + %d = %d\n\n",a,b,sum);
    break;
    }
    
    // to find simple interest 
    case 2:
     {
    int p,t;
    float r,i;
    printf("Enter the principal: ");
    scanf("%d",&p);
    printf("Enter the rate: ");
    scanf("%f",&r);
    printf("Enter the time: ");
    scanf("%d",&t);
    i=(p*r*t)/100;
    printf("The Simple interest is %.2f\n",i);
	
	break;		
	}  
    
    //to find whether number is  positive or negative 
    case 3:
	{
		int n;
    printf("elEnter a number : ");
    scanf("%d", &n);
    if (n<0) 
        {
		printf("%d is a negative number \n", n); 
    }
	else if(n>0){
	
        printf("%d is a positive number \n", n);
    }
    else
    {
    	printf("%d is a neither positive nor negative number\n ",n);
	}
	}
	break;		
    
	// to find whether a interger is odd or even
     case 4:
	{
	int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if(a%2 == 0)
        printf("%d is even.\n",a);
    else
        printf("%d is odd.\n",a);
    break ;    
	} 
     
    //to find largest number out of 3
      case 5:
	{
	int a,b,c;
    printf("Enter any three different numbers: ");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a>=b && a>=c)
	{
	printf("%d is the largest number.\n",a);
    }
    else if (b>=a && b>=c)
	{
	 printf("%d is the largest number.\n",b);
    }
    else{
	
    printf("%d is the largest number.\n",c);
     }
	  break;
	}
    	 
    //to find sum of series 
      case 6:
	{  int n, i, sum = 0; 
    printf(" Enter a positive number: ");  
    scanf("%d", &n);  
    for (i=0; i<=n; i++)  
    {  
        sum =sum+i;
    }  
    printf("\n Sum of the first %d n number is: %d\n",n,sum);   
    getch();  
	break;	 
    }
	 
    //for  read n number display the sum
     case 7:
	{
		int i,sum=0,n;
		printf("enter the value of n ");
		scanf("%d",&n);
		int a[n];
		
		for(i=0;i<n;i++)
		{
			printf("enter the numbers\n");
	
			scanf("%d",&a[i]);
			sum=sum+a[i];
	}
	
		printf("the sum is %d\n",sum);
	}
    break;
		 
    //for the factorial of number
	 case 8:
	{
		int i,f=1,n;
		printf("enter the number n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
	printf("the factorial of %d is %d \n",n,f);	
	 break;	
	}
        
    //for the calculation of electricity bill\n");
	 case 9:
 	{
    // rs 80 for 20 units
	// rs 8 for next 100 units 
	// rs 10 per unit  for anything more]
	float unit,rs;
	printf("enter the unit");
	scanf("%f",&unit);
	if(unit<=20)
	{
		rs=4*unit;
	}
	else if(unit>20 && unit<=120)
	{
		rs=80+(unit-20)*0.08;
	}
	else if(unit>120)
	{
		rs=80+100*0.08+(unit-120)*10;
	}
	printf("the electricity bill of %.2f unit is %.2f\n\n  ",unit, rs);	
}
	 break;
     	
	 //1for the lcm and hcf	 
	case 10:
	{
	int a,b,x,y,l;
	printf("enter the two number");
	scanf("%d,%d",&a,&b);
	x=a;
	y=b;
	while(x!=y)
	{
		if(x>y)
		{
			x=x-y;
		}
		else
		{
			y=y-x;
		}
	l=(a*b)/x;
}
	printf("the hcf is %d\n",x);
	printf("the lcm is %d\n",l);
	break;	
	}
    
    //for the fibonacci series up to n number	 
	case 11:
	{
		// fibonacci series 0,1,2,3
	int a=0,b=1,i,c,n;
	
	printf("enter the nth term for fibonacci series");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	break;	
	}
    //for counting the number of digits in a number	 
	case 12:
	{ 
	int c=0,i;
	long long n;//long long is an integer type which is at least 64-bit wide.
	printf("enter the number");
	scanf("%lld",&n);
    while(n!=0)
    
   	{
    		n/=10;
    		c++;
    }
     printf("the number of that digits is %d\n\n",c);
	 break;	
	}	 
    
    //for the reverse the digit in a number
	case 13:
	{ 
	int n,rev=0,rem;
    printf("Enter any number: ");
    scanf("%d", &n);
    while(n!=0) {
        rem=n%10;
        rev =rev*10+rem;
        n/=10;
    }
    printf("Rev=%d\n",rev);
    
	 break;	
	}	 
    
    //for finding the prime factors
	case 14:
	{ 
	int n,i;
	printf("enter any number to get prime factor");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			printf("%d is prime factor\n",i);
			n=n/i;
		}
	 
	}
	break;
}
     //if a number is grater than N1,less than N2 and divisible by 7
	case 15:
	{ 
	// if n is greater than n1, less than n2 divisible by 7 		 
	int n1=10,n2=20,n;
	printf("enter the value of n");
	scanf("%d",&n);
	if(n>n1 && n<n2)
	{
		if(n%7==0)
		{
			printf("this number fills up every criteria mentioned above. \n");
		}
		
	}
	 break;	
	}
	default:
   {
		printf("BOLD OF YOU TO ASSUME you can enter any number, enter a number from choice. \n");
		break;
	}
    
    } 
    printf(" THANK YOU!! See you in around run. ");
	scanf(" %c",&g);
	}
}