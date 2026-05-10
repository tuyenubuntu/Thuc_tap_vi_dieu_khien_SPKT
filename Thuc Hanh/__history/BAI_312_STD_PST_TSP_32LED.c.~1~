//!#define   board    D501     // Co dong nay thi chay that. Bo dong nay thi mo phong
#include<tv_boards.c>
unsigned int8 n=0, trst=0;

void on_r2l ()
{
      if (n <= 32) 
      {
         led32.ledx32 =~ (0xffffffff  << n); 
         led32_display();
         delay_ms(100);
         n++;
      }
      
      else
      {
      n = 0;
      trst++;
      }
}


void off_r2l ()
{
      if (n <= 32) 
      {
         led32.ledx32 = (0xffffffff  << n); 
         led32_display();
         delay_ms(100);
         n++;
      }
      
      else
      {
      n = 0;
      trst++;
      }
}


void main()
{
      system_init();  // Bien dich thanh cong - Go 2-3 chu dau - roi nhan Ctr + Khoang trang
      while (true)
      {
//!      trst = 0;
      if (trst == 0)
         {
               on_r2l ();
         }
      else if (trst == 1)
         {
               off_r2l ();
         }
      else if (trst == 2)
         {
               trst = 0;
         }
      }
}


