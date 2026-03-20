/*
 * Program: n42.bin
 * Function: FUN_000c3744
 * Entry: 000c3744
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c3744(void)

{
  char cVar1;
  dword local_8 [2];
  
  cVar1 = (*(code *)&SUB_0006466c)(local_8);
  if (cVar1 == '\0') {
    tseg_l = 0xffffffff;
  }
  else {
    tseg_l = local_8[0];
  }
  zzyl = (*(code *)&SUB_00064a58)(1);
  return;
}

