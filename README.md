
╔════════════════════════════════════════════════════════════╗
║                  🧠 C SYSTEMS PROGRAMMING PROJECT          ║
╠════════════════════════════════════════════════════════════╣
║ 🔧 Features Covered:                                       ║
║   ✅ TCP Socket Programming                                 ║
║   ✅ Unix Domain Sockets                                    ║
║   ✅ POSIX Message Queues                                   ║
║   ✅ Multithreading with pthreads                           ║
╚════════════════════════════════════════════════════════════╝

📁 Project Structure:
---------------------
Each module is implemented in a separate C file:
- `tcp_server.c` / `tcp_client.c`     
    → TCP socket communication
- `unix_socket_server.c` / `unix_socket_client.c` 
    → Unix domain sockets
- `message_queue_send.c` / `message_queue_receive.c` 
    → POSIX message queues
- `multithread_example.c`             
    → Thread creation, synchronization

🚀 How to Compile:
-------------------
Use `gcc` to compile each file. Example:

    gcc tcp_server.c -o tcp_server
    gcc tcp_client.c -o tcp_client
    gcc unix_socket_server.c -o unix_server
    gcc unix_socket_client.c -o unix_client
    gcc message_queue_send.c -o mq_send -lrt
    gcc message_queue_receive.c -o mq_receive -lrt
    gcc multithread_example.c -o multithread -lpthread

▶️ How to Run:
---------------
1. TCP Socket:
    - Run server: `./tcp_server`
    - Run client: `./tcp_client`

2. Unix Domain Socket:
    - Run server: `./unix_server`
    - Run client: `./unix_client`

3. Message Queue:
    - Run sender: `./mq_send`
    - Run receiver: `./mq_receive`

4. Multithreading:
    - Run: `./multithread`

🎯 Summary:
------------
This project demonstrates core concepts of systems programming in C:
- Network communication using sockets
- Inter-process communication using message queues
- Concurrent execution using threads

Happy Coding! 💻
