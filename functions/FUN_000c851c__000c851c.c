/*
 * Program: n42.bin
 * Function: FUN_000c851c
 * Entry: 000c851c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c851c(void)

{
  char cVar1;
  dword local_8 [2];
  
  if (sync_level < 5) {
    cVar1 = (*(code *)&SUB_0006466c)(local_8);
    if (cVar1 == '\0') {
      tseg_l = 0xffffffff;
    }
    else {
      tseg_l = local_8[0];
    }
  }
  return;
}

