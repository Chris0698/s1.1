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

    DigitalOut red(PTB22);
    DigitalOut blue(PTB21);
    DigitalOut green(PTE26);

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

      on(red);
      off(red);

      on(blue);
      off(blue);

      on(green);
      off(green);
     }


}
