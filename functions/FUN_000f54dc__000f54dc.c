/*
 * Program: n42.bin
 * Function: FUN_000f54dc
 * Entry: 000f54dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f54dc(byte *param_1,byte *param_2,undefined *param_3,ushort *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (_DAT_003fc35c < 2) {
    (*(code *)&SUB_00faed08)(0x34,0);
    uVar2 = 0;
  }
  else if (_DAT_003fc35c == 5) {
    uVar2 = *(undefined4 *)_DAT_003fc354[1];
    bVar1 = (byte)((uint)uVar2 >> 0x18);
    *param_1 = bVar1 >> 7;
    *param_2 = bVar1 & 0x7f;
    *param_3 = (char)((uint)uVar2 >> 0x10);
    *param_4 = (ushort)uVar2 & 0x7fff;
    if (*param_1 != 0) {
      *(int *)(*_DAT_003fc354 + 0x18) = 2 << ((uint)*(byte *)(_DAT_003fc354 + 2) * 2 & 0x3f);
      (*(code *)&SUB_00faed08)(1,0);
    }
    uVar2 = 1;
  }
  else {
    (*(code *)&SUB_00faed08)(0x33,0);
    uVar2 = 0;
  }
  return uVar2;
}

