#include<stdio.h>
#include<conio.h>
int main()
{
	
	//Calculating Area of Circle...
	
	//Declaring and Initialising the PI...
	float PI = 3.14;
	//Declaring the Variables...
	float radius,area_crc = 0,peri_crc = 0;
	printf("Enter the Radius of Circle:");
	//Logic of the Program
	scanf("%f",&radius);
	area_crc = (PI*radius*radius);
	//Result....
	printf("Calculated Area of the Circle having Radius %f is : %f",radius,area_crc);
	printf("\n");
	
	//Perimeter of Circle....
	
	peri_crc = 2*PI*radius;
	printf("Perimeter of Circle is : %f",peri_crc);
	printf("\n");
	//Calculating Area of Rectangle....
	
	printf("\n");
	float area_rect = 0,peri_rect;
	float len,brd;
	printf("Enter the length of Rectangle:");
	scanf("%f",&len);
	printf("Enter the Breadth of Rectangle:");
	scanf("%f",&brd);
	//Logic of The Program....
	area_rect = (len*brd);
	//Result....
	printf("Area of Rectangle is : %f",area_rect);
	printf("\n");
	//Perimeter of Rectangle...
	
	peri_rect = 2*(len + brd);
	printf("Perimeter of Rectangle is : %f",peri_rect);
	
	//Calculating Area of Square...

	printf("\n");
	float side,area_sqr = 0,peri_sqr = 0;
	printf("Enter the Side of Square:");
	scanf("%f",&side);
	area_sqr = side*side;
	printf("Area of a Square is : %f",area_sqr);
	printf("\n");
	
	//Perimeter of Square...
	peri_sqr = 4*side;
	printf("Perimeter of Square is : %f",peri_sqr);
	
	
	return 0;
	
}
