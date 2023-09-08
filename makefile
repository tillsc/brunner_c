LDFLAGS  = -lm
CFLAGS   = -std=c99"
RM      := rm
OUTDIR  := out
SOURCES := ${wildcard *.c}
DBCS    := ${wildcard *.dbc}
TARGET  := brunner
DBCC_DIR:= dbcc/

all: $(DBCC_DIR)

$(DBCC_DIR):
	$(MAKE) -C $@

.PHONY: all $(DBCC_DIR)

