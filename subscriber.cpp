#include <zmq.hpp>
#include <iostream>

int main() {
    
    zmq::context_t context(1);
    zmq::socket_t subscriber(context, ZMQ_SUB);
    subscriber.connect("tcp://localhost:5556");
    subscriber.setsockopt(ZMQ_SUBSCRIBE, "", 0);



    for (;;) {
        zmq::message_t message(5);
        subscriber.recv(&message, 0);

        printf("recv bytes %d message: \"%s\"\n", message.size(), message.data());
    }

    subscriber.close();


    return 0;
}
