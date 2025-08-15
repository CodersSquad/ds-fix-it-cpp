# Define variables
CXX = g++  # C++ compiler
CXXFLAGS = -Wall -g # Compiler flags: -Wall for warnings, -g for debugging
LDFLAGS = # Linker flags

# Define source and object files
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o) # Automatically generate .o files from .cpp files

# Define the executable name
TARGET = main

# Default target: builds the executable
all: $(TARGET)

# Rule to link the executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET) $(LDFLAGS)

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule: removes generated files
clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)