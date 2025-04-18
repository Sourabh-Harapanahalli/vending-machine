FROM yg397/thrift-microservice-deps:xenial

ARG NUM_CPUS=4

COPY . /vending-machine-microservices
WORKDIR /vending-machine-microservices

RUN mkdir -p build \
    && cd build \
    && cmake .. \
    && make -j${NUM_CPUS} \
    && make install

# Default executable (change if needed)
CMD ["OrderBeverageService"]
