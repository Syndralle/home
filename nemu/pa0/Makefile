# helloworld : test.o
# 	gcc test.o -o helloworld

# test.o : test.c
# 	gcc -c test.c -o test.o
# object = test.c

# ellotest : ${object}# 	
# 	gcc ${object} -o hellotest
# clean:

# object = test.o
# hello : $(object)
# 	gcc $(object) -o hello
# test.o : test.c
# 	gcc -c test.c -o test.o	
# clean:
#	rm -f ${object}

# .PHONY: clean
# CC  = gcc
# BIN = a.out
# OBJS = hello.o
# OBJS += module.o
# $(BIN) : $(OBJS)
# 	@echo "start compiling..."
# 	@echo $(OBJS)
# 	$(CC) -o $(BIN) $(OBJS)
# 	@echo "compile done"
# hello.o : hello.c
# 	$(CC) -c -o hello.o hello.c
# module.o : module.c
# 	$(CC) -c -o module.o module.c
# clean:
# 	rm -f $(BIN) $(OBJS)

# CC = gcc
# objects = foo.o bar.o
# all: ${objects}
# ${object}: %.o: %.c
# 	${CC} -c $< -o $@

# CC = gcc
# files = foo.elc bar.o lose.o
# $(filter %.o,$(files)): %.o: %.c
# 	$(CC) -c $(CFLAGS) $< -o $@
# $(filter %.elc,$(files)): %.elc: %.el
# 	emacs -f batch-byte-compile $<


# objects = foo.o bar.o
# all: ${objects}

%.d: %.c
	@set -e; rm -f $@; \
	$(CC) -M $(CPPFLAGS) $< > $@.$$$$; \
#	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
#	rm -f $@.$$$$
