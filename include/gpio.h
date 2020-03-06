
#define GPIO_BASE   0x40020000
#define GPIO_OFFSET 0x400

typedef struct
{
  volatile unsigned int MODER;   
  volatile unsigned int OTYPER;  
  volatile unsigned int OSPEEDR; 
  volatile unsigned int PUPDR;   
  volatile unsigned int IDR;     
  volatile unsigned int ODR;     
  volatile unsigned int BSRR;    
  volatile unsigned int LCKR;    
  volatile unsigned int AFR[2];  
} GPIO_Struct;