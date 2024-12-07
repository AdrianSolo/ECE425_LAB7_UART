



#include "TM4C123GH6PM.h"

#define UART1_RECEIVE_FIFO_EMPTY_BIT_MASK 0x10
#define UART1_TRANSMIT_FIFO_FULL_BIT_MASK 0x20

#define UART1_CR   0x0D
#define UART1_LF   0x0A
#define UART1_BS   0x08

void UART1_Init(void);
char UART1_Input_Character(void);
void UART1_Output_Character(char data);
void UART1_Input_String(char *buffer_pointer, uint16_t buffer_size);
void UART1_Output_String(char *pt);


