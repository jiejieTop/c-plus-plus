CC=g++
SRC = $(wildcard *.cpp */*.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRC))
DEP_FILES := $(patsubst %, .%.d,$(OBJS))
DEP_FILES := $(wildcard $(DEP_FILES))
FLAG = -std=c++11 -g -Werror -I. -Iinclude
TARGET = targets

$(TARGET):$(OBJS)
	$(CC) -o $@ $^ $(FLAG)

ifneq ($(DEP_FILES),)
include $(DEP_FILES)
endif

%.o:%.cpp
	$(CC) -o $@ -c $(FLAG) $< -g -MD -MF .$@.d

clean:
	rm -rf $(TARGET) $(OBJS)

distclean:
	rm -rf $(DEP_FILES)

.PHONY:clean
