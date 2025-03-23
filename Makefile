# Define variables for the compilers and flags

CC_WIN32 = i686-w64-mingw32-g++ # Win32 compiler (Windows 32-bit)
CC_AMD64_LINUX = g++ # AMD64 compiler (Linux 64-bit)
CC_AARCH64 = aarch64-linux-gnu-g++ # AArch64 compiler (Linux ARM 64-bit)

CFLAGS = -Wall -O2 # Basic flags for optimization and warnings

# Target filenames
TARGET_WIN32 = game_win32.exe
TARGET_AMD64_LINUX = game_posix_x86_64.out
TARGET_AARCH64 = game_posix_aarch64.out

# Default rule
all: $(TARGET_WIN32) $(TARGET_AMD64_LINUX) $(TARGET_AARCH64)

# Rule for Win32 (Windows 32-bit)
$(TARGET_WIN32): game.cpp
	$(CC_WIN32) $(CFLAGS) -o $(TARGET_WIN32) game.cpp

# Rule for AMD64 (Linux 64-bit)
$(TARGET_AMD64_LINUX): game.cpp
	$(CC_AMD64_LINUX) $(CFLAGS) -o $(TARGET_AMD64_LINUX) game.cpp

# Rule for AArch64 (Linux ARM 64-bit)
$(TARGET_AARCH64): game.cpp
	$(CC_AARCH64) $(CFLAGS) -o $(TARGET_AARCH64) game.cpp

# Clean up generated files
clean:
	rm -f $(TARGET_WIN32) $(TARGET_AMD64_LINUX) $(TARGET_AARCH64)