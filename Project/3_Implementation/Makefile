PROJ_NAME=areascanner
SRC=main.c

ifdef OS
  RM=del/q
  FixPath = $(subst /,\,$1)
  EXEC = exe  
else
  ifeq ($(shell uname),Linux) 
   RM = rm -rf
   FixPath = $1
   EXEC = out
  endif
endif    
Build:
	gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
run:Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
