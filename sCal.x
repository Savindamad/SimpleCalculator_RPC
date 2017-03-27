struct defvar{
	char x;
	float a;
	float b;
};

program MY_PROG{
	version MY_VERSION{
		float S_CAL(defvar)=1;
	} = 1;
} = 0x23451111;
