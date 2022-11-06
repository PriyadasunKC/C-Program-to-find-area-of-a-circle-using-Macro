#include <stdio.h>
#define PI 3.1415
void areaOfCircle(void);
int main()
{

    areaOfCircle();
    return 0;
}

void areaOfCircle(void)
{

    float radius = 0.0;
    float area = 0.0;
    printf("Enter Radius : ");
    scanf("%f", &radius);

    if (radius > 0)
    {
        area = PI * radius * radius;
        printf("Area OF Circle : %f m x m", area);
    }
    else
    {
        printf("radius should be positive");
    }
}