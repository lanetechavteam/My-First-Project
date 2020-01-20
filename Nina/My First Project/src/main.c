#include <kipr/wombat.h>

int main()
{
    //no movement because no motor
    printf("Hello Nina\n");
    printf("Nina\n");
    msleep(2000);
    printf("Good bye\n");
    // goes forward
    motor(0,100);
    motor(1,100);
    msleep(1000);
    motor(0,-100);
    motor(1,-100);
    msleep(5000);
    
    return 0;
}
