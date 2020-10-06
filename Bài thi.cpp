#include <stdio.h>
#include <math.h>
int main() {
   double a, b, c, p, s=0;
	do{ 
		printf("-Nhap do dai canh a: \n");
	    scanf("%lf", &a);
	    printf("\n-Nhap do dai canh b: \n");
	    scanf("%lf", &b);			
	    printf("\n-Nhap do dai canh c: \n");
	    scanf("%lf", &c);
	    if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)) {
	        printf("\nDay la ba canh cua tam giac\n");
	            p = (a+b+c)/2;
	            s = sqrt(p*(p-a)*(p-b)*(p-c));    
	    }else{
					printf("\nDay khong phai la ba canh cua tam giac!\n");  
				}      					       
	}while( a<=0 || b<=0 || c<=0 );     			               
	    if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)){
	        printf("\ndien tich cua tam giac la %lf", s);  
	        printf("\nchu vi cua tam giac la %lf", s);   
	        }
}
