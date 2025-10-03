CC = g++
CXXFLAGS = -O2 -std=c++20 -I include
LDFLAGS = -L lib

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
	@echo Usage:
	echo make - asamblează aplicația
	echo make clean - elimină artefactele asamblării
	echo make help - afișează ajutorul

$(APP): $(OBJ)
	$(CC) $(OBJ) -o $(BINDIR)/$(APP) $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) -c $< $(CXXFLAGS) -o $@