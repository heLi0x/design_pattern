cpp = g++
src = factory.cpp product.cpp maintest.cpp
obj = $(patsubst %.cpp,%.o,$(src))
bin = simplefactory
all:$(bin)

simplefactory:$(obj)
	$(cpp) -o $@ $^
%.o:%.c
	$(cpp) -c $^ -o $@
clean:
	rm -rf $(bin) $(obj)