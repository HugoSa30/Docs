/*
 * Program: n42.bin
 * Function: FUN_000a1d30
 * Entry: 000a1d30
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000a1d30(ushort *param_1,ushort *param_2,short param_3)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  
  sVar1 = 0;
  if (param_3 != 0) {
    do {
      if (((uint)param_1 & 1) == 0) {
        if (param_3 == 1) {
          uVar3 = (ushort)*(byte *)param_2 << 8 | *param_1 & 0xff;
          param_2 = (ushort *)((int)param_2 + 1);
          param_3 = 0;
        }
        else {
          uVar3 = *param_2;
          param_2 = param_2 + 1;
          param_3 = param_3 + -2;
        }
      }
      else {
        param_1 = (ushort *)((int)param_1 + -1);
        uVar3 = *param_1 & 0xff00 | (ushort)*(byte *)param_2;
        param_2 = (ushort *)((int)param_2 + 1);
        param_3 = param_3 + -1;
      }
      *_DAT_00011e70 = *(undefined2 *)(_DAT_00011e84 + 10);
      *param_1 = uVar3;
      param_1 = param_1 + 1;
      uVar2 = 0;
      do {
        sVar1 = FUN_000a1c14();
        if (sVar1 == 0x2000) {
          sVar1 = 0x80;
        }
        uVar2 = uVar2 + 1;
        if (9999999 < uVar2) {
          if (uVar2 == 10000000) {
            sVar1 = 0x1000;
          }
          break;
        }
      } while (sVar1 == 0x80);
    } while ((param_3 != 0) && (sVar1 == 0));
  }
  FUN_000a1bf0();
  return sVar1;
}

