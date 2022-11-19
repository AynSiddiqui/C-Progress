math: math_util.cpp math_main.cpp
	g++ math_main.o math_util.o -o math

math_main.o: math_main.cpp
	g++ -c math_main.cpp

math_util.o: math_util.cpp
	g++ -c math_util.cpp

clean:
	rm *.o math