CC = gcc
BUILD_DIR = build

EXEC = oec
SRC = $(shell find . -name '*.c' ! -name '*test.c')
OBJ = $(patsubst ./src/%.c, ./build/%.o, $(SRC))

TEST_EXEC = test
TEST_SRC = $(shell find . -name '*.c' ! -name 'main.c')
TEST_OBJ = $(patsubst ./src/%.c, ./build/%.o, $(TEST_SRC))


all : $(EXEC) $(TEST_EXEC)

$(EXEC): $(OBJ)
	@echo "Linking $@"
	@$(CC) -o $@ $^

$(TEST_EXEC): $(TEST_OBJ)
	@echo "Linking $@"
	@$(CC) -o $@ $^

$(BUILD_DIR)/%.o: src/%.c
	@echo "Compiling $<..."
	@mkdir -p $(shell dirname $@)
	@$(CC) -c -Wall $< -o $@
