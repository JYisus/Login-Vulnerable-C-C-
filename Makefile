CCX=g++

CXXFLAGS= -g -std=c++11 #-lpthread

OBJS = src/login.cpp main.cpp
all: ${OBJS}
	$(CCX) $(CXXFLAGS)   -o login ${OBJS} $(OPENCV)