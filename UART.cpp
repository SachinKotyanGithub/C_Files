#include <mega16.h>
unsigned char qcntr = 0,sndcntr = 0; /*indexes into the que*/
unsigned char queue[50]; /*character queue*/

/*message arrays*/
char msg1[] = {"That was an a."};
char msg2[] = {"That was a b, not an a."};
char msg3[] = {"That was neither b nor a."};


/*this interrupt occurs whenever the */
/*USART has completed sending a character*/
interrupt [USART_TXC]void usart_transmit_isr (void)
	{
		/*send next character and increment index*/
		if (qcntr != sndcntr) UDR = queue[sndcntr++];
	}


/*this function loads the queue and */
/*starts the sending process*/
void sendmsg (char *s)
	{
		qcntr = 0; /*preset indices*/
		sndcntr = 1; /*set to one because first character already sent*/
		queue[qcntr++] = 0x0d; /*put CRLF into the queue first*/
		queue[qcntr++] = 0x0a;
		
		while (*s) 
		{
			queue[qcntr++] = *s++; /*put characters into queue*/
		}
		
		UDR = queue[0]; /*send first character to start process*/
	}


void main(void)
{
	char ch; 	/* character variable for received character*/
	UCSRA=0x00;
	UCSRB=0x58; /*enable receiver, transmitter and transmit interrupt*/  //01011000 - 
	UBRRH=0x00; /*baud rate = 9600*/
	UBRRL=0x26;
	#asm("sei") /*global interrupt enable */
while (1)
	{
		if (UCSRA & 0x80) /*check for character received*/
			{
				ch = UDR; /*get character sent from PC*/
				
				switch (ch)
					{
						case 'a':
							sendmsg(msg1); /*send first message*/
							break;
						case 'b':
							sendmsg(msg2); /*send second message*/
							break;
						default:
							sendmsg(msg3); /*send default message*/
					}
			}
	}	
}
	
	
