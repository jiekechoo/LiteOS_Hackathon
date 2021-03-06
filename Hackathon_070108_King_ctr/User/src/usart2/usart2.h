#ifndef __USART2_H
#define __USART2_H
#include "types.h"
#define USART2_MAX_RECV_LEN		64					//最大接收缓存字节数
#define USART2_MAX_SEND_LEN		64				//最大发送缓存字节数
void usart2_init(uint32 bound);
void usart2_printf(char* fmt,...) ;
void USART2_Putc(unsigned char c);
void USART2_Puts(uint8_t * str);
void usart2_rx_disable(void);
void usart2_rx_enable(void);
#endif
