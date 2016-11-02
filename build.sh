echo "Building publisher.cpp"
g++ publisher.cpp -o pub -lzmq
echo "Building subscriber.cpp"
g++ subscriber.cpp -o sub -lzmq
echo "Build done"
