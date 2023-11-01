#include <16f877A.h>
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOWRT, NODEBUG, NOCPD


#use delay(clock=4MHz)

#DEFINE USE_PORTB_LCD TRUE
#INCLUDE <LCD.C>


void main() {

   
   set_tris_b(0x00);

   LCD_INIT();
   
   printf(lcd_putc, "\f Caz");
   printf(lcd_putc, "\n Dinliyorum");
   
   
   while(TRUE){
   
      for(int k = 3; k <18 ; ++k){
      
         lcd_send_byte(0, 0x1E);
         
         
         delay_ms(100);   
      }
      
      for(int i = 3; i < 18; ++i){
      
         lcd_send_byte(0, 0x18);
         
         
         delay_ms(100);
      }
      
      
      
   
   }
}
