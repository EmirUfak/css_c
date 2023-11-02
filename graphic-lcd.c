#include <16f877A.h>
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOWRT, NODEBUG, NOCPD


#use delay(clock=20000000)

#include <HDM64GS12.c> 
#include <graphics.c>

char yazi1[]="CCS";
char yazi2[]="C";
int i, x1, y1, x2, y2;

void main(){
setup_psp(PSP_DISABLED);
setup_spi(SPI_SS_DISABLED);
setup_timer_1(T1_DISABLED);
setup_timer_2(T2_DISABLED,0,1);
setup_adc_ports(NO_ANALOGS);
setup_adc(ADC_OFF);
setup_CCP1(CCP_OFF); 
setup_CCP2(CCP_OFF);

glcd_init(ON);

   while(1){
   
      glcd_init(ON);
      glcd_text57(39, 5, yazi1, 2, ON);
      glcd_text57(5, 30, yazi2, 2, ON); 
      
      delay_ms(2000);
      
      glcd_init(ON);
      
      x1=5;
      y1=5;
      x2=100;
      y2=5;
      
      for(i=0; i<6; i++)
      {
         glcd_line(x1, y1, x2, y2, ON);
         y2 = y1 += 10;
         x2 -= 10;
         delay_ms(1000);
      }
      
      glcd_init(ON);
      x1=y1=10;
      
      for(i=0; i<120; i++)
      {
         glcd_pixel(x1, y1, ON);
         y1=x1++;
         y1=x1+1;
         delay_ms(50);
      }
       
      glcd_init(ON);
      y2=60;
      x1=5;
      
      for (i=0; i<8; i++)
      {
         glcd_bar(x1, 0, x1, y2, 10, ON);
         delay_ms(1000);
         x1 += 15; 
         y2 -= 5; 
      }
      
      glcd_init(ON);
      
      for(i=0; i<=30; i=i+5)
      {
         glcd_circle(60, 30, i, NO, YES);
         delay_ms(1000);
      }
      
      glcd_init(ON);
      x1=5;
      y1=5;
      x2=120;
      y2=63;
      
      for(i=0; i<6; i++)
      {
      
         glcd_rect(x1, y1, x2, y2, NO, YES);
         
         y1=x1+=5;
         x2-=5;
         y2-=5;
         delay_ms(500);
         
      }
   }
}

