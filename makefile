CXX=g++
CXXFLAGS=-Wall -ggdb
RM=rm -f

geometry : main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

main.o : definition_classes.h

%.o: %.cpp; $(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	$(RM) main.o geometry
