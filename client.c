

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
