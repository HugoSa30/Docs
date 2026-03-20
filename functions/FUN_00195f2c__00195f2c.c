/*
 * Program: n42.bin
 * Function: FUN_00195f2c
 * Entry: 00195f2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00195f2c(void)

{
  int iVar1;
  short sVar2;
  
  if ((DAT_003fbeae == '\0') && (DAT_003fbea4 != '\0')) {
    iVar1 = func_0xff217f20((uint)DAT_001c1f2c << 8,vfzgv1_w,_DAT_003fab84,_DAT_003fab84 & 0xffff);
    _DAT_003fab84 = (ushort)((uint)iVar1 >> 0x10);
    DAT_005b930c = _DAT_003fab84;
    DAT_005b930a = _DAT_003fab84;
    _DAT_003fab84 = iVar1;
  }
  else {
    DAT_005b930a = vfzg_w;
    _DAT_003fab84 = (uint)vfzg_w << 0x10;
  }
  DAT_005b9308 = vfzg_w;
  if ((DAT_003fdfdf & 1) != 0) {
    DAT_005b9308 = DAT_005b930c;
  }
  DAT_003fbf71 = DAT_003fdf47 & 1;
  iVar1 = (uint)DAT_005b930a - (uint)_DAT_003fab88;
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  else if (0x7fff < iVar1) {
    iVar1 = 0x7fff;
  }
  sVar2 = (short)iVar1;
  if (sVar2 < 0x100) {
    if (sVar2 < -0x100) {
      DAT_005b90a5 = 0x80;
    }
    else {
      DAT_005b90a5 = (undefined)(sVar2 >> 1);
    }
  }
  else {
    DAT_005b90a5 = 0x7f;
  }
  _DAT_003fab88 = DAT_005b930a;
  return;
}

