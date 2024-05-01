1: clean
	g++ 1_passing_streams_to_functions.cpp -o 1_passing_streams_to_functions
	./1_passing_streams_to_functions

2: clean
	g++ 2_appending_data.cpp -o 2_appending_data
	./2_appending_data

3: clean
	g++ 3_eof_with_if.cpp -o 3_eof_with_if
	./3_eof_with_if

4: clean
	g++ --std=c++17 4_eof_with_while.cpp -o 4_eof_with_while
	./4_eof_with_while

clean:
	@rm -f 1_passing_streams_to_functions
	@rm -f 2_appending_data
	@rm -f 3_eof_with_if
	@rm -f 4_eof_with_while
