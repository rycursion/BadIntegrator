SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin

EXE := $(BIN_DIR)/BadIntegrator

SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJ := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CXX := g++
CXXFLAGS := -Wall -std=c++11
CPPFLAGS := -Iinclude -MMD -MP
LDFLAGS  := -Llib
LDLIBS   := -lm


.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJ) | $(BIN_DIR)
	$(CXX) $(LDFLAGS) $^ -o $@ $(LDLIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

#$(EXE): $(SRC_DIR)/*.cpp | $(BIN_DIR)
#	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $< -o $@ 

$(BIN_DIR) $(OBJ_DIR):
	mkdir -p $@
#default:
#	$(CXX) $(CXXFLAGS) -o BadIntegrator src/integrator.cpp
clean:
	@$(RM) -rv $(BIN_DIR) $(OBJ_DIR)

-include $(OBJ:.o=.d)