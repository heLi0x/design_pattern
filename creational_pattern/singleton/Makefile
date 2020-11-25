cpp = g++
src = singleton.cpp maintest.cpp
obj = $(patsubst %.cpp,%.o,$(src))
bin = singleton
all:$(bin)

singleton:$(obj)
	$(cpp) -o $@ $^
%.o:%.c
	$(cpp) -c $^ -o $@
clean:
	rm -rf $(bin) $(obj)
