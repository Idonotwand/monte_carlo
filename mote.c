#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
    int in_circle = 0;//how many points in circle
    int iter = 10000000;//sample amount
    for(int i= 0;i< iter;i++)
    {
        int x = rand() % 10000;//a random int in [0,inf)
        int y = rand() % 10000;
        if(x*x + y*y <= 10000*10000)
        {
            in_circle++;
        }
    }
    
    double pi = 4 * (double)in_circle/(double)iter;//change data type of "in_circle,iter"
    printf("%f",pi);//the data type we print is float
    
    return 0;
}
