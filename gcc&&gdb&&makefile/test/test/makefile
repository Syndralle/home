objects = foo.o bar.o

# all: $(objects)
# include $(objects:.o=.d)
foo.o : foo.c foo.h
bar.o : bar.c bar.h
$(objects): %.o: %.c
	@echo $< $@
	$(CC) -c $(CFLAGS) $< -o $@

# %.d: %.c
# 	@set -e; rm -f $@; \
# 	$(CC) -M $(CPPFLAGS) $< > $@.$$$$; \
# 	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
# 	rm -f $@.$$$$
