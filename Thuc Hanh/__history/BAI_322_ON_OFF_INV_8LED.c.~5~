//!#define   board    D501     // Co dong nay thi chay that. Bo dong nay thi mo phong
#include<tv_boards.c>
unsigned int8 n=0, trst=0;

void off_all ()
{
   led32.ledx8[0] = 0;
}


void main()
{
      system_init();  // Bien dich thanh cong - Go 2-3 chu dau - roi nhan Ctr + Khoang trang
      off_all();
      while (true)
      {
         if (input (ON) == 0) led32.ledx8[0] = 0xf;
         if (input (OFF) == 0) led32.ledx8[0] = 0;
         if ((input (INV) == 0) && (led32.ledx8[0] != 0) )
         {
            led32.ledx8[0] =~ led32.ledx8[0];
         }
         led32_display ();
      }
}


