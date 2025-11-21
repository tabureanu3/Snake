CC = g++
ROOT_DIR = .
CXXFLAGS = -std=c++20 -O2 -fno-common -I. \
	-I$(ROOT_DIR)/dependencies/gcc-raylib/include \
	-L$(ROOT_DIR)/dependencies/gcc-raylib/lib \
	
LINKFLAGS = -lraylib -lopengl32 -lgdi32 -lwinmm -lole32 -lcomdlg32

# directoare pentru build
BINDIR = bin
OBJDIR = obj

# surse pentru clasele de DATE (vor intra în bibliotecă)
DATA_SRCS = \
    point.cpp \
    apple.cpp \
    board.cpp \
    direction.cpp \
    snake.cpp

DATA_OBJS = $(DATA_SRCS:%.cpp=$(OBJDIR)/%.o)

# surse pentru restul codului (logica + UI text)
OTHER_SRCS = \
    RaylibPainter.cpp \
    engine.cpp \
    main.cpp

OTHER_OBJS = $(OTHER_SRCS:%.cpp=$(OBJDIR)/%.o)

LIB = $(BINDIR)/libsnake_data.a
TARGET = $(BINDIR)/Snake.exe

all: prepare $(LIB) $(TARGET)

prepare:
	mkdir -p $(OBJDIR) $(BINDIR)


$(LIB): $(DATA_OBJS)
	ar rcs $(LIB) $(DATA_OBJS)


$(TARGET): $(LIB) $(OTHER_OBJS)
	$(CC) $(CXXFLAGS) $(OTHER_OBJS) $(LIB) $(LINKFLAGS) -o $(TARGET)


$(OBJDIR)/%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJDIR)/*.o
	rm -f $(LIB)
	rm -f $(TARGET)

help:
	@echo "make        - compileaza aplicatia folosind biblioteca"
	@echo "make clean  - sterge fisierele temporare"
