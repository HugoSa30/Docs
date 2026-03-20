/*
 * Program: n42.bin
 * Function: FUN_00092534
 * Entry: 00092534
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092534(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = false;
  do {
    uVar2 = 0x1f - LZCOUNT((uint)_DAT_003f9ef0);
    if (uVar2 == 0xffffffff) {
      bVar1 = true;
    }
    else {
      (**(code **)(&LAB_001c0080 + uVar2 * 4))();
      _DAT_003f9ef0 = _DAT_003f9ef0 & ~(ushort)(1 << (uVar2 & 0x3f));
    }
  } while (!bVar1);
  return;
}

