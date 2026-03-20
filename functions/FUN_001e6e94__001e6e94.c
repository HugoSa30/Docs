/*
 * Program: n42.bin
 * Function: FUN_001e6e94
 * Entry: 001e6e94
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e6e94(uint param_1)

{
  short sVar1;
  
  sVar1 = FUN_001e85ec();
  if (param_1 == 0x40) {
    param_1 = FUN_001e60e8(sVar1 == 0x1a);
    param_1 = param_1 & 0xff;
  }
  FUN_001e57dc(param_1,&DAT_003fb8c8);
  DAT_003fb8c8 = 0xe0;
  return;
}

