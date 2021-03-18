//To find the area of Circle, Square and Rectangle user choice
//Area of Circle: (22/7)*r*r: radius
//Area of Square: side*side: side
//Area of Rectangle: Length * Breadth: Length, Breadth

#include<stdio.h>
int main(){
    float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;
    printf("Enter Radius :");
    scanf("%f",&raduisOfCircle);
    printf("Enter side of Square :");
    scanf("%f",&sideOfSquare);
    printf("Enter length :");
    scanf("%f",&legthOfRectangle);
    printf("Enter Breadth :");
    scanf("%f",&breadthOfRectangle);

    printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/2));
    printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
    printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));

    return 0;
}
