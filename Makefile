all:
	@chmod +x ./build.sh
	./build.sh .

.PHONY: run
run: $(file)
	@chmod + ./runner.sh
	./runner.sh $(file)

.PHONY: help
help:
	@echo "Usage: make [target]"
	@echo "Available targets:"
	@echo "	all: build all files"
	@echo "	run file=[FILE]: run the program, where FILE is the name of the file to run"
	@echo "	clean: remove all build files"
	@echo "	help: print this help"

.PHONY: clean
clean:
	@find . -type d -name "build" | xargs rm -rf
	@echo "All builds removed"