/*
 * Program: n42.bin
 * Function: FUN_0016991c
 * Entry: 0016991c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00169a1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016991c(void)

{
  int iVar1;
  uint uVar2;
  
  if (B_acc == '\0') {
    DAT_005bb7f8 = func_0xff2189bc(&DAT_001cf232,DAT_005b930a);
    DAT_005bb7fa = func_0xff2189bc(&DAT_001cf254,DAT_005b930a);
    DAT_005bb7fc = func_0xff2189bc(&DAT_001cf276,DAT_005b930a);
    DAT_005bb802 = func_0xff218c78(&DAT_001cf298,gangi);
    iVar1 = (uint)_DAT_001c1dc6 - (uint)DAT_005bb802;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0xffff < iVar1) {
      iVar1 = 0xffff;
    }
    DAT_005b92fe = (undefined2)iVar1;
    DAT_005bb804 = func_0xff218c78(&DAT_001cf2ba,gangi);
    uVar2 = (uint)_DAT_001c1dc8 + (uint)DAT_005bb804;
    if (0xffff < uVar2) {
      uVar2 = 0xffff;
    }
    DAT_005b9302 = (undefined2)uVar2;
    DAT_005bb806 = func_0xff218c78(&DAT_001cf2dc,gangi);
    DAT_005bb808 = func_0xff218c78(&DAT_001cf2fe,gangi);
    DAT_005bb80a = func_0xff218c78(&DAT_001cf320,gangi);
    DAT_005bb80c = func_0xff218c78(&TSWKNBGA,gangi);
    DAT_005bb80e = func_0xff218c78(&TSWKNVGA,gangi);
    DAT_005b92f8 = func_0xff218c78(&DAT_001cf386,gangi);
  }
  return;
}

