#include <iostream>
#include <zmq.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {

    zmq::context_t context (1);
    zmq::socket_t publisher (context, ZMQ_PUB);
    publisher.bind("tcp://*:5556");

    int major, minor, patch;
    zmq_version (&major, &minor, &patch); printf ("Current ØMQ version is %d.%d.%d\n", major, minor, patch);
    
    for (;;) {
        zmq::message_t message(5);
        snprintf((char *) message.data(), 5, "%s", "test");
        printf("sending message %s\n", message.data());
        publisher.send(message);

        sleep(1);
    }
    

    return 0;
}
