outs: server_HTML.cpp mongoose.c server3.cpp
	g++ server_HTML.cpp mongoose.c -o server_HTML.o
	g++ server3.cpp mongoose.c -o server3.o

clean: 
	rm *.o

run: server_HTML.o
	./server_HTML.o

run_server: server3.o
	./server3.o
