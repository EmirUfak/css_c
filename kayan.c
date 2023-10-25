#include <16f877A.h>
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOWRT, NODEBUG, NOCPD


#use delay(clock=4M)

void main(){
   
   set_tris_b(0x00);
   output_b(0x00);
   
   int sayac = 1;
   int i;
   
   while(1){
   
      for(i = 0; i<7; i++){
      
         output_b(sayac);
         sayac = sayac<<1;
         delay_ms(100);
         
         
      }
      
      for(i = 0; i<7; i++){
      
         output_b(sayac);
         sayac = sayac>>1;
         delay_ms(100);
         
         
      }
   }
   
   
   
   
}

