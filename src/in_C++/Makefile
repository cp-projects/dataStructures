test:
	[ -f test.out ] && rm test.out || echo "404 file not found"
	[ -f test.o ] && rm test.o || echo "404 file not found"
	make test.o
	make test.out
	valgrind ./test.out

test.out: test.o
	g++ -o test.out test.o

test.o: test.cpp
	g++ -c test.cpp

clean:
	rm ./*.o ./*.out
