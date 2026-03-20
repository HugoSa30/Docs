/*
 * Program: n42.bin
 * Function: FUN_00093110
 * Entry: 00093110
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00093110(ushort *param_1,ushort *param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  sVar1 = 0;
  if (0 < (int)param_3) {
    do {
      if (((uint)param_1 & 1) == 0) {
        if (param_3 == 1) {
          uVar4 = (ushort)*(byte *)param_2 << 8 | *param_1 & 0xff;
          goto LAB_00093180;
        }
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        iVar2 = 0xfffe;
      }
      else {
        param_1 = (ushort *)((int)param_1 + -1);
        uVar4 = *param_1 & 0xff00 | (ushort)*(byte *)param_2;
LAB_00093180:
        param_2 = (ushort *)((int)param_2 + 1);
        iVar2 = 0xffff;
      }
      param_3 = param_3 + iVar2 & 0xffff;
      *_DAT_003f9e4c = *(undefined2 *)(_DAT_003f9e60 + 10);
      *param_1 = uVar4;
      param_1 = param_1 + 1;
      uVar3 = 0;
      do {
        sVar1 = FUN_00093248();
        if (sVar1 == 0x2000) {
          sVar1 = 0x80;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 < 10000000) && (sVar1 == 0x80));
      if (uVar3 == 10000000) {
        sVar1 = 0x1000;
      }
    } while ((param_3 != 0) && (sVar1 == 0));
  }
  FUN_00093228();
  return sVar1;
}

