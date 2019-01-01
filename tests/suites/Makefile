CFLAGS ?=
LDFLAGS ?=

WARNING_FLAGS = -Wall -W
LOCAL_CFLAGS = $(WARNING_FLAGS) -I../include -I../../include
LOCAL_LDFLAGS ?=

SUITES: all_suites test_suite_ASN1Type

all_suites: catch_main.o test_suite_ASN1Type.o
	echo "  LD    $@"
	$(CC) $^ $(LOCAL_LDFLAGS) $(LDFLAGS) -o $@

test_suite_ASN1Type: test_suite_ASN1Type.o catch_main.o
	echo "  LD    $@"
	$(CC) $^ $(LOCAL_LDFLAGS) $(LDFLAGS) -o $@

.cpp.o:
	echo "  CC    $<"
	$(CC) $< $(LOCAL_CFLAGS) $(CFLAGS) -c
