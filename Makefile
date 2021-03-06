CXX=g++
CXXSTD=c++17
CXXWARNINGS=\
		   -Wall \
		   -Wextra \
		   -Wpedantic \
		   -Werror \
		   -Wfatal-errors
CXXINCLUDES=\
			-I./include

CXXFLAGS=\
		 -g \
		 -std=$(CXXSTD) \
		 $(CXXWARNINGS) \
		 $(CXXINCLUDES)
all:\
	build/00-hello-world.bin \
	build/s03-beer.bin\
	build/s01-add-stdin.bin\
	build/s01-add.bin\
	build/s01-div-studin.bin\
	build/s01-div.bin\
	build/s01-hello-me.bin\
	build/s01-hello-name.bin\
	build/s01-mul-stdion.bin\
	build/s01-mul.bin\
	build/s01-sub-stdin.bin\
	build/s01-sub.bin\
	build/s03-countdown.bin\
	build/s03-fizzbuzz.bin\
	build/s03-password.bin\
	build/s03-echo.bin\
	build/s03-guessing-game.bin\
	build/s04-rpn-calculator.bin\
	build/tablica.bin\
	build/snake.bin\

format:
	@find . -name '*.cpp' | xargs -n 1 --no-run-if-empty --verbose clang-format -i
	@find . -name '*.h' 2>/dev/null | xargs -n 1 --no-run-if-empty --verbose clang-format -i

clean:
	@find ./build -name '*.o' | xargs -n 1 --no-run-if-empty rm -v
	@find ./build -name '*.so' | xargs -n 1 --no-run-if-empty rm -v
	@find ./build -name '*.bin' | xargs -n 1 --no-run-if-empty rm -v

list:
	@find ./src -name '*.cpp' | sort |\
		grep -P '\./src/\d+-[a-z0-9_-]+\.cpp' |\
		xargs -n 1 -I FOO --no-run-if-empty \
			bash -c 'echo -n FOO ; head -n 2 FOO | tail -n 1 | sed s/\*/-/' |\
		sed -e 's:\./src/::' -e 's/\.cpp\>//'

build/%.bin: build/%.o
	$(CXX) $(CXXFLAGS) -o $@ $< -lncurses

build/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<
