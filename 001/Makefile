CXX=g++
SRC = $(wildcard *.cpp */*.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRC))
DEP_FILES := $(patsubst %, .%.d,$(OBJS))
DEP_FILES := $(wildcard $(DEP_FILES))
FLAG = -g -Werror -I. -Iinclude
TARGET = targets

$(TARGET):$(OBJS)
	$(CXX) -o $@ $^ $(FLAG)

ifneq ($(DEP_FILES),)
include $(DEP_FILES)
endif

%.o:%.cpp
	$(CXX) -o $@ -c $(FLAG) $< -g -MD -MF .$@.d

clean:
	rm -rf $(TARGET) $(OBJS)

distclean:
	rm -rf $(DEP_FILES)

.PHONY:clean
