CC = g++

SRCS = Exec.cpp Intergrate.cpp
OBJS = $(SRCS:%.cpp=%.o)

LIBS = 

TARGET = Exec

.SUFFIXES : .cpp .o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS)

depend:
	gccmakedep $(SRCS)

clean:
	rm -f $(OBJS) $(TARGET)


Exec.o: Exec.cpp CalcAdd.h
#CalcAdd.o : CalcAdd.cpp CalcAdd.h
# DO NOT DELETE
Exec.o: Exec.cpp CalcAdd.hpp
