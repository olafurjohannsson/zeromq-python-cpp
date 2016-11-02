
import zmq


def main():

    print 'zmq version %s' % zmq.zmq_version()

    context = zmq.Context()
    subscriber = context.socket(zmq.SUB)
    subscriber.connect("tcp://localhost:5556")
    subscriber.setsockopt(zmq.SUBSCRIBE, "")

    while True:
        print subscriber.recv()

    subscriber.close()
    context.term()

if __name__ == "__main__":
    main()
