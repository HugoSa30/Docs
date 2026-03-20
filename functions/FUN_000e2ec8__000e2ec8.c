/*
 * Program: n42.bin
 * Function: FUN_000e2ec8
 * Entry: 000e2ec8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e2ec8(void)

{
  char cVar1;
  
  cVar1 = FUN_000a87cc(&KLNWPOST,tmot);
  nwpos_tkor = cVar1 + 0x80;
  cVar1 = FUN_000a87cc(KLNWPOSN,nmot);
  nwpos_nkor = cVar1 + 0x80;
  return;
}

