/*
 * Program: n42.bin
 * Function: FUN_00090104
 * Entry: 00090104
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090104(void)

{
  int iVar1;
  undefined4 in_MSR;
  undefined4 in_SRR1;
  
  if ((_DAT_002fc010 & 0x80000000) != 0) {
    iVar1 = 0x1f;
    do {
      iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    _DAT_002fc010 = 0x80000000;
    returnFromInterrupt(in_MSR,in_SRR1);
    return;
  }
  _RV_B_ECULOCK = 0;
  FUN_00096e40(0x7f7f7f7f,0x7f7f7f7f,0x7f7f7f7f,0x7f7f7f7f,0x7f7f7f7f,0x7f7f7f7f,0x7f7f7f7f,
               0x7f7f7f7f);
  FUN_00090104();
  if (_DAT_003fffec == iRam00007d3c) {
    FUN_00097324();
    return;
  }
  return;
}

