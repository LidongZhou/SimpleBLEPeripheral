#include "simpleBLEUart.h"
#include "npi.h"

static void simpleBLE_NpiSerialCallback( uint8 port, uint8 events )
{
  
}

void simpleBLE_NPI_init(void)
{  
    NPI_InitTransport(simpleBLE_NpiSerialCallback);      
    NPI_WriteTransport("HTC\r\n",5);
}                        
