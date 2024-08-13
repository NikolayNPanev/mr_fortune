###################################
# CopyRight: Nikolay Panev        #
# 2024 - Malko Turnovo, Bulgaria  #
###################################

APP_NAME=mr_fortune
BUILDER=g++ 
main= src/main.cpp
proj_bin=bin
install_bin=/usr/local/bin/$(APP_NAME)
MAIN_BUILD_VAR= g++ -o $(proj_bin)/$(APP_NAME) $^
MAIN_PREREQ=src/main.cpp

all: $(APP_NAME)

user.o: src/int/user/user.cpp src/int/user/user.h
	$(BUILDER) -c src/int/user/user.cpp src/int/user/user.h -o src/bld/user.o
	MAIN_PREREQ+= user.o


mr_fortune: $(MAIN_PREREQ)
	$(MAIN_BUILD_VAR)

clean: $(MAIN_PREREQ)
	rm -f bin/*
	rm -f src/bld/*
	$(MAIN_BUILD_VAR)

install: $(APP_NAME)
	sudo cp $(proj_bin)/$(APP_NAME) $(install_bin)
	sudo mkdir -p /var/lib/$(APP_NAME)/data