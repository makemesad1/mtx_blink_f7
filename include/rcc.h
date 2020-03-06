typedef struct
{
    volatile unsigned int CR;        
    volatile unsigned int PLLCFGR;   
    volatile unsigned int CFGR;      
    volatile unsigned int CIR;       
    volatile unsigned int AHB1RSTR;  
    volatile unsigned int AHB2RSTR;  
    volatile unsigned int AHB3RSTR;  
    unsigned int          RESERVED0;          
    volatile unsigned int APB1RSTR;  
    volatile unsigned int APB2RSTR;  
    unsigned int          RESERVED1[2];       
    volatile unsigned int AHB1ENR;   
    volatile unsigned int AHB2ENR;   
    volatile unsigned int AHB3ENR;   
    unsigned int          RESERVED2;          
    volatile unsigned int APB1ENR;   
    volatile unsigned int APB2ENR;   
    unsigned int          RESERVED3[2];       
    volatile unsigned int AHB1LPENR; 
    volatile unsigned int AHB2LPENR; 
    volatile unsigned int AHB3LPENR; 
    unsigned int          RESERVED4;          
    volatile unsigned int APB1LPENR; 
    volatile unsigned int APB2LPENR; 
    unsigned int          RESERVED5[2];       
    volatile unsigned int BDCR;      
    volatile unsigned int CSR;       
    unsigned int          RESERVED6[2];       
    volatile unsigned int SSCGR;     
    volatile unsigned int PLLI2SCFGR;
    volatile unsigned int PLLSAICFGR;
    volatile unsigned int DCKCFGR1;  
    volatile unsigned int DCKCFGR2;  

} RCC_Struct;


#define RCC_BASE    0x40023800
#define RCC ((RCC_Struct *) RCC_BASE) 