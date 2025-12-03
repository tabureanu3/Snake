CC = g++
ROOT_DIR = .
CXXFLAGS = -std=c++20 -O2 -fno-common -I. \
	-I$(ROOT_DIR)/dependencies/gcc-raylib/include

LINKFLAGS = -L$(ROOT_DIR)/dependencies/gcc-raylib/lib \
	-lraylibdll -lopengl32 -lgdi32 -lwinmm -lole32 -lcomdlg32

# Directoare
BINDIR = bin
OBJDIR = obj

# Surse pentru biblioteca de date
DATA_SRCS = \
    point.cpp \
    apple.cpp \
    board.cpp \
    direction.cpp \
    snake.cpp

DATA_OBJS = $(DATA_SRCS:%.cpp=$(OBJDIR)/%.o)

# Surse pentru engine + UI
OTHER_SRCS = \
    RaylibPainter.cpp \
    engine.cpp \
    main.cpp

OTHER_OBJS = $(OTHER_SRCS:%.cpp=$(OBJDIR)/%.o)

LIB = $(BINDIR)/libsnake_data.a
TARGET = $(BINDIR)/Snake.exe

# =========================
#       Build principal
# =========================

all: prepare $(LIB) $(TARGET)

prepare:
	mkdir -p $(OBJDIR) $(BINDIR) tests

# 1. Biblioteca statică
$(LIB): $(DATA_OBJS)
	ar rcs $(LIB) $(DATA_OBJS)

# 2. Executabil principal
$(TARGET): $(LIB) $(OTHER_OBJS)
	$(CC) $(CXXFLAGS) $(OTHER_OBJS) $(LIB) $(LINKFLAGS) -o $(TARGET)

# 3. Regulă comună obiecte
$(OBJDIR)/%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

# =========================
#       Teste unitare
# =========================

TESTS = tests/test_point tests/test_apple tests/test_board tests/test_snake

test: $(TESTS)
	for t in $(TESTS); do ./$$t; done
	@echo "All tests passed!"

tests/test_point: tests/test_point.cpp $(LIB)
	$(CC) $(CXXFLAGS) $< $(LIB) -o $@

tests/test_apple: tests/test_apple.cpp $(LIB)
	$(CC) $(CXXFLAGS) $< $(LIB) -o $@

tests/test_board: tests/test_board.cpp $(LIB)
	$(CC) $(CXXFLAGS) $< $(LIB) -o $@

tests/test_snake: tests/test_snake.cpp $(LIB)
	$(CC) $(CXXFLAGS) $< $(LIB) -o $@


# =========================
#       Curățare
# =========================

clean:
	rm -f $(OBJDIR)/*.o
	rm -f $(LIB)
	rm -f $(TARGET)
	rm -f tests/test_*
