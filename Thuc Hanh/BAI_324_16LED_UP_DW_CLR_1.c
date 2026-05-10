//!#define   board    D501     // Co dong nay thi chay that. Bo dong nay thi mo phong
#include<tv_boards.c>
unsigned int8 n=0, count = 0;

//Function dung de clear toan bo khi nha nut CLR
void clear_all ()
{
   if (input (CLR) == 0) //Khi nut CLR duoc nhan
   {
      led32.ledx16[0] = 0; //Lear 16 LED (tat)
      led32_display();
      delay_ms(100);
      count = 0; //Reset gia tri count ve mac dinh 
   }
}
//Function dung de bat LED tu phai sang trai lien tiep
void on_PST ()
{
      if(inputcd (UP) == 0)
      {
         led32.ledx16[0] = ~(0xffff  << count);
         led32_display();
         delay_ms(100);
         count ++;
         if (count == 16)
         {
            count = 16;
         }
      }
}

//Function dung de tat LED tu phai sang trai lien tiep
void off_TSP ()
{  
      if((inputcd (DW) == 0) && count > 0)
      {
         count = count - 1;
         led32.ledx16[0] = ~(0xffff << (count));
         led32_display();
         delay_ms(100);
         if (count == 0)
         {
            count = 0;
         }
         
      }
}

void main()
{
      system_init();  // Bien dich thanh cong - Go 2-3 chu dau - roi nhan Ctr + Khoang trang
      led32.ledx16[0] = 0;
      int16 state=0;
      while (true)
      {
         if (0 <= count <=16) 
         {
            on_PST (); //Function dung de bat LED tu phai sang trai lien tiep
            off_TSP (); //Function dung de tat LED tu phai sang trai lien tiep
            clear_all (); //Xoa LED va gia tri khi nha CLR
          }
//!          else if (count > 16)
//!          {
//!            count=16;
//!          }
      }
}


