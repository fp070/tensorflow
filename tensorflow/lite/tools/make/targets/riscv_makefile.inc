# Settings for RiscV platforms.
ifeq ($(TARGET), riscv)
  TARGET_ARCH := riscv
  #TARGET_TOOLCHAIN_PREFIX := riscv32-unknown-elf-
  TARGET_TOOLCHAIN_PREFIX := riscv64-unknown-linux-gnu-

  #CXXFLAGS += -march=gap8
  #CXXFLAGS += -DTFLITE_MCU
	LIBS += -ldl
	BUILD_TYPE := micro
endif
