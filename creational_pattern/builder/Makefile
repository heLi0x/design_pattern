cpp = g++
src = product.cpp maintest.cpp builder.cpp
obj = $(patsubst %.cpp,%.o,$(src))
bin = builder
all:$(bin)

builder:$(obj)
	$(cpp) -o $@ $^
%.o:%.c
	$(cpp) -c $^ -o $@
clean:
	rm -rf $(bin) $(obj)
