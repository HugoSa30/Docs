/*
 * Program: n42.bin
 * Function: FUN_00104148
 * Entry: 00104148
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00104148(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00103af4();
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else if ((*(int *)(DAT_001c000c + 0xc0000) == -1) && (*(int *)(DAT_001c0010 + 0xc0000) == -1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

