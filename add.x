struct longint {
        long a;
        long b;
};

program ADD_PROG {
        version ADD_VERS {
                int ADD(longint) = 1;
        } = 1;
} = 0x23451111;
