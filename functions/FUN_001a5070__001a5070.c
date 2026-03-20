/*
 * Program: n42.bin
 * Function: FUN_001a5070
 * Entry: 001a5070
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a5070(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(int *)(DAT_005ba9f0 + 0x18) + param_1 * 0xc);
  if (*pcVar1 == '\v') {
    FUN_0010ef68(pcVar1[1],1);
  }
  *pcVar1 = '\b';
  FUN_0010f75c();
  return;
}

