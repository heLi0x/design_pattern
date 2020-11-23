cpp = g++
src = factory.cpp product.cpp maintest.cpp
obj = $(patsubst %.cpp,%.o,$(src))
bin = factorymethod
all:$(bin)

factorymethod:$(obj)
	$(cpp) -o $@ $^
%.o:%.c
	$(cpp) -c $^ -o $@
clean:
	rm -rf $(bin) $(obj)
