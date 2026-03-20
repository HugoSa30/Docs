/*
 * Program: n42.bin
 * Function: FUN_0016f8f0
 * Entry: 0016f8f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016f8f0(void)

{
  char cVar1;
  
  cVar1 = func_0xff219ee0(DAT_001c671a,&DAT_001c671c,DAT_001c671b,&DAT_001c672c,&DAT_001c673c,nmot,
                          rl);
  _DAT_003fadd6 = (short)((int)cVar1 << 6) + -0x8000;
  _DAT_003fadd8 = (short)(0x200 - cVar1) * 0x40;
  return;
}

