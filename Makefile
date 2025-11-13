CC = g++
CXXFLAGS = -O2 -std=c++20 -I. -Iinclude
LDFLAGS = 

BINDIR = bin
SRCDIR = .
OBJDIR = obj

SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRC))

APP = Snake

all: prepare $(APP)

prepare:
	mkdir -p $(OBJDIR) $(BINDIR)

clean:
	rm -f $(OBJDIR)/*.o $(BINDIR)/*

help:
	@echo "Usage:"
	@echo "  make         - compilează aplicația"
	@echo "  make clean   - șterge fișierele temporare"
	@echo "  make help    - afișează acest mesaj"

$(APP): $(OBJ)
	$(CC) $(OBJ) -o $(BINDIR)/$(APP) $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) -c $< $(CXXFLAGS) -o $@
