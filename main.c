#include <kipr/wombat.h>
    /*
Max Speed = 0.46
RT Cliff White = 2190
Rt Cliff Black = 2145
*/
int main()
{
    /*create3_connect();
    											//drive to starting line
    while (create3_sensor_cliff(3) > 2185)
    {
        create3_velocity_set_components(-0.10,0);
    }
    
    create3_wait();
    											//plow to next black line
    create3_drive_straight(-0.2,0.2);
    create3_wait();
    while (create3_sensor_cliff(3) > 2185)
    {
        create3_velocity_set_components(-0.10,0);
    }
    
    create3_wait();
    */
    create3_connect();
    
    create3_drive_arc_degrees(0.1,90, 0.1); // Drive in a 0.5 meter radius arc counter-clockwise for 90 degrees at 1 m/s
    create3_wait();
    
    /*
    
    									//push items into E
    create3_rotate_degrees(45,45);//turn
    create3_wait();
    
    create3_drive_straight(-0.2,0.2);//straight
    create3_wait();
    
    create3_rotate_degrees(-45,45);//turn
    create3_wait();
    */
    
    printf("Hello World\n");
    return 0;
}
