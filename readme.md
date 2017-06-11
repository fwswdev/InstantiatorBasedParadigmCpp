Instantiator Based Programming Paradigm
--------------------------------------------

Recently, I had an issue putting the uWebsockets data type on my headers. There were so many compiler errors by including the datatypes of uWebsockets to my project's header file. Placing both the class declaration and definition inside the cpp source code file resolved the issue. But the next question is how will I instantiate the uWebsockets outside, this is where the instantiator came in.

I discovered by accident, and I like this new paradigm of programming. This way, everyone will be forced to do a very important principle: “Program to Interface, not to an Implementation.” And I don't need to switch to header and source everytime. I can just use the IDE's split window capability to easily edit the declaration and definition.

To illustrate here is a very simple source code on how I did it:

Websocket.cpp 
– Both the class declaration and definition are located here. At the end, you will see the instantiator. It will return an abstract base class pointer.

Websocket.h
- This will contain only the instantiator functions.

AbaseWebSocket.h
- This the abstract base class that websocket class will inherit.

main.cpp
- Demonstration of how to use it.

The instantiator can produce new instances or it could produce a static instance (aka Singleton).

Again, this way, everyone will be forced to doing a very important principle: “Program to Interface, not to an Implementation.”  Because there is no way for you to be able to instantiate a concrete class because they will all be inside the cpp file, thus you need to go to the necessary abstractions.