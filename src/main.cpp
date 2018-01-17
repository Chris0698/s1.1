#include <mbed.h>

void on(DigitalOut color)
{
   color.write(0);
   wait(0.5);
}

void off(DigitalOut color)
{
    color.write(1);
    wait(0.5);
}

int main()
{
    //Bottom LED
    DigitalOut red(PTB22);
    DigitalOut blue(PTB21);
    DigitalOut green(PTE26);

    //Top LED
    DigitalOut greenTop(D9);
    DigitalOut redTop(D5);
    DigitalOut blueTop(D8);


    while(1)
    {

      /*
      red.write(0);
      wait(0.5);
      red.write(1);
      wait(0.5);

      blue.write(0);
      wait(0.5);
      blue.write(1);
      wait(0.5);

      green.write(0);   //on
      wait(0.5);
      green.write(1);   //off
      wait(0.5);
      */
      //Top LED writes
      on(red);
      off(red);

      on(blue);
      off(blue);

      on(green);
      off(green);

      //Bottom LED writes
      on(redTop);
      off(redTop);

      on(blueTop);
      off(blueTop);

      on(greenTop);
      off(greenTop);
     }


}
