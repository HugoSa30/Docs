/*
 * Program: n42.bin
 * Function: FUN_000c3c74
 * Entry: 000c3c74
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c3c74(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  kt_zuen_fdOutPattern_u8 = 0;
  pbVar2 = &UNK_005b8e77;
  iVar3 = 4;
  do {
    pbVar1 = pbVar2 + 1;
    pbVar2 = pbVar2 + 2;
    kt_zuen_fdOutPattern_u8 = kt_zuen_fdOutPattern_u8 | *pbVar1 | *pbVar2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

