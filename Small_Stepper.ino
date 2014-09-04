/* 
   Copied from http://projectsfromtech.blogspot.com
*/
   
   

/*-----( Import needed libraries )-----*/
#include <Stepper.h>

/*-----( Declare Constants, Pin Numbers )-----*/
#define STEPS  100   //Number of steps per revolution


/*-----( Declare objects )-----*/
// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to

//The pin connections need to be 4 pins connected
// to Motor Driver In1, In2, In3, In4  and then the pins entered
// here in the sequence 1-3-2-4 for proper sequencing
Stepper small_stepper(STEPS, 9, 11, 10, 12); //for the nano with upsidedown monted driver

/*-----( Declare Variables )-----*/

int  Steps2Take;


void setup()  
{

  // set the speed of the motor 
  small_stepper.setSpeed(200);  
}

void loop()   
{
  
  small_stepper.setSpeed(200);   
  Steps2Take  =  4900;  // Rotate CW
  small_stepper.step(Steps2Take);
  delay(2000);
  
  small_stepper.setSpeed(200);  // 200 a good max speed??
  Steps2Take  =  -4900;  // Rotate CCW
  small_stepper.step(Steps2Take);
  delay(2000);

}
