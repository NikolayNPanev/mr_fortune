###################################
# CopyRight: Nikolay Panev        #
# 2024 - Malko Turnovo, Bulgaria  #
###################################

APP_NAME=mr_fortune
BUILDER=g++ 
main= src/main.cpp
proj_bin=bin
MAIN_BUILD_VAR=$(BUILDER) $(main) -o $(proj_bin)/$(APP_NAME)
install_bin=/usr/local/bin/$(APP_NAME)

all: $(APP_NAME)

mr_fortune: src/main.cpp
	$(MAIN_BUILD_VAR)

clean:
	rm -f bin/*
	$(MAIN_BUILD_VAR)

install: $(APP_NAME)
	sudo cp $(proj_bin)/$(APP_NAME) $(install_bin)
	sudo mkdir -p /var/lib/$(APP_NAME)/data