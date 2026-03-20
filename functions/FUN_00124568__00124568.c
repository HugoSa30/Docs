/*
 * Program: n42.bin
 * Function: FUN_00124568
 * Entry: 00124568
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00124568(void)

{
  int iVar1;
  
  if (B_wakeup != 0) {
    FUN_001a5e0c(0,0);
  }
  _8(0,2);
  _8(1,2);
  B_diagtimeout = B_diagtimeout;
  B_canoff = 0;
  diagtime = 0;
  if (rememberP3Max != 0) {
    iVar1 = (**(code **)(_DAT_003fbd60 + 0x20))(1);
    *(dword *)(iVar1 + 0xc) = rememberP3Max;
    iVar1 = (**(code **)(_DAT_003fbd60 + 0x18))();
    if (iVar1 == 0) {
      (**(code **)(_DAT_003fbd60 + 0x1c))();
    }
    rememberP3Max = 0;
  }
  _DAT_003fffd4 = 0;
  return;
}

