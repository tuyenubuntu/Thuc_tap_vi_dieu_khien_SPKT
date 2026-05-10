//!#define   board    D501     // Co dong nay thi chay that. Bo dong nay thi mo phong
#include<tv_boards.c>
unsigned int8 n;
unsigned int8 m;
void main()
{
      system_init();  // Bien dich thanh cong - Go 2-3 chu dau - roi nhan Ctr + Khoang trang
      while(true)
      {
               for (n= 0; n <= 32 ; n++) // n dung de tao su don
                  for (m = 0 ; m < 32-n ; m++)
                  {
                        led32.ledx32 = (~(0xffffffff << n)) | (0x8000000 >> m); // Sang dan tu phai sang trai 
                        led32_display();
                        delay_ms(100);
                        
                  }
                  for (n = 0; n <=32 ; n++)
                     for (m = 0 ; m < 32-n ;  m++)
                        {
                           led32.ledx32 = (~ (0xffffffff  >> n)) | (int32) 1 << m; 
                           led32_display();
                           delay_ms(100);
                        }
      }
}
