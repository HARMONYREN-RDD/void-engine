PROJECT_NAME := voe
INCLUDE_DIR := include
SRC_DIR := src
BUILD_DIR := build
LIBS_DIR := libs

SRC := $(shell find $(SRC_DIR) -type f -name '*.cpp')
OBJ := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC))

CXX := g++
CXX_FLAGS := -std=c++17 -Wall -I$(INCLUDE_DIR) `sdl2-config --cflags`
LD_FLAGS := -lcrypto -ldl -rdynamic `sdl2-config --libs` -lyaml-cpp

LIB_INCLUDES := $(foreach lib,$(LIBS_DIR),-I$(lib)/include)
CXX_FLAGS += $(LIB_INCLUDES)

LIBS := $(wildcard $(LIBS_DIR)/*.a)

.PHONY: all clean

all: $(BUILD_DIR) $(BUILD_DIR)/$(PROJECT_NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/$(PROJECT_NAME): $(OBJ) $(LIBS)
	$(CXX) -o $@ $^ $(LD_FLAGS)

clean:
	rm -rf $(BUILD_DIR)
