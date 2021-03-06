./build.sh
./pub &
./sub & or python ./subscriber.py &


Zero MQ description
ØMQ (also seen as ZeroMQ, 0MQ, zmq) looks like an embeddable networking library but acts like a concurrency framework. It gives you sockets that carry atomic messages across various transports like in-process, inter-process, TCP, and multicast. You can connect sockets N-to-N with patterns like fanout, pub-sub, task distribution, and request-reply. It’s fast enough to be the fabric for clustered products. Its asynchronous I/O model gives you scalable multi-core applications, built as
asynchronous message-processing tasks.

ZeroMQ
- Data type agnostic, only deals with serialized binary data
- Fully distributed, no server required
- No single node can bring down a system
- Can use multithreading to utilizie concurrency
- Internally buffers messages
