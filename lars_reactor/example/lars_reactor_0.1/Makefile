CXX=g++
CFLAGS=-g -O2 -Wall -fPIC -Wno-deprecated 

INC=-I../../include
LIB=-L../../lib -llreactor 
OBJS = $(addsuffix .o, $(basename $(wildcard *.cc)))

all:
	$(CXX) -o lars_reactor $(CFLAGS)  lars_reactor.cc $(INC) $(LIB)

clean:
	-rm -f *.o lars_reactor