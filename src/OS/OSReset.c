extern void OSPanic(const char* file, int line, const char* msg, ...);

void OSResetSystem(int reset, unsigned int flags, int forceMenu)
{
	OSPanic("OSReset.c", 1185, "OSResetSystem() is obsoleted. It doesn't work any longer.\n");
}
