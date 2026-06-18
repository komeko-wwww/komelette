# Compiler configuration
CXX := c++
CXXFLAGS := $(shell pkg-config --cflags Qt6Widgets Qt6Multimedia)
LDFLAGS := $(shell pkg-config --libs Qt6Widgets Qt6Multimedia)
MOC := $(shell qmake6 -query QT_INSTALL_BINS)/moc

# Main
TARGET := komelette
SRCS := main.cpp menu.cpp
OBJS := $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^ $(LDFLAGS)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<
moc_%.cpp: %.hpp
	$(MOC) $< -o $@

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)
