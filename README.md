Graphite-C-Client
=================

This trivial pure C Graphite client allows you to send metrics to Graphite using [socket(7)](http://linux.die.net/man/7/socket)

## Usage

from `client.c`

    #include "graphite-client.h"

    int main(void)
    {
        graphite_init("127.0.0.1", 2003);
        
        graphite_send_plain("server.process.task", 1.0, 1368777314);
        graphite_send_plain("server.process.task.processing", 12, 1368777314);
        graphite_send_plain("server.process.task.waiting", 10, 1368777314);
        
        graphite_finalize();
    
        return 0;
    }
    

## Compiling 

### Makefile    
    
    make all
    
### Manual
    
    gcc -g -Wall -o graphite-client.o -c graphite-client.c
    gcc -g -Wall -o lifo main.c lifo.o  
  

    
