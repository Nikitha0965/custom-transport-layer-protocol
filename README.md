# KTP – Custom Reliable Transport Protocol

KTP is a user-space transport protocol built over UDP that ensures
reliable, in-order delivery using shared memory, semaphores,
and multi-threading.

## Features
- Sliding window protocol
- Timeout-based retransmission
- Sender, receiver, garbage collector threads
- Modular static library (libktp.a)

## Build
make

## Usage
Link libktp.a and include ktp.h
