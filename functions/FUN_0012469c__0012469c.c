/*
 * Program: n42.bin
 * Function: FUN_0012469c
 * Entry: 0012469c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012469c(void)

{
  int iVar1;
  
  B_diagtimeout = 0;
  diagtime = 0;
  B_dtimer = B_dtimer;
  B_canoff = B_canoff;
  B_cdiagoff = B_cdiagoff;
  iVar1 = (**(code **)(_DAT_003fbd60 + 0x20))(1);
  if (rememberP3Max == 0) {
    rememberP3Max = *(dword *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0xc) = 40000000;
  iVar1 = (**(code **)(_DAT_003fbd60 + 0x18))();
  if (iVar1 == 0) {
    (**(code **)(_DAT_003fbd60 + 0x1c))();
  }
  return;
}

