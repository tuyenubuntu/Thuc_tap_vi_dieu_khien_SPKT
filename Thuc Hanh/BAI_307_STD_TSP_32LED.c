//!#define   board    D501     // Co dong nay thi chay that. Bo dong nay thi mo phong
#include<tv_boards.c>
unsigned int8 n;
void main()
{
      system_init();  // Bien dich thanh cong - Go 2-3 chu dau - roi nhan Ctr + Khoang trang
      while(true)
      {
               for (n= 0; n <= 32 ; n++)
               {
                     led32.ledx32 = ~(0xffffffff >> n); // Sang va tat dan
                     led32_display();
                     delay_ms(200);
                     
               }
               for (n = 0; n <=32 ; n++)
               {
                     led32.ledx32 = (0xffffffff >> n); // Sang va tat dan
                     led32_display();
                     delay_ms(200);
               }

      }
}
